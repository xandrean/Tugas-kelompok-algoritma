//2022240034 Andrean Fernando Tampubolon
#include <iostream>
#include<string>
using namespace std;
struct mahasiswa
{
	char nim[10];
	char nama[50];
	char alamat[100];
	float ipk;
};
int main()
{
	mahasiswa mhs;
	cout<<"NIM \t\t: ";
	cin.getline(mhs.nim,15);
	cout<<"Nama \t\t: ";
	cin.getline(mhs.nama,50);
	cout<<"Alamat \t\t: ";
	cin.getline(mhs.alamat,100);
	cout<<"Nilai IPK \t\t: " ;cin>>mhs.ipk;
	cout<<endl;
	cout<<"NIM Mhs \t\t:"<<mhs.nim<<endl;
	cout<<"Nama Mhs \t\t:"<<mhs.nama<<endl;
	cout<<"Alamat Mhs \t\t:"<<mhs.alamat<<endl;
	cout<<"Nilai IPK Mhs \t\t:"<<mhs.ipk<<endl;
	cout<<endl;
}
