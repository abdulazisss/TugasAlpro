#include <stdio.h>

// Variabel global
int saldo = 10000;
int isLogged = 0;
int pin;

// Fungsi untuk autentifikasi
int authenticate(int inputPin) {
    // Ganti dengan PIN yang diinginkan
    int storedPin = 1234;
    
    if (inputPin == storedPin) {
        isLogged = 1;
        return 1;
    } else {
        return 0;
    }
}

// Fungsi untuk login
void login() {
    printf("Masukkan PIN: ");
    scanf("%d", &pin);
    
    if (authenticate(pin)) {
        printf("Login berhasil.\n");
    } else {
        printf("PIN salah. Login gagal.\n");
    }
}

// Fungsi untuk logout
void logout() {
    isLogged = 0;
    printf("Logout berhasil.\n");
}

// Fungsi untuk melihat saldo
void checkBalance() {
    printf("Saldo Anda: %d\n", saldo);
}

// Fungsi untuk mengisi saldo
void deposit() {
    int amount;
    printf("Masukkan jumlah saldo yang ingin Anda tambahkan: ");
    scanf("%d", &amount);
    
    saldo += amount;
    printf("Saldo berhasil ditambahkan.\n");
}

// Fungsi untuk melakukan penarikan
void withdraw() {
    int amount;
    printf("Masukkan jumlah saldo yang ingin Anda tarik: ");
    scanf("%d", &amount);
    
    if (amount <= saldo) {
        saldo -= amount;
        printf("Penarikan berhasil.\n");
    } else {
        printf("Saldo tidak mencukupi.\n");
    }
}

// Fungsi untuk melakukan transfer
void transfer() {
    int amount;
    printf("Masukkan jumlah saldo yang ingin Anda transfer: ");
    scanf("%d", &amount);
    
    if (amount <= saldo) {
        saldo -= amount;
        printf("Transfer berhasil.\n");
    } else {
        printf("Saldo tidak mencukupi.\n");
    }
}

// Fungsi untuk top-up e-money (DANA, GoPay, dan PLN)
void topUpEMoney() {
    int choice;
    int amount;
    
    printf("Pilih e-money yang ingin Anda top-up:\n");
    printf("1. DANA\n");
    printf("2. GoPay\n");
    printf("3. PLN\n");
    printf("Pilihan: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Masukkan jumlah saldo DANA yang ingin Anda top-up: ");
            scanf("%d", &amount);
            saldo += amount;
            printf("Top-up DANA berhasil.\n");
            break;
        case 2:
            printf("Masukkan jumlah saldo GoPay yang ingin Anda top-up: ");
            scanf("%d", &amount);
            saldo += amount;
            printf("Top-up GoPay berhasil.\n");
            break;
        case 3:
            printf("Masukkan jumlah saldo PLN yang ingin Anda top-up: ");
            scanf("%d", &amount);
            saldo += amount;
            printf("Top-up PLN berhasil.\n");
            break;
        default:
            printf("Pilihan yang Anda masukkan tidak valid.\n");
            break;
    }
}

int main() {
    int option;
while (1) {
    printf("\nAssalamulaikum Abdul Azis\n");
    printf("============================\n");
    printf("\nSELAMAT DATANG DI ATM ABO777 \n");
    printf("============================\n");
    printf("Pilih opsi:\n");
    printf("1. Login\n");
    printf("2. Logout\n");
    printf("3. Lihat Saldo\n");
    printf("4. Isi Saldo\n");
    printf("5. Penarikan\n");
    printf("6. Transfer\n");
    printf("7. Top-up e-money\n");
    printf("8. Keluar\n");
    printf("Opsi: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            if (isLogged) {
                printf("Anda sudah login.\n");
            } else {
                login();
            }
            break;
        case 2:
            if (isLogged) {
                logout();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 3:
            if (isLogged) {
                checkBalance();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 4:
            if (isLogged) {
                deposit();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 5:
            if (isLogged) {
                withdraw();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 6:
            if (isLogged) {
                transfer();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 7:
            if (isLogged) {
                topUpEMoney();
            } else {
                printf("Anda belum login.\n");
            }
            break;
        case 8:
            printf("Terima kasih telah menggunakan layanan kami. Sampai jumpa lagi!\n");
            return 0;
        default:
            printf("Opsi yang Anda pilih tidak valid.\n");
        }
    }
}
