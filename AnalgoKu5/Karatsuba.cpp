/*
Nama : Mohammad Dhikri
NPM : 140810180075
Kelas : A
Tanggal : 30 - Maret -2020
*/
#include <iostream>
#include <math.h>
using namespace std;

int getLength(long value) {
	int counter = 0;
	while (value != 0) {
		counter++;
		value /= 10;
	}
	return counter;
}
long karatsuba(long x, long y) {
	int xLength = getLength(x);
	int yLength = getLength(y);
	int N = (int)(fmax(xLength, yLength));
	if (N < 10){
        return x * y;
    }
	N = (N/2) + (N%2);
	long perkalian = 10*N;

	long b = x/perkalian;
	long a = x - (b * perkalian);
	long d = y / perkalian;
	long c = y - (d * N);

	long z0 = karatsuba(a,c);
	long z1 = karatsuba(a + b, c + d);
	long z2 = karatsuba(b, d);
    return z0 + ((z1 - z0 - z2) * perkalian) + (z2 * (long)(10*(2 * N)));
}
int main() {
	long a,b;
    cout<<"Angka Pertama : "; cin>>a;
    cout<<"Angka Kedua : "; cin>>b;
	cout << karatsuba(a,b) << endl;
	return 0;
}
