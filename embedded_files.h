#ifndef EMBEDDED_FILES_H
#define EMBEDDED_FILES_H

const char* index_html = R"(
<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Phone Directory</title>
    <style>

body {
    font-family: 'Arial', sans-serif;
    margin: 0;
    padding: 0;
    background-color: #000;
    color: #ffffff;
    display: flex;
    flex-direction: column;
    justify-content: center; /* Yatayda ortala */
    align-items: center; /* Dikeyde ortala */
    height: 100vh;
    overflow: hidden;
    position: relative;
    text-align: center; /* Metni ortala */
}

header {
    position: absolute; /* Mutlak konumlandırma */
    top: 80px; /* Sayfanın üst kısmına 20px uzaklıkta */
    width: 100%; /* Başlığın tam genişlikte olmasını sağlar */
    display: flex;
    justify-content: center; /* Başlığı yatayda ortala */
    z-index: 2; /* İçeriğin üstünde olmasını sağlar */
}

header h1 {
    font-size: 48px;
    color: #ffffff;
    margin: 0; /* Başlık etrafındaki varsayılan boşlukları kaldır */
}

img {
    position: absolute; /* Mutlak konumlandırma */
    top: 0; /* Sayfanın üst kısmına yerleştir */
    left: 0; /* Sayfanın sol kısmına yerleştir */
    width: 100%; /* Görselin genişliğini %100 yap */
    height: 100vh; /* Görselin yüksekliğini %100 yap */
    object-fit: cover; /* Görüntüyü kapsayıcıyı kaplayacak şekilde ayarla */
    z-index: 1; /* İçeriğin arkasında olmasını sağlar */
}

.container {
    background: rgba(0, 0, 0, 0.7); /* Arka planı yarı saydam yap */
    border-radius: 8px;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);
    width: 90%;
    max-width: 1920px;
    height: 80%;
    max-height: 800px;
    overflow-y: auto;
    position: relative;
    z-index: 2; /* Üstte göster */
    text-align: center; /* İçeriği ortala */
}

.main-button-container {
    text-align: left;
    margin-bottom: 20px;
}

.closeBtn {
    font-size: 28px;
    color: #000000;
    cursor: pointer;
    position: absolute;
    top: 10px;
    right: 10px;
}

table {
    width: 100%;
    border-collapse: collapse;
    margin: 20px 0;
}

th, td {
    padding: 12px;
    text-align: left;
}

thead {
    background-color: #ffffff;
    color: rgb(0, 0, 0);
}

thead th {
    font-weight: bold;
}

tbody tr:nth-child(even) {
    background-color: #f9f9f9;
    color: #000;
}

.popup {
    display: none;
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background: rgba(0, 0, 0, 0.8);
    justify-content: center;
    align-items: center;
    z-index: 1000;
}

.popup-content {
     background: #333;
     border-radius: 8px;
     padding: 20px;
     box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);
     width: 40%; /* Ekranın %40'ı kadar genişlik */
     position: relative;
     display: flex;
     flex-direction: column;
     text-align: center;
}

.popup-content h2 {
     font-size: 1.8em;
     margin-bottom: 20px;
     color: #ffffff;
     text-shadow: 0 0 10px rgba(255, 215, 0, 0.7);
}

.popup-content label {
     display: block;
     margin-bottom: 5px;
     color: #ffffff;
     font-size: 1.1em;
     text-align: left; /* Etiketleri sola hizala */}

.popup-content input {
     width: calc(100% - 20px);
     padding: 10px;
     margin-bottom: 15px;
     border: 1px solid #444;
     border-radius: 10px;
     background: #333;
     color: #f4f4f4;
     font-size: 1em;
}


.popup-content .button-container {
    display: flex;
    justify-content: center;
    gap: 15px;
}

.popup-content button {
    padding: 12px 20px;
    font-size: 1em;
    background-color: #555;
    color: #d1b179;
    border: none;
    border-radius: 10px;
    cursor: pointer;
}
.popup-content .closeBtn {
    color: #aaa;
    float: right;
    font-size: 28px;
    font-weight: bold;
    cursor: pointer;
}
.popup-content .closeBtn:hover,
.popup-content .closeBtn:focus {
    color: rgb(167, 11, 11); /* Kırmızı renk */
    text-decoration: none;
}

