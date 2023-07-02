#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

void insertionSort(int* arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah Array : ";
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

    auto start = high_resolution_clock::now();
    insertionSort(arr, n);
    auto end = high_resolution_clock::now();

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

//    delete[] arr;

    auto duration = duration_cast<milliseconds>(end - start);
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

    // Menghitung penggunaan ruang
    int space = sizeof(arr) + sizeof(n);
    cout << "Penggunaan ruang: " << space << " bytes" << endl;


    return 0;
}
