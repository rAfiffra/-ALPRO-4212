#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukan nilai panjang Array : ";
    cin >> n;

    //mencetak array acak
    srand(time(0));
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array sebelum diurutkan: ";
    printArray(arr, n);
    cout << endl;

    auto start = high_resolution_clock::now();
    selectionSort(arr, n);
    auto end = high_resolution_clock::now();

    cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    auto duration = duration_cast<microseconds>(end - start);
    cout << "Waktu eksekusi: " << duration.count() << " ms" << endl;

     // Menghitung penggunaan ruang
    int space = sizeof(arr) + sizeof(n);
    cout << "Penggunaan ruang: " << space << " bytes" << endl;


    return 0;
}
