#include <iostream>
#include <string>
using namespace std;

// Kelas Mahasiswa sebagai kelas dasar
class Mahasiswa {
protected:
    string nama;
    string nim;
    float nilai;

public:
    // Konstruktor
    Mahasiswa(string n, string ni, float nl) {
        nama = n;
        nim = ni;
        nilai = nl;
    }

    // Metode untuk menampilkan informasi mahasiswa
    virtual void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Nilai: " << nilai << endl;
    }

    // Metode virtual untuk perhitungan grade
    virtual void hitungGrade() {
        if (nilai >= 85) {
            cout << "Grade: A" << endl;
        } else if (nilai >= 70) {
            cout << "Grade: B" << endl;
        } else if (nilai >= 55) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: D" << endl;
        }
    }
};

// Kelas MahasiswaBerprestasi yang merupakan turunan dari kelas Mahasiswa
class MahasiswaBerprestasi : public Mahasiswa {
private:
    string prestasi;

public:
    // Konstruktor kelas turunan
    MahasiswaBerprestasi(string n, string ni, float nl, string p) : Mahasiswa(n, ni, nl) {
        prestasi = p;
    }

    // Override metode untuk menampilkan informasi lengkap mahasiswa berprestasi
    void tampilkanInfo() override {
        Mahasiswa::tampilkanInfo();
        cout << "Prestasi: " << prestasi << endl;
    }

    // Override metode untuk menghitung grade
    void hitungGrade() override {
        if (nilai >= 90) {
            cout << "Grade: A+" << endl;
        } else if (nilai >= 75) {
            cout << "Grade: A" << endl;
        } else {
            Mahasiswa::hitungGrade();
        }
    }
};

int main() {
    // Membuat objek mahasiswa biasa
    Mahasiswa mhs1("John Doe", "12345", 80);
    // Membuat objek mahasiswa berprestasi
    MahasiswaBerprestasi mhs2("Jane Smith", "67890", 95, "Juara 1 Olimpiade Fisika");

    // Menampilkan informasi mahasiswa biasa
    cout << "Informasi Mahasiswa 1:" << endl;
    mhs1.tampilkanInfo();
    mhs1.hitungGrade();

    cout << endl;

    // Menampilkan informasi mahasiswa berprestasi
    cout << "Informasi Mahasiswa 2:" << endl;
    mhs2.tampilkanInfo();
    mhs2.hitungGrade();

    return 0;
}
