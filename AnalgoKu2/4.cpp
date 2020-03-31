#include <iostream>
using namespace std;
main(){
    int n;
    int arr[100];
    cout<<"Masukan banyak angka : "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Masukan angka : "; cin>>arr[i];
    }
    //Deklarasi
    int i, j, insert;
    //Algoritma
    for(i=0; i<n; i++){
        insert = arr[i];
        j=i-1;
        while((arr[j] > insert) && (j>=0)){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=insert;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}