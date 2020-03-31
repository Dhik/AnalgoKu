#include <iostream>
using namespace std;
main(){
    int arr[100];
    int n;
    cout<<"Masukan banyak angka : "; cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Masukan angka :"; cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maks;
    int jumlah = 0;
    int assign = 3;
    maks=arr[0];
    int i=0;
    while(i<=n){
        if(arr[i] > maks){
            maks=arr[i];
            assign+=1;
        }
        i=i+1;
        assign+=1;
        jumlah+=1;
    }
    cout<<maks<<endl;
    cout<<"Assign : "<<assign<<endl;
    cout<<"Jumlah : "<<jumlah<<endl;
}