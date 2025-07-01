#include <iostream>
using namespace std;

int main() {
	cout << " . ~ ^ ~ . ~ ^ Looping Logic Penjumlahan dengan Program C++ (by Hafizh Nursalim) ^ ~ . ~ ^ ~ . " <<endl<<endl;
	
	cout << " . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . " <<endl;
	cout << " Berikut merupakan bentuk umum hasil program : "<<endl;
	cout << " value + (value-k) + (value-2k) + ... + j_3 + j_2 + j_1 = hasil_1 "<<endl;
	cout << " value + (value-k) + (value-2k) + ... + j_3 + j_2 = hasil_2 "<<endl;
	cout << " value + (value-k) + (value-2k) + ... + j_3 = hasil_3 "<<endl<<" ... "<<endl;
	cout << " value = value " << endl;
	cout << " note: integer 0 < k < value, dimana angka terakhir pada penjumlahan di suatu baris merupakan integer positif terkecil " <<endl;
	cout << " . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . ~ ^ ~ . " <<endl<<endl ;
	
    int value, k; // Inisialisasi nilai variable yang diperlukan ====================
    // Input nilai variable dari user :::::::::::::::::::::::::::::::::::::::::::::::
    cout << "Masukkan nilai awal integer (value) : ";
    cin >> value;
    cout << "Masukkan nilai integer kelipatan (k) : ";
    cin >> k;
    // =============================================================================
    
    cout << "\n Hasil Penjumlahan Program C++ " << endl;
    for (int i= value%k ; i <= value ; i+=k) {	// Perulangan Baris (i : angka terakhir dari penjumlahan pada setiap baris)
		int sum = 0;
        for (int j=value ; j>=i ; j-=k) { 		// Perulangan Penjumlahan (j: angka angka penjumlahan dari kiri ke kanan pada suatu baris)
            cout << j;
            sum += j;
            if (j != i) {
                cout << "+";
            }
        }
        cout << "=" << sum << endl;
    }
    return 0;
}
