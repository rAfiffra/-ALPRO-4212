#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Bubble Sort
void bbSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main() {
    //memasukan jumlah array
    int n;
    cout << "Masukan nilai panjang Array : ";
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

    // Memulai penghitungan waktu
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    bbSort(arr, n);

    // Menghentikan penghitungan waktu
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    // Menghitung durasi eksekusi
    auto duration = duration_cast<microseconds>(t2 - t1).count();

    cout << "Array setelah diurutkan : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Waktu eksekusi: " << duration << " ms" << endl;

    // Menghitung penggunaan ruang
    int space = sizeof(arr) + sizeof(n);
    cout << "Penggunaan ruang: " << space << " bytes" << endl;


    return 0;
}
