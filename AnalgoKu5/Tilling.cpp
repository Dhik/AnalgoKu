#include <bits/stdc++.h> 
using namespace std; 
int banyakPola(int n, int m) 
{ 
    int jumlah[n + 1]; 
    jumlah[0] = 0; 
    for (int i = 1; i <= n; i++) { 
        if (i > m) 
            jumlah[i] = jumlah[i - 1] + jumlah[i - m]; 
        else if (i < m) 
            jumlah[i] = 1; 
        else
            jumlah[i] = 2; 
    }  
    return jumlah[n]; 
} 
int main() 
{ 
    int n, m;
    cout<<"Angka Pertama : "; cin>>n;
    cout<<"Angka Kedua : "; cin>>m; 
    cout << "Banyak Pola = "
         << banyakPola(n, m); 
    return 0; 
} 