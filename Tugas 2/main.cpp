#include <iostream>
using namespace std;

//no.3
int arrayMax(int arr[], int n);
//no.4
int arrayMin(int arr[], int n);

//no.5
bool isEven(int n);
//no.6
bool isOdd(int n);

//no.7
int faktor(int a, int b);

//no.08
int search(int arr[], int n, int x);
//no.9
bool isFound(int arr[], int n, int target);

//no.10
int sumEven(int arr[], int n);
//no.11
int sumOdd(int arr[], int n);


int main() {
  int a, b, x, n, menu;

  do {
    cout << "======================================="<<endl;
    cout << "Pilih salah satu Menu"<<endl;
    cout << "1.  Nilai Maximal"<<endl;
    cout << "2.  Nilai Minimal"<<endl;
    cout << "3.  Nilai Array Maximal"<<endl;
    cout << "4.  Nilai Array Minimal"<<endl;
    cout << "5.  Boolean Even Number"<<endl;
    cout << "6.  Boolean Odd Number"<<endl;
    cout << "7.  Factor dari 2 bilangan"<<endl;
    cout << "8.  Search didalam Array"<<endl;
    cout << "9.  isFind"<<endl;
    cout << "10. Total bilangan Genap dalam Array"<<endl;
    cout << "11. Total bilangan Ganjildalam Array"<<endl;
    cout << "0.  Keluar"<<endl;
    cout << "======================================="<<endl<<endl;
    cout<<"~~~~~~~~~~~~"<<endl;
    cout << "Pilihan: ";
    cin >> menu;
    cout<<"~~~~~~~~~~~~"<<endl;
    cout <<endl<<endl;

//===============================================================================================================
    if(menu == 1){
        cout << "-------------------------+++++++++++++++-------------------------"<<endl;
        cout << " -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- " <<endl;
        cout << "Program menentukan nilai Maksimal" << endl;
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
        cout << endl;

        int maks = max(a, b);
        cout << "Nilai maksimum: " << maks << endl<<endl<<endl;
        cout << "==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*==*=="<<endl<<endl;
//===============================================================================================================
    }else if(menu == 2){
        cout<<"Program menentukan Nilai Minimal"<<endl;
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua: ";
        cin >> b;
        cout<<endl;

        int minimum = min(a, b);
        cout << "Nilai minimum: " << minimum << endl<<endl<<endl;
//===============================================================================================================
    }else if(menu == 3){
        int n1, x;
        cout<<"Program mencari nilai Maximal dalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n1;
        int arr[n1];
        cout<< endl;

        cout << "Masukkan nilai array:" << endl;
        for(int i=0; i<n1; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        cout<<endl<<endl<<endl;
        int n = sizeof(arr) / sizeof(arr[0]);
        int maks = arrayMax(arr, n);

        cout << "Nilai maksimum dari array adalah " << maks << endl<<endl<<endl;
//===============================================================================================================
    }else if(menu == 4){
        int n1, x;
        cout<<"Program mencari nilai Minimal dalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n1;
        int arr[n1];
        cout<< endl;

        cout << "Masukkan nilai array:" << endl;
        for(int i=0; i<n1; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        cout<<endl<<endl<<endl;

        int n = sizeof(arr) / sizeof(arr[0]);
        int minim= arrayMin(arr, n);

        cout << "Nilai minimum dari array adalah " << minim << endl<< endl<< endl;
//===============================================================================================================
    }else if(menu == 5){
        int n;
        cout<<"Program Even Number"<<endl;
        cout << "Masukkan sebuah bilangan: ";
        cin >> n;

        if(isEven(n)) {
            cout << n << " adalah bilangan Genap" << endl<< endl<< endl;
        }else {
            cout << n << " bukan bilangan Genap" << endl<< endl<< endl;
        }
//===============================================================================================================
   }else if(menu == 6){
        int n;
        cout<<"Program Boolean Odd Number"<<endl;
        cout << "Masukkan sebuah bilangan: ";
        cin >> n;

        if(isOdd(n)) {
            cout << n << " adalah bilangan Ganjil" << endl<< endl<< endl;
        }else {
            cout << n << " bukan bilangan Ganjil" << endl<< endl<< endl;
        }
//===============================================================================================================
    }else if(menu == 7){
        cout<<"Program Faktor dari 2 bilangan"<<endl;
        cout<<"Masukan bilangan a :";
        cin>>a;
        cout<<"Masukan bilangan b :";
        cin>>b;
        cout<<endl;

        faktor(a, b);
//===============================================================================================================
    }else if(menu == 8){
        int n, x;
        cout<<"Program mencari nilai dalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n;
        int arr[n];
        cout<< endl;

        cout << "Masukkan nilai array:" << endl;
        for(int i=0; i<n; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        cout << "Masukkan nilai yang dicari: ";
        cin >> x;
        cout<< endl<< endl;
        int result = search(arr, n, x);
        if(result == -1){
            cout << "Nilai " << x << " tidak ditemukan dalam array." << endl<< endl<< endl;
        }else{
            cout << "Nilai " << x << " ditemukan pada indeks ke-" << result << " dalam array." << endl<< endl<< endl;
        }
//===============================================================================================================
    }else if(menu == 9){
         int n1, x;
        cout<<"Program isFound dalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n1;
        int arr[n1];
        cout<< endl;

        cout << "Masukkan nilai array:" << endl;
        for(int i=0; i<n1; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        cout << "Masukkan nilai yang dicari: ";
        cin >> x;
        int target = x;
        int n = sizeof(arr) / sizeof(arr[0]);
        //int target = 5;
        if (isFound(arr, n, target)) {
            cout << "Nilai " << target << " ditemukan dalam array" << endl<< endl<< endl;
        } else {
            cout << "Nilai " << target << " tidak ditemukan dalam array" << endl<< endl<< endl;
        }

//===============================================================================================================
    }else if(menu == 10){

        int n;
        cout<<"Program Total bilangan Genap dalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n;
        int arr[n];
        cout << "Masukkan nilai-nilai dalam array:" << endl;
        for(int i=0; i<n; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        int sum = sumEven(arr, n);
        cout << "Jumlah bilangan genap dalam array adalah: " << sum << endl;
//===============================================================================================================
    }else if(menu == 11){
        int n;
        cout<<"Program Total bilangan Ganjildalam Array"<<endl;
        cout << "Masukkan jumlah array: ";
        cin >> n;
        cout<<endl;
        int arr[n];
        cout << "Masukkan nilai-nilai dalam array:" << endl;
        for(int i=0; i<n; i++) {
            cout<<"Masukan nilai ke-"<<i+1<<" :";
            cin >> arr[i];
        }
        cout<<endl<<endl;
        int sum = sumOdd(arr, n);
        cout << "Jumlah bilangan genap dalam array adalah: " << sum << endl<<endl<<endl;
//===============================================================================================================
    }else if(menu!=0){
        cout<<"Silakan pilih angka sesuai dengan Menu diatas"<<endl<<endl<<endl;
    }


  }while(menu!=0);



  return 0;
}

    //no.3
    int arrayMax(int arr[], int n) {
      int maks = arr[0];

      for(int i = 1; i < n; i++) {
        if(arr[i] > maks) {
          maks = arr[i];
        }
      }
      return maks;
    }

    //no.4
    int arrayMin(int arr[], int n) {
        int minim = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] < minim) {
                minim= arr[i];
            }
        }
        return minim;
    }

    //no.5
    bool isEven(int n) {
        return (n % 2 == 0);
    }

    //no.6
    bool isOdd(int n) {
        return (n % 2 != 0);
    }

    //no.7
    int faktor(int a, int b){
        if(a%b==0){
            cout<<b<<" adalah faktor dari "<<a<<endl<<endl<<endl;
        }else if(b%a==0){
            cout<<a<<" adalah faktor dari "<<b<<endl<<endl<<endl;
        }else{
            cout<<"kedua bilangan tidak memiliki hubungan"<<endl<<endl<<endl;
        }
    }

    //no.8
    int search(int arr[], int n, int x) {
    for(int i=0; i<n; i++) {
        if(arr[i] == x)
            return i; //mengembalikan indeks dari nilai yang dicari
    }
    return -1; //mengembalikan -1 jika nilai tidak ditemukan
}

    //no.9
    bool isFound(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return true;
            }
        }
        return false;
    }



    //no.10
    int sumEven(int arr[], int n) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] % 2 == 0) //cek apakah elemen merupakan bilangan genap
                sum += arr[i];
        }
        return sum;
    }
    //no.11
    int sumOdd(int arr[], int n) {
        int sum = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] % 2 != 0) //cek apakah elemen merupakan bilangan genap
                sum += arr[i];
        }
        return sum;
    }