.button {
    display: inline-block;
    background-color: #ffffff;
    color: #000000;
    border: none;
    padding: 10px 20px;
    border-radius: 5px;
    text-decoration: none;
    font-size: 16px;
    text-align: center;
    transition: background-color 0.3s, color 0.3s;
    cursor: pointer;
    margin-top: 10px;
}

.button:hover {
    background-color: #3c3d3d;
    color: #ffffff;
}

.back-btn {
    position: absolute;
    left: 20px;
    padding: 10px 20px;
    font-size: 16px;
    background-color: #ffffff;
    color: #000000;
    border: none;
    border-radius: 5px;
    cursor: pointer;
}

footer {
    margin-top: 20px;
    text-align: center;
    padding: 10px;
    background-color: #3c3e3f;
    color: white;
    border-radius: 8px;
    box-shadow: 0 -4px 8px rgba(0, 0, 0, 0.1);
}

.dropdown {
    position: relative;
    display: inline-block;
}

.dropdown-content {
    display: none;
    position: absolute;
    background-color: #f9f9f9;
    min-width: 100px;
    box-shadow: 0px 8px 16px 0px rgba(0, 0, 0, 0.2);
    z-index: 1;
    border-radius: 5px;
}

.dropdown-content a {
    color: black;
    padding: 8px 12px;
    text-decoration: none;
    display: block;
    text-align: left;
}

.dropdown-content a:hover {
    background-color: #3c3d3d;
}

.dropdown:hover .dropdown-content {
    display: block;
}

.menu-icon {
    font-size: 18px;
    cursor: pointer;
}

.message-box {
    position: fixed;
    top: 20%;
    left: 50%;
    transform: translate(-50%, -50%);
    background-color: #ffffff;
    border: 1px solid #ffffff;
    padding: 15px;
    border-radius: 5px;
    z-index: 1001;
    width: auto;
    text-align: center;
}

.message-content {
    color: #000000;
    font-weight: bold;
}

.confirmation-dialog {
    position: fixed;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    background-color: #0f0f0f;
    color: #ffffff;
    padding: 20px;
    border-radius: 8px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.3);
    z-index: 1000;
}

.confirmation-content {
    text-align: center;
}

.confirmation-content button {
    margin: 10px;
}

.close {
    color: #aaa;
    float: right;
    font-size: 28px;
    font-weight: bold;
    cursor: pointer;
}

.close:hover,
.close:focus {
    color: rgb(167, 11, 11);
    text-decoration: none;
    cursor: pointer;
}

form {
    display: flex;
    flex-direction: column;
    align-items: center;
}

form input[type="text"],
form input[type="email"] {
    text-align: center;
    width: 100%;
    max-width: 300px;
    margin: 10px 0;
    padding: 10px;
    border: 1px solid #ccc;
    border-radius: 5px;
}

.submit-btn {
    padding: 10px 20px;
    margin-top: 15px;
}

@keyframes fadeIn {
    from {
        opacity: 0;
    }
    to {
        opacity: 1;
    }
}
    </style>
</head>
<body>

    <img src="data:image/jpeg;base64,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
4kX5C9YhisZtzy7JGKjKjmeB/9k=" alt="Sample Image">
<div class="container">
    <h1>Phone Directory</h1>
    <div class="main-button-container">
        <button class="button add-contact-btn">Contact Add</button>
    </div>
    <main>
        <table>
            <thead>
                <tr>
                    <th>Number</th>
                    <th>Name</th>
                    <th>Surname</th>
                    <th>Mail</th>
                    <th>More</th>
                </tr>
            </thead>
            <tbody id="contacts-list"></tbody>
        </table>
    </main>
</div>

