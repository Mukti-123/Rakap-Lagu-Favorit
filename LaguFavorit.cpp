#include <iostream>
#include <string>
using namespace std;

const int MAX_LAGU = 100;

string judul[MAX_LAGU];
int diputar[MAX_LAGU];
int jumlahLagu = 0;

void inputAwalLagu(int n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\nLagu ke-" << i + 1 << ":\n";
        cout << "Judul lagu       : ";
        getline(cin, judul[jumlahLagu]);
        cout << "Jumlah diputar   : ";
        cin >> diputar[jumlahLagu];
        cin.ignore();
        jumlahLagu++;
    }
}

void inputLaguBaru() {
    if (jumlahLagu >= MAX_LAGU) {
        cout << "Data penuh! Tidak bisa menambah lagu lagi.\n";
        return;
    }

    cin.ignore();
    cout << "\n=== Input Lagu Baru ===\n";
    cout << "Judul lagu       : ";
    getline(cin, judul[jumlahLagu]);
    cout << "Jumlah diputar   : ";
    cin >> diputar[jumlahLagu];

    jumlahLagu++;
    cout << "Lagu berhasil ditambahkan!\n";
}

void tampilkanSemuaLagu() {
    if (jumlahLagu == 0) {
        cout << "Belum ada data lagu.\n";
        return;
    }

    cout << "\n=== Daftar Semua Lagu ===\n";
    for (int i = 0; i < jumlahLagu; i++) {
        cout << i + 1 << ". " << judul[i]
             << " | Diputar: " << diputar[i] << " kali\n";
    }
    cout << endl;
}

void menuUtama() {
    int pilih;

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Input Lagu Baru\n";
        cout << "2. Tampilkan Semua Lagu\n";
        cout << "3. Cari Lagu Favorit \n";
        cout << "4. Urutkan Lagu \n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih == 1) inputLaguBaru();
        else if (pilih == 2) tampilkanSemuaLagu();
        else if (pilih == 3 || pilih == 4)
            cout << "\n";
        else if (pilih == 5) cout << "Keluar program...\n";
        else cout << "Pilihan tidak valid!\n";

    } while (pilih != 5);
}

int main() {
    cout << "=== Program Rekap Lagu (Progress) ===\n";

    int n;
    do {
        cout << "Masukkan jumlah lagu awal (minimal 2): ";
        cin >> n;
        if (n < 2) cout << "Minimal 2 lagu! Ulangi.\n";
    } while (n < 2);

    inputAwalLagu(n);
    menuUtama();

    return 0;
}
