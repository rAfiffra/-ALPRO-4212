#include <iostream>

using namespace std;

void bbShort(int arr[]);
void scShort(int arr[]);

int main()
{
    int arr[5]={3,1,4,5,2};
    int arr2[5]={92,31,44,21,72};
    cout<<endl<<endl;
    cout << "Array 1 sebelum diurutkan :";
    for(int i = 0; i<5; i++){
        cout << arr[i]<<", ";
    }cout<<endl;
    cout << "Array 2 sebelum diurutkan :";
    for(int i = 0; i<5; i++){
        cout << arr2[i]<<", ";
    }
    cout<<endl<<endl;

    bbShort(arr);
    cout<<"Bubble short : ";
    for(int i = 0; i<5; i++){
        cout << arr[i]<<", ";
    }
    cout<<endl<<endl;

    scShort(arr2);
    cout << "Selection Short : ";
    for(int i = 0; i<5; i++){
        cout << arr2[i]<<", ";
    }
    cout<<endl<<endl;

    return 0;
}
void bbShort(int arr[]){
    for(int i =0; i<5; i++){
        for(int j =0; j<5-i-1; j++)
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

    }
}

void scShort(int arr2[]){
    for(int i =0; i<5; i++){
        int minIndex = i;
        for(int j = i+1; j<5; j++ ){
            if(arr2[j]<arr2[minIndex]){
                minIndex = j;
            }
        }
    }
}