<!-- Add Contact Popup -->
<div class="popup" id="addPopup">
    <div class="popup-content">
        <span class="closeBtn" id="closeAddPopup">&times;</span>
        <h2>Add New Person</h2>
        <label for="add-first-name">Name</label>
        <input type="text" id="add-first-name" placeholder="Name" required>
        <label for="add-last-name">Surname</label>
        <input type="text" id="add-last-name" placeholder="Surname" required>
        <label for="add-phone">Number</label>
        <input type="text" id="add-phone" placeholder="Number" required>
        <label for="mail">Mail</label>
        <input type="text" id="add-mail" placeholder="Mail" required>
        <div class="button-container">
            <button id="cancelAddBtn">Cancel</button>
            <button id="saveAddBtn">Submit</button>
        </div>
    </div>
</div>

<!-- Update Contact Popup -->
<div class="popup" id="updatePopup">
    <div class="popup-content">
        <span class="closeBtn" id="closeUpdatePopup">&times;</span>
        <h2>UPDATE</h2>
        <label for="update-first-name">Name</label>
        <input type="text" id="update-first-name" placeholder="Name" required>
        <label for="update-last-name">Surname</label>
        <input type="text" id="update-last-name" placeholder="Surname" required>
        <label for="update-phone">Number</label>
        <input type="text" id="update-phone" placeholder="Number" required>
        <label for="update-email">Mail</label>
        <input type="email" id="update-email" placeholder="Mail" required>
        <div class="button-container">
            <button id="cancelUpdateBtn">Cancel</button>
            <button id="saveUpdateBtn">Save</button>
        </div>
    </div>
</div>

