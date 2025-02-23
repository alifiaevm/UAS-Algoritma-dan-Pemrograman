#include <iostream>
using namespace std;

int main() {
    float nilai[5];
    float jumlah = 0.0, rataRata;

    cout << "Masukkan 5 nilai:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << (i+1) << ": ";
        cin >> nilai[i];
        jumlah += nilai[i];
    }

    rataRata = jumlah / 5;

    cout << "\nRata-rata dari nilai yang dimasukkan adalah: " << rataRata << endl;

    return 0;
}
