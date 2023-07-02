#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

// linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    int n, key;

    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    //mencetak array acak
    srand(time(0));
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    //menampilkan Array saat inii
    cout << "Array saat ini : { ";
    for (int i = 0; i < n; i++) {
        cout<< arr[i] << ", ";
    }
    cout << "}"<< endl<< endl;

    //mencari elemen dalam array
    cout << "Masukkan elemen yang ingin dicari : ";
    cin >> key;
    cout << endl;

    // Mengukur waktu eksekusi
    auto start = high_resolution_clock::now();
    int result = linearSearch(arr, n, key);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    // Menampilkan hasil
    if (result == -1) {
        cout << "Elemen tidak ditemukan dalam array.";
    } else {
        cout << "Elemen ditemukan pada indeks ke-" << result << ".";
    }

    // Menampilkan waktu eksekusi
    cout << "\n Waktu pencarian: " << duration.count() << " ms." << endl;

     // Menghitung penggunaan ruang
    int space = sizeof(arr) + sizeof(n);
    cout << "Penggunaan ruang: " << space << " bytes" << endl;


    return 0;
}
