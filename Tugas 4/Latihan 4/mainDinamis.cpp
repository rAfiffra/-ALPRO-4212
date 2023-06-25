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
    int jmlMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jmlMahasiswa;

    Mahasiswa* data = new Mahasiswa[jmlMahasiswa];

    //============================================================
    // input data
    for (int i = 0; i < jmlMahasiswa; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "NIM: ";
        cin >> data[i].NIM;

        cout << "Nama: ";
        cin.ignore();
        getline(cin, data[i].Nama);

        cout << "Jurusan: ";
        getline(cin, data[i].Jurusan);

        cout << "Tahun Lulus: ";
        cin >> data[i].TahunLulus;
        cout << endl;
    }

    // Mencetak data mahasiswa
    cout << "Data Mahasiswa (Array Dinamis):" << endl;
    cout << "====================================================================" << endl;
    cout << setw(10) << "NIM" << setw(20) << "Nama" << setw(234) << "Jurusan" << setw(25) << "Tahun Lulus" << endl;
    cout << "====================================================================" << endl;
    for (int i = 0; i < jmlMahasiswa; i++) {
        cout << setw(5) << data[i].NIM << setw(15) << data[i].Nama << setw(25) << data[i].Jurusan << setw(20) << data[i].TahunLulus << endl;
    }
    cout << "--------------------------------------------------------------------" << endl;

    delete[] data; // Menghapus array dinamis

    return 0;
}
