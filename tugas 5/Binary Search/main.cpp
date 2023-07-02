#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

// Binary Search
int bSearch(int* arr, int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    //memasukan jumlah array
    int n;
    cout << "Masukan nilai n : ";
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
    cout << "}"<< endl;

    //untuk mencari elemen dalam array
    int target;
    cout << "Masukan elemen yang ingin dicari :";
    cin >> target ;


    // Menghitung waktu eksekusi Binary Search
    auto start = high_resolution_clock::now();

    int result = bSearch(arr, 0, n - 1, target);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    // Menampilkan hasil
    if (result == -1)
        cout << "Elemen tidak ditemukan" << endl;
    else
        cout << "Elemen ditemukan pada index ke-" << result << endl;

    cout << "Waktu pencarian : " << duration.count() << " ms" << endl;

     // Menghitung penggunaan ruang
    int space = sizeof(arr) + sizeof(n);
    cout << "Penggunaan ruang: " << space << " bytes" << endl;


    return 0;
}