<script type="module">
document.addEventListener('DOMContentLoaded', function() {
    // Listeyi al ve tabloyu doldur
    window.getList()
    .then(function(response) {
        populateTable(response.data);
    })
    .catch(function(error) {
        console.error("getList Error:", error);
    });

    function populateTable(data) {
        const tableBody = document.getElementById('contacts-list');
        tableBody.innerHTML = '';

        data.forEach(contact => {
            const row = document.createElement('tr');
            row.innerHTML = `
                <td>${contact.number}</td>
                <td>${contact.name}</td>
                <td>${contact.surname}</td>
                <td>${contact.mail}</td>
                <td>
                    <div class="dropdown">
                        <span class="menu-icon">☰</span>
                        <div class="dropdown-content">
                            <a href="#" class="update-btn">Update</a>
                            <a href="#" class="delete-btn">Delete</a>
                        </div>
                    </div>
                </td>`;

            // `id` bilgisini satıra ekleyin
            row.setAttribute('data-id', contact.id);
            tableBody.appendChild(row);
        });

        // Update button click event listeners
        document.querySelectorAll('.update-btn').forEach(btn => {
            btn.addEventListener('click', (e) => {
                e.preventDefault();
                const contactRow = btn.closest('tr');
                const id = contactRow.getAttribute('data-id'); // ID'yi alın
                const firstName = contactRow.querySelector('td:nth-child(2)').textContent;
                const lastName = contactRow.querySelector('td:nth-child(3)').textContent;
                const phone = contactRow.querySelector('td:nth-child(1)').textContent;
                const email = contactRow.querySelector('td:nth-child(4)').textContent;

                // Formu doldur
                document.getElementById('update-first-name').value = firstName;
                document.getElementById('update-last-name').value = lastName;
                document.getElementById('update-phone').value = phone;
                document.getElementById('update-email').value = email;

                // ID'yi de popup'a ekleyin (görünmez bir input olabilir veya değişkene kaydedin)
                document.getElementById('updatePopup').dataset.id = id;

                updatePopup.style.display = 'flex';
            });
        });

        //SİLME İŞLEMİ
        // Delete button click event listeners
        document.querySelectorAll('.delete-btn').forEach(btn => {
            btn.addEventListener('click', (e) => {
                e.preventDefault();
                const contactRow = btn.closest('tr');
                const id = contactRow.getAttribute('data-id');

                showConfirmationDialog(() => {
                    window.deleteContact(id)
                    .then(function(response) {
                        console.log('Delete Başarılı:', JSON.stringify(response, null, 2));
                        alert('Kayıt başarıyla silindi!');
                        contactRow.remove();
                    })
                    .catch(function(error) {
                        console.error('Delete Hatası:', error);
                        alert('Silme sırasında hata oluştu!');
                    });
                });
            });
        });
    }

    // Popup ve buton olayları
    const addPopup = document.getElementById('addPopup');
    const updatePopup = document.getElementById('updatePopup');

    document.querySelector('.add-contact-btn').addEventListener('click', () => {
        addPopup.style.display = 'flex';
    });

    document.getElementById('closeAddPopup').addEventListener('click', () => {
        addPopup.style.display = 'none';
    });

    document.getElementById('cancelAddBtn').addEventListener('click', () => {
        addPopup.style.display = 'none';
    });

    document.getElementById('closeUpdatePopup').addEventListener('click', () => {
        updatePopup.style.display = 'none';
    });

    document.getElementById('cancelUpdateBtn').addEventListener('click', () => {
        updatePopup.style.display = 'none';
    });

    // Yeni Kişi Ekleme İşlemi
    document.getElementById('saveAddBtn').addEventListener('click', () => {
        const firstName = document.getElementById('add-first-name').value;
        const lastName = document.getElementById('add-last-name').value;
        const phone = document.getElementById('add-phone').value;
        const email = document.getElementById('add-mail').value;

        const newContact = {
            number: phone,
            name: firstName,
            surname: lastName,
            mail: email
        };

        // Yeni kişi ekleme fonksiyonunu çağır
        window.addContact(newContact)
        .then(function(response) {
            console.log('Ekleme Başarılı:', JSON.stringify(response, null, 2));
            alert('Kayıt başarıyla eklendi!');
            addPopup.style.display = 'none'; // Pop-up'ı kapat
            // getList'i tekrar çağırarak listeyi güncelleyin
            return window.getList();
        })
        .then(function(response) {
            populateTable(response.data); // Yeni verilerle tabloyu doldur
        })
        .catch(function(error) {
            console.error('Ekleme Hatası:', error);
            alert('Ekleme sırasında hata oluştu!');
        });
    });

    // Güncelleme İşlemi
    document.getElementById('saveUpdateBtn').addEventListener('click', () => {
        const id = document.getElementById('updatePopup').dataset.id;
        const firstName = document.getElementById('update-first-name').value;
        const lastName = document.getElementById('update-last-name').value;
        const phone = document.getElementById('update-phone').value;
        const email = document.getElementById('update-email').value;

        const contact = {
            id: parseInt(id),
            number: phone,
            name: firstName,
            surname: lastName,
            mail: email
        };

        // Güncelleme fonksiyonunu çağır
        window.updateContact(contact)
        .then(function(response) {
            console.log('Güncelleme Başarılı:', JSON.stringify(response, null, 2));
            alert('Kayıt başarıyla güncellendi!');
            updatePopup.style.display = 'none'; // Pop-up'ı kapat
            // getList'i tekrar çağırarak listeyi güncelleyin
            return window.getList();
        })
        .then(function(response) {
            populateTable(response.data); // Yeni verilerle tabloyu doldur
        })
        .catch(function(error) {
            console.error('Güncelleme Hatası:', error);
            alert('Güncelleme sırasında hata oluştu!');
        });
    });

    function showMessage(message) {
        const messageDiv = document.createElement('div');
        messageDiv.className = 'message-box';
        messageDiv.innerHTML = `
            <div class="message-content">${message}</div>
        `;
        document.body.appendChild(messageDiv);
        setTimeout(() => {
            document.body.removeChild(messageDiv);
        }, 3000);
    }

    function showConfirmationDialog(onConfirm) {
        const confirmationDiv = document.createElement('div');
        confirmationDiv.className = 'confirmation-dialog';
        confirmationDiv.innerHTML = `
            <div class="confirmation-content">
                <p>Are you sure you want to delete this contact?</p>
                <button id="confirm-btn" class="button">Delete</button>
                <button id="cancel-btn" class="button">Cancel</button>
            </div>
        `;
        document.body.appendChild(confirmationDiv);

        document.getElementById('confirm-btn').addEventListener('click', () => {
            onConfirm();
            document.body.removeChild(confirmationDiv);
        });

        document.getElementById('cancel-btn').addEventListener('click', () => {
            document.body.removeChild(confirmationDiv);
        });
    }
});
</script>


)";

#endif //EMBEDDED_FILES_H
