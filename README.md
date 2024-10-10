# Directory Frontend

**Directory Frontend**, telefon rehberinizi PostgreSQL veritabanı kullanarak yönetmenize olanak sağlayan C++ tabanlı bir web projesidir. **Crow** framework'ü ile güçlü bir backend oluştururken, hızlı ve esnek bir API geliştirme deneyimi sunar. Veritabanı işlemleri için **libpqxx** kütüphanesini kullanır. Bu projede, kullanıcıların telefon numaralarını ekleyebileceği, düzenleyebileceği ve silebileceği temel CRUD (Create, Read, Update, Delete) işlemleri sağlanmaktadır.

## 📌 Özellikler

-   **Kişi Ekleme:** Yeni kişileri rehbere kolayca ekleyin.
-   **Kişi Listeleme:** Rehberdeki tüm kişileri liste halinde görüntüleyin.
-   **Kişi Güncelleme:** Mevcut kişilerin bilgilerini güncelleyerek kolayca yönetim yapın.
-   **Kişi Silme:** Gereksiz veya yanlış kişileri rehberden çıkarın.
-   **PostgreSQL Tabanlı:** Güvenli ve verimli veri yönetimi için PostgreSQL veritabanı ile entegre edilmiştir.
-   **RESTful API Desteği:** CRUD işlemleri için HTTP üzerinden esnek API çağrıları yapılabilir.

## 🛠 Teknolojiler

Bu projede kullanılan başlıca teknolojiler şunlardır:

-   **C++:** Uygulamanın temel programlama dili.
-   **Crow Framework:** C++ için hızlı ve minimalist bir HTTP framework'ü.
-   **PostgreSQL:** Projede kullanılan veritabanı yönetim sistemi.
-   **libpqxx:** PostgreSQL ile C++ üzerinden veritabanı bağlantısı sağlayan kütüphane.
-   **nlohmann/json:** JSON verilerini işlemek için kullanılan modern C++ kütüphanesi.
-   **HTML, CSS & JavaScript:** Basit bir kullanıcı arayüzü ve veritabanı işlemlerini görüntülemek için kullanılır.
- **Webview:** Entegre edilmiş ön yüz ile backend arasında etkileşim sağlar.

## 📥 Kurulum

Bu projeyi yerel ortamınızda çalıştırmak için aşağıdaki adımları takip edebilirsiniz:

### 1. Gereksinimler

-   **C++**
-   **PostgreSQL**
-   **Gerekli Bağımlılıklar:**
    -   Crow
    -   libpqxx
    -   nlohmann-json

## 🚀 API Kullanımı

RESTful API ile aşağıdaki işlemleri gerçekleştirebilirsiniz:

-   **GET /contacts:** Tüm kişileri listeleyin.
-   **POST /contacts:** Yeni bir kişi ekleyin.
-   **PUT /contacts/{id}:** Belirli bir kişiyi güncelleyin.
-   **DELETE /contacts/{id}:** Belirli bir kişiyi silin.


## 🚀 Kullanım

-   **Kişi Ekleme:** Web arayüzünde "Contact Add" butonuna tıklayın ve gerekli bilgileri girin.
-   **Kişi Listeleme:** Ana sayfada tüm kişiler listelenir.
-   **Kişi Güncelleme:** Listedeki bir kişinin yanındaki "Update" seçeneğini kullanarak bilgilerini güncelleyin.
-   **Kişi Silme:** Listedeki bir kişinin yanındaki "Delete" seçeneğini kullanarak kişiyi silin.

## 🌐 Webview (Ön Yüz)

Projenin ön yüzü, entegre edilmiş HTML, CSS ve JavaScript kullanılarak geliştirilmiştir. **Webview** sayesinde kullanıcı arayüzü doğrudan uygulama içinde görüntülenir ve backend ile etkileşim sağlar. Bu sayede kullanıcılar, telefon rehberlerini rahatça yönetebilirler.

### Webview Özellikleri

-   **Etkileşimli Arayüz:** Kullanıcı dostu ve estetik tasarım.
-   **Responsive Tasarım:** Mobil, tablet ve masaüstü cihazlarda uyumlu çalışır.
-   **Dinamik Veri Görüntüleme:** API çağrıları ile veritabanındaki veriler gerçek zamanlı olarak güncellenir.
-   **Popup Pencereler:** Kişi ekleme ve güncelleme işlemleri için modal pencereler kullanılır.
