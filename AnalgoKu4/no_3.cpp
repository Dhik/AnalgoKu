/*
Nama : Mohammad Dhikri
NPM : 140810170075
Tanggal : 23 Maret 2020
*/
#include <iostream>
using namespace std;
int data[100],data2[100];
int n;
void insertion_sort(){
    int temp,i,j;
    for(i=1;i<=n;i++){
        temp = data[i];
        j = i -1;
        while(data[j]>temp && j>=0){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}
main(){
    cout<<"Masukkan Jumlah Data : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Masukkan data ke "<<i<<" : ";
        cin>>data[i];
        data2[i]=data[i];
    }
    insertion_sort();
    cout<<"Data Setelah di Sort : ";
    for(int i=1; i<=n; i++){
        cout<<" "<<data[i];
    }
}
