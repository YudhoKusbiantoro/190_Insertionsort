// InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[20];                      //Membuat Array dengan panjang data 20
int n;                            //Membuat variable inputan n


void input() {                                                      //prosedur input
	while (true)
	{
		cout << "Masukan jumlah dta pada Array : ";                 //Membuat inputan jumlah element Array
		cin >> n;                                                   //Memanggil variable inputan n 

		if (n <= 20) {                                              //Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan minimal 20 elemen.\n";
		}
	}
	cout << endl;                                                     //Membuat jarak per garis program
	cout << "====================" << endl;                           //Membuat tampilan susunan data element array
	cout << "Masukan element Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)                                       //Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";                        //Memasukan atau menginputkan nilai data ke-n
		cin >> arr[i];                                                //Menyimpan nilai data ke-n kedalam array arr
	}
}
   

