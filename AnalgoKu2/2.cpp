#include <iostream>
using namespace std;
main(){
    int arr[100];
    int n;
    cout<<"Masukan banyak angka : "; cin>>n;
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int i;
    bool found;
    int y;
    //Algoritma
    i=0;
    cout<<"Masukan angka yang ingin dicari : "; cin>>y;
    found = false;
    while(i<=n && not found){
        if(arr[i] == y){
            found=true;
        }
        else{
            i=i+1;
        }
    }
    if(found){
        y=i+1;
    }
    else{
        y=0;
    }
    cout<<y<<endl;
}