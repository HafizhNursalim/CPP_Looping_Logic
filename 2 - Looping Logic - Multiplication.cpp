#include <iostream>
using namespace std;

int main() {  
    cout << " . ~ ^ ~ . ~ ^ Looping Logic Perkalian dengan Program C++ (by Hafizh Nursalim) ^ ~ . ~ ^ ~ . " <<endl<<endl;
	
	cout << " . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . " <<endl;
	cout << " Berikut merupakan bentuk umum hasil program : "<<endl;
	cout << " lower = lower" << endl;
	cout << " lower * (lower+k) = hasil_1" << endl;
	cout << " lower * (lower+k) * (lower+2k) = hasil_2" << endl;
	cout << " lower * (lower+k) * (lower+2k) * (lower+3k) = hasil_3" << endl;
	cout << " lower * (lower+k) * (lower+2k) * (lower+3k) * ... * (lower+n*k) = hasil_n" << endl;
	cout << " note: integer lower, k, m > 0 " <<endl;
	cout << " . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . " <<endl<<endl;
	
    int lower, k, n; // Inisialisasi nilai variable yang diperlukan =============
    // Input nilai variable dari user :::::::::::::::::::::::::::::::::::::::::::
    cout << "Masukkan nilai batas bawah (lower) : ";
    cin >> lower;
    cout << "Masukkan nilai integer kelipatan (k) : ";
    cin >> k;
    cout << "Masukkan nilai integer dari batas kelipatan k (n) : ";
    cin >> n;
    // =========================================================================
	
	cout << "\n Hasil Perkalian Program C++ " << endl;
    for (int i=0 ; i <= n ; i+=1) {					// Perulangan Baris (i : kelipakatan dari k pada angka (lower+i*k) terakhir baris)
		int kali = 1;
        for (int j=lower ; j <= lower+i*k ; j+=k) {	// Perulangan Perkalian (j: angka angka perkalian dari kiri ke kanan pada setiap baris)
            cout << j;
            kali *= j;
            if (j != lower+i*k) {
                cout << "*";
            }
        }
        cout << "=" << kali << endl;
    }
    return 0;
}

