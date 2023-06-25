#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama;
    string Jurusan;
    int TahunLulus;
};

int main() {
    const int MAX_SIZE = 4; // Jumlah maksimal data pada array
    Mahasiswa data[MAX_SIZE];

    // ==============================================================
    data[0] = { "A11.2020.01234", "Andi", "Broadcasting", 2023 };
    data[1] = { "A11.2010.01234", "Budi", "Sistem Informasi", 2013 };
    data[2] = { "A11.2000.01234", "Ali", "DKV", 2003 };
    data[3] = { "A11.1990.01234", "Siti", "Kesehatan", 1993 };

    // ==============================================================
    cout << "Data Mahasiswa (Array Statis):" << endl;
    cout << "==============================================================================" << endl;
    cout << setw(9) << "NIM" << setw(20) << "Nama" << setw(25) << "Jurusan" << setw(18) << "Tahun Lulus" << endl;
    cout << "==============================================================================" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << setw(5) << data[i].NIM << setw(15) << data[i].Nama << setw(25) << data[i].Jurusan << setw(15) << data[i].TahunLulus << endl;
    }
    cout << "------------------------------------------------------------------------------" << endl;

    return 0;
}
