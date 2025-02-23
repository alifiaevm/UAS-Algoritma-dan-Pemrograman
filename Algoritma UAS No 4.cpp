#include <iostream>
using namespace std;

int main() {
    int penjualan[7][3];
    int totalNovel = 0, totalKomik = 0, totalMajalah = 0;
    
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
    string jenisBuku[3] = {"Novel", "Komik", "Majalah"};
    
    for (int i = 0; i < 7; i++) {
        cout << "Hari " << hari[i] << ":\n";
        for (int j = 0; j < 3; j++) {
            cout << jenisBuku[j] << ": ";
            cin >> penjualan[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 7; i++) {
        totalNovel += penjualan[i][0];
        totalKomik += penjualan[i][1];
        totalMajalah += penjualan[i][2];
    }

    cout << "\nLaporan Penjualan Buku:\n";
    cout << "Total Novel: " << totalNovel << endl;
    cout << "Total Komik: " << totalKomik << endl;
    cout << "Total Majalah: " << totalMajalah << endl;

    return 0;
}
