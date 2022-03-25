#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int jumlah,total,makanan, harga, bayar,hasil,kembalian,diskon;
	string nmakanan;

	cout<<"KEDAI AYAM UNIVERSITY"<<endl;
	cout<<"======================================="<<endl;
	cout<<"No   Jenis makanan         = Harga "<<endl;
	cout<<"1.   Ayam goreng           = Rp:17.000"<<endl;
	cout<<"2.   Ayam bakar            = Rp:21.000"<<endl;
	cout<<"======================================="<<endl;
	cout<<endl;
	
	cout<<"Pilh Jenis makanan : ";
	cin>>makanan;
	
	if (makanan==1)
	{
		cout<<"Masukkan Jumlah Ayam goreng : ";cin>>jumlah;
		total=17000*jumlah;
		cout<<"Jadi total biayanya adalah : "<<total<<endl;
	}
	else if (makanan==2)
	{
		cout<<"Masukkan Jumlah Ayam bakar : ";cin>>jumlah;
		total=21000*jumlah;
		cout<<"Jadi total biayanya adalah : "<<total<<endl;
	}
	
	
	cout<<"Pesanan yang anda pilih adalah "<<nmakanan<<" dengan total harga Rp:"<<total<<endl;
	if(total >= 45000){
		cout<<"Anda mendapatkan diskon sebesar 10% "<<endl;
		diskon= total*0.10;
	cout<<"Masukkan jumlah Pembayaran : ";cin>>bayar;
	hasil= total-diskon;
	
		cout<<"total harga setelah di diskon  : "<<hasil<<endl;
		
	
	kembalian=bayar-hasil;	
		cout<<"Kembalian uang anda :"<<kembalian;
	}


getch();
}
