#include <iostream>

using namespace std;

int main()
{
	string nama,nrp,asal, alamat, motto;
    int tahun_lahir,tahun_sekarang,umur;
    cout<<"Masukkan Nama Anda: ";getline(cin,nama);
    cout<<"Masukkan NRP Anda: ";cin>>nrp;
    cout<<"Masukkan Asal Anda: ";cin>>asal;
    cout<<"Masukkan Alamat Anda: ";cin.ignore();getline(cin,alamat);
    cout<<"Masukkan Motto Anda: ";getline(cin,motto);
    
    cout<<"\n\n=====DATA DIRI ANDA=====\n";
    cout<<nama<<endl;
    cout<<nrp<<endl;
    cout<<asal<<endl;
    cout<<alamat<<endl;
    cout<<motto;
    
    return 0;
}
