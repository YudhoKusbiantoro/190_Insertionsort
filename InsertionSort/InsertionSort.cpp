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
   
void insertionsort() {                           //prosedur inertionsort
	
	int temp;                                    // membuat variable data temporer atau penyimpana sementara
	int i, j;                                    // membuat variable j sebagai penanda

	for (i = 1; i <= n - 1; i++) {               // 1. looping dengan i dimulai dari 1 hingga n-1
		
		temp = arr[i];                           // 2. simpan nilai  arr[j] ke variable sementara temp

		j = i - 1;                               // 3. setting nilai j sama dengan i - 1;

		while (j >= 0 && arr[j] > temp)          // 4. looping while dimana nilai j lebih besar sama dengan 0 dan arr[j] lebih besar dari temp
		{
			arr[j + 1] = arr[j];                 // 4a. simp arr [j] ke dalam variable arr[j+1]
			j--;                                 // 4b. decrement nilai j by 1 
		}
		
		arr[j + 1] = temp;                        // 5. simpan nilai temp ke dalam arr[j+1]

		cout << "\npass " << i << ": ";           //output ke layar 
		for (int k = 0; k < n; k++) {             //looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";                // output ke layar
		}
	}
}


void display() {                                             //prosedur display
	cout << endl;                                            //output baris kosong
	cout << "\n====================" << endl;                //output ke layar
	cout << "Element Array yang telah tersusun" << endl;     //output ke layar
	cout << "======================" << endl;                //output ke layar

	for (int j = 0; j < n; j++) {                           //looping dengan j di mulai dari 0 hingga n - 1 
		cout << arr[j] << endl;                             //output ke layar
	}
	cout << endl;                                           //output baris kosong

}

int main()
{
	input();              //memanggil input
	insertionsort();      //memanggil insertionsort
	display();            //memanggil display

}