#include <iostream>
#include <string>
using namespace std;

const int MAX_LAGU = 100;

string judul[MAX_LAGU];
int diputar[MAX_LAGU];
int jumlahLagu = 0;


void inputLaguBaru() {
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

void tampilkanSemuaLagu() {
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
    if (jumlahLagu == 0) {
        cout << "Belum ada data.\n";
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < jumlahLagu; i++) {
        if (diputar[i] > diputar[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "\n=== Lagu Paling Favorit ===\n";
    cout << "Judul : " << judul[maxIndex] << endl;
    cout << "Jumlah Diputar : " << diputar[maxIndex] << " kali\n";
}


void bubbleSort() {
    for (int i = 0; i < jumlahLagu - 1; i++) {
        for (int j = 0; j < jumlahLagu - i - 1; j++) {
            if (diputar[j] < diputar[j + 1]) {

                int temp = diputar[j];
                diputar[j] = diputar[j + 1];
                diputar[j + 1] = temp;

                string tmpJ = judul[j];
                judul[j] = judul[j + 1];
                judul[j + 1] = tmpJ;
            }
        }
    }

    cout << "\nLagu berhasil diurutkan dari yang paling sering diputar.\n";
    tampilkanSemuaLagu();
}

void menuUtama() {
    int pilihan;

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Input Lagu Baru\n";
        cout << "2. Tampilkan Semua Lagu\n";
        cout << "3. Cari Lagu Favorit\n";
        cout << "4. Urutkan Lagu \n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            inputLaguBaru();
        }

        if (pilihan == 2) {
            tampilkanSemuaLagu();
        }

        if (pilihan == 3) {
            cariFavorit();
        }

        if (pilihan == 4) {
            bubbleSort();
        }

        if (pilihan == 5) {
            cout << "Terimakasih Telah Menggunakan Program Ini...\n";
        }

        if (pilihan < 1 || pilihan > 5) {
            cout << "Pilihan tidak valid! Coba lagi.\n";
        }

    } while (pilihan != 5);
}

int main() {
    cout << "=== Program Rekap Lagu ===\n";

    int n;
    do {
        cout << "Masukkan jumlah lagu awal (minimal 2): ";
        cin >> n;

        if (n < 2) {
            cout << "Jumlah minimal 2! Masukkan ulang.\n";
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

    menuUtama();
    return 0;
}
