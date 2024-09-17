#include "libs/webview/webview.h"
#include "embedded_files.h"
#include <string>
#include <nlohmann/json.hpp>
#include <iostream>
#include "libs/libcpp-http-client.hpp"

using namespace lklibs;
using nlohmann::json;

int main(int argc, char *argv[]) {
    webview::webview w(true, nullptr);

    w.set_title("PHONE DIRECTORY");
    w.set_size(800, 600, WEBVIEW_HINT_NONE);
    w.set_html(index_html);

    // getList fonksiyonunu tanımla
    w.bind("getList", [&](const std::string &req) -> std::string {
        HttpRequest httpRequest("http://localhost:18080/contact/getlist");
        auto response = httpRequest.send().get();

        if (response.succeed) {
            return response.textData;
        } else {
            return json{{"error", response.errorMessage}}.dump();
        }
    });

    // UPDATE İŞLEMİ
    w.bind("updateContact", [&](const std::string &req) -> std::string {
        try {

            std::cout << req << std::endl;
            const json::array_t request = json::parse(req);
            const auto requestItem = request[0];
            HttpRequest httpRequest("http://localhost:18080/contact/update");
            httpRequest.setMethod(HttpMethod::PUT)
                       .addHeader("Content-Type", "application/json")
                       .setPayload(requestItem.dump());

            auto response = httpRequest.send().get();

            if (response.succeed) {
                return json{{"success", true}, {"message", "Contact updated successfully."}}.dump();
            } else {
                return json{{"success", false}, {"error", response.errorMessage}}.dump();
            }
        } catch (const std::exception &e) {
            return json{{"success", false}, {"error", e.what()}}.dump();
        }
    });

    //ADD İŞLEMİ
    w.bind("addContact", [&](const std::string &req) -> std::string {
    try {
        std::cout << req << std::endl;
        const json::array_t request = json::parse(req);
        const auto requestItem = request[0];
        HttpRequest httpRequest("http://localhost:18080/contact/add");  // Add için doğru URL'yi kullanın
        httpRequest.setMethod(HttpMethod::POST)  // POST yöntemi ekleme işlemi için uygun
                   .addHeader("Content-Type", "application/json")
                   .setPayload(requestItem.dump());

        auto response = httpRequest.send().get();

        if (response.succeed) {
            return json{{"success", true}, {"message", "Contact added successfully."}}.dump();
        } else {
            return json{{"success", false}, {"error", response.errorMessage}}.dump();
        }
    } catch (const std::exception &e) {
        return json{{"success", false}, {"error", e.what()}}.dump();
    }
});


    w.bind("deleteContact", [&](const std::string &req) -> std::string {
        try {
            std::cout << "Received request: " << req << std::endl;

            // Gelen veriyi JSON dizisinden çıkartın ve ID'yi alın
            const json::array_t request = json::parse(req);
            const std::string id_str = request[0].get<std::string>(); // JSON'dan string olarak alın
            int id = std::stoi(id_str); // Artık std::string türündedir
            std::cout << "Parsed ID: " << id << std::endl;

            HttpRequest httpRequest("http://localhost:18080/contact/delete/" + std::to_string(id));
            httpRequest.setMethod(HttpMethod::DELETE_);

            auto response = httpRequest.send().get();

            if (response.succeed) {
                return json{{"success", true}, {"message", "Contact deleted successfully."}}.dump();
            } else {
                return json{{"success", false}, {"error", response.errorMessage}}.dump();
            }
        } catch (const std::invalid_argument &e) {
            return json{{"success", false}, {"error", "Invalid argument: " + std::string(e.what())}}.dump();
        } catch (const std::out_of_range &e) {
            return json{{"success", false}, {"error", "Out of range: " + std::string(e.what())}}.dump();
        } catch (const std::exception &e) {
            return json{{"success", false}, {"error", e.what()}}.dump();
        }
    });


    w.run();
    return 0;
}
