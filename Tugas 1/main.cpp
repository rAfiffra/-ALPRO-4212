#include <iostream>
using namespace std;

//==========================================================
// Deklarasi fungsi penjumlahan
int tambah(int a, int b)
{
    return a + b;
}

//==========================================================
// Deklarasi fungsi pengurangan
int kurang(int a, int b)
{
    return a - b;
}
//==========================================================
//Deklarasi fungsi penjumlahan total array
float hitungJumlah(float arr[], int n) {
   float total = 0;

   for(int i = 0; i < n; i++) {
      total += arr[i];
   }

   return total;
}
//==========================================================
// Deklarasi fungsi menghitung rata-rata array
float hitungRataRata(float arr[], int n) {
   float total = hitungJumlah(arr, n);

   return total / n;
}
//==========================================================
int main(){
    int menu, a, b;

    do{
        // Menampilkan menu
        cout << "Menu Pilihan Operasi Matematika\n";
        cout << "1. Penjumlahan"<<endl;
        cout << "2. Pengurangan"<<endl;
        cout << "3. Jumlah array dan rata rata"<<endl;
        cout << "0. Keluar"<<endl;
        cout << "Pilihan: ";
        cin >> menu;
        cout <<endl<<endl<<endl;

        switch (menu){
        case 1:
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;

            cout << "Hasil penjumlahan: " << tambah(a, b) << endl<< endl << endl;
            break;


        case 2:
            cout << "Masukkan angka pertama: ";
            cin >> a;
            cout << "Masukkan angka kedua: ";
            cin >> b;

            cout << "Hasil pengurangan: " << kurang(a, b) << endl<< endl<< endl;
            break;


        case 3:
            int n;
            float rata_rata;

            cout << "Masukkan jumlah elemen dalam array: ";
            cin >> n;
            float arr[n];

            for(int i = 0; i < n; i++) {
                cout << "Masukkan elemen ke-" << i+1 << ": ";
                cin >> arr[i];
            }
            rata_rata = hitungRataRata(arr, n);

            cout << "Jumlah nilai dalam array: " << hitungJumlah(arr, n) << endl;
            cout << "Rata-rata nilai dalam array: " << rata_rata << endl<<endl<<endl<<endl;
            break;

        case 0:
            cout << "Terima Kasih";
            break;

        default:
            //diluar case
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl<< endl<< endl;

        }

    } while (pilihan != 0);

    return 0;
}
