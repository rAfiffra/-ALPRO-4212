#include <iostream>
#include <chrono>
#include <random>

using namespace std;

bool cekGanjil(int i);
void genapKecil(int array[], int n);
void swap(int &a, int &b);


int main(){

const int n = 5;
    int array[n];
    cout << "Array sekarang(random): ";
    for (int i = 0; i < n; i++) {
        srand(std::chrono::steady_clock::now().time_since_epoch().count());
        array[i] = rand() % 100;
        cout << array[i] << ", ";
    }
    cout << endl;

    genapKecil(array, n);

    return 0;

}

void genapKecil(int array[], int n) {
    int tempIndex = -1;
    int temp;
    for (int i = 0; i < n; i++) {
        if (!cekGanjil(array[i])) {
            cout << array[i] << endl;
            if (tempIndex == -1) {
                tempIndex = i;
                temp = array[tempIndex];
            }
            if (array[i] < temp) {
                tempIndex = i;
                temp = array[tempIndex];
            }
        }
    }

    if (!cekGanjil(temp) && tempIndex != -1) {
        cout << "Bilangan genap terkecil: " << temp << ", dengan index: " << tempIndex;
    } else {
        cout << "Tidak ada bilangan genap";
    }
    cout << endl;
}

bool cekGanjil(int i) {
    return !(i%2 == 0);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


