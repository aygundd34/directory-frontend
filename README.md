# PHONE DIRECTORY - FRONTEND

**Bu telefon rehberi uygulaması ön yüzü, HTML/CSS ve JavaScript ile tasarlanmış kullanıcı dostu bir arayüz sunar ve C++ tabanlı WebView ile bir masaüstü uygulaması olarak çalışır. Kullanıcı, kişilerin ad, soyad, telefon numarası ve e-posta bilgilerini ekleyebilir, güncelleyebilir veya silebilir. Uygulama, "Add" ve "Update" popup pencereleri ile kullanımı kolaylaştırır. Ayrıca, arka planda çalışan HTTP istekleri ile kişilerin listesi ve güncellemeleri sunucuya entegre bir şekilde yönetilir. Açılan webview ekrandaki tablo yapısı şu şekildedir:**

|number|  name | surname | mail | more
|--|--|--|--|--|
|  |  |

**Örnek Webview yapısı:**

```c++
#include "webview.h" 
int main() { 
webview::webview w(true); 
w.set_title("PROJECT NAME"); 
w.set_size(800, 600, WEBVIEW_HINT_NONE); 
}
```





Directory Frontend

Directory Frontend, telefon rehberinizi PostgreSQL veritabanı kullanarak yönetmenize olanak sağlayan C++ tabanlı bir web projesidir. Crow framework’ü ile hızlı ve esnek bir API geliştirme deneyimi sunarken, veritabanı işlemleri için libpqxx kütüphanesini kullanır. Bu projede, kullanıcıların telefon numaralarını ekleyebileceği, düzenleyebileceği ve silebileceği temel CRUD (Create, Read, Update, Delete) işlemleri sağlanmaktadır.
📌 Özellikler

    Kişi Ekleme: Yeni kişileri rehbere kolayca ekleyin.
    Kişi Listeleme: Rehberdeki tüm kişileri liste halinde görüntüleyin.
    Kişi Güncelleme: Mevcut kişilerin bilgilerini güncelleyerek kolayca yönetim yapın.
    Kişi Silme: Gereksiz veya yanlış kişileri rehberden çıkarın.
    PostgreSQL Tabanlı: Güvenli ve verimli veri yönetimi için PostgreSQL veritabanı ile entegre edilmiştir.
    RESTful API Desteği: CRUD işlemleri için HTTP üzerinden esnek API çağrıları yapılabilir.

🛠 Teknolojiler

Bu projede kullanılan başlıca teknolojiler şunlardır:

    C++17: Uygulamanın temel programlama dili.
    Crow Framework: C++ için hızlı ve minimalist bir HTTP framework’ü.
    PostgreSQL: Projede kullanılan veritabanı yönetim sistemi.
    libpqxx: PostgreSQL ile C++ üzerinden veritabanı bağlantısı sağlayan kütüphane.
    nlohmann/json: JSON verilerini işlemek için kullanılan modern C++ kütüphanesi.
    HTML5, CSS3 & JavaScript: Basit bir kullanıcı arayüzü ve veritabanı işlemlerini görüntülemek için kullanılır.

📥 Kurulum

Bu projeyi yerel ortamınızda çalıştırmak için aşağıdaki adımları takip edebilirsiniz:
1. Gereksinimler

    C++
    PostgreSQL
    Gerekli Bağımlılıklar:
        Crow
        libpqxx
        nlohmann-json

🚀 API Kullanımı

RESTful API ile aşağıdaki işlemleri gerçekleştirebilirsiniz:

    GET /contacts: Tüm kişileri listeleyin.
    POST /contacts: Yeni bir kişi ekleyin.
    PUT /contacts/{id}: Belirli bir kişiyi güncelleyin.
    DELETE /contacts/{id}: Belirli bir kişiyi silin.

🚀 Kullanım

    Kişi Ekleme: Arayüzde “Kişi Ekle” butonuna tıklayın ve gerekli bilgileri girin.
    Kişi Güncelleme: Rehberdeki bir kişinin adının yanındaki “Düzenle” seçeneğini kullanın.
    Kişi Silme: Bir kişinin adının yanındaki “Sil” seçeneğini kullanarak kişiyi kaldırın.

