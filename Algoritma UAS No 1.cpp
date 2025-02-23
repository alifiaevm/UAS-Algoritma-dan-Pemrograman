#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama; 
    string Kelas;
    string MataKuliah;
    float Nilai; 
};

int main() {
    Mahasiswa mhs;

    
    cout << "Masukkan NIM: ";
    cin >> mhs.NIM;
    cin.ignore();

    cout << "Masukkan Nama: ";
    getline(cin, mhs.Nama);

    cout << "Masukkan Kelas: ";
    getline(cin, mhs.Kelas);

    cout << "Masukkan Mata Kuliah: ";
    getline(cin, mhs.MataKuliah);

    cout << "Masukkan Nilai: ";
    cin >> mhs.Nilai;


    cout << "\n--- Data Mahasiswa ---\n";
    cout << "NIM: " << mhs.NIM << endl;
    cout << "Nama: " << mhs.Nama << endl;
    cout << "Kelas: " << mhs.Kelas << endl;
    cout << "Mata Kuliah: " << mhs.MataKuliah << endl;
    cout << "Nilai: " << mhs.Nilai << endl;

    return 0;
}
