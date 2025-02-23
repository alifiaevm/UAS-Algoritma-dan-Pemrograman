#include <iostream>
using namespace std;

int main() {
    int jumlahDeret;

    cout << "Masukkan jumlah deret: ";
    cin >> jumlahDeret;

    for (int i = 0; i < jumlahDeret; i++) {
        for (int j = 1; j <= jumlahDeret - i; j++) {
            cout << (1 + (j - 1) * 3) << " ";
        }
        cout << endl;
    }

    return 0;
}
