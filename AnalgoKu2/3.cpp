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
    //Deklarasi
    int i, j, mid, y;
    bool found;
    //Algoritma
    i=1;
    j=n;
    cout<<"Masukan angka yang ingin dicari : "; cin>>y;
    found = false;
    while(not found && i<=j){
        mid=(i+j)/2;
        if(arr[mid]==y){
            found=true;
        }
        else if(arr[mid] < y){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    if(found){
        y=mid+1;
    } 
    else{
        y=0;
    }
    cout<<y<<endl;
}