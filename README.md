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

