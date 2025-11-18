#include <iostream>
#include <string>
using namespace std;

const int MAX_LAGU = 100;

string judul[MAX_LAGU];
int diputar[MAX_LAGU];
int jumlahLagu = 0;


void inputLagu() {
    if (jumlahLagu >= MAX_LAGU) {
        cout << "Data penuh, tidak bisa menambah lagu lagi.\n";
        return;
    }

    cin.ignore();
    cout << "Masukkan judul lagu : ";
    getline(cin, judul[jumlahLagu]);

    cout << "Masukkan jumlah diputar : ";
    cin >> diputar[jumlahLagu];

    jumlahLagu++;
    cout << "Lagu berhasil ditambahkan!\n";
}

void tampilkanLagu() {
    if (jumlahLagu == 0) {
        cout << "Belum ada data lagu.\n";
        return;
    }

    cout << "\n=== Daftar Lagu ===\n";
    for (int i = 0; i < jumlahLagu; i++) {
        cout << i + 1 << ". " << judul[i]
             << " | Diputar: " << diputar[i] << " kali\n";
    }
    cout << endl;
}


void cariFavorit() {
    cout << "\n .\n";
}

void bubbleSort() {
    cout << "\n .\n";
}

void menu() {
    int pilihan;

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Tambah Lagu\n";
        cout << "2. Tampilkan Semua Lagu\n";
        cout << "3. Cari Lagu Favorit \n";
        cout << "4. Urutkan Lagu \n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) inputLagu();
        else if (pilihan == 2) tampilkanLagu();
        else if (pilihan == 3) cariFavorit();
        else if (pilihan == 4) bubbleSort();
        else if (pilihan == 5) cout << "Keluar program...\n";
        else cout << "Pilihan salah! Coba lagi.\n";

    } while (pilihan != 5);
}


int main() {
    cout << "=== Program Rekap Lagu ===\n";

    int n;
    do {
        cout << "Masukkan jumlah lagu awal (minimal 2): ";
        cin >> n;

        if (n < 2) {
            cout << "⚠ Jumlah lagu minimal 2. Silakan input ulang.\n";
        }

    } while (n < 2);

    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\nLagu ke-" << (i + 1) << ":\n";
        cout << "Judul lagu : ";
        getline(cin, judul[jumlahLagu]);
        cout << "Jumlah diputar : ";
        cin >> diputar[jumlahLagu];
        cin.ignore();
        jumlahLagu++;
    }

    menu();

    return 0;
}
