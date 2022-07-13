#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float p0, q0, x, n, z_tabel, z_hitung, int_1, int_2, p_topi, q_topi; 
	char tanda;
	cout<<"Uji Hipotesis Proporsi 1 Populasi";
	cout<<"\n===================================\n";
	cout<<"Ho : Po  = ";cin>>p0;
	cout<<"\nH1 : Po != ";cin>>p0;
	cout<<"\n--------------------\n";
	cout<<"Masukkan banyak kejadian sukses (x) = ";cin>>x;
	cout<<"\nJumlah seluruh kejadian (n) = ";cin>>n;
	cout<<"\nMasukkan nilai Z tabel = ";cin>>z_tabel;
	cout<<"\n--------------------\n";
	q0 = 1-p0;
	z_hitung = (x-n*p0)/(sqrt(n*p0*q0));
	if(z_hitung<z_tabel) tanda = '<'; else if(z_hitung==z_tabel) tanda = '=';else tanda = '>';
	cout<<"Z hitung = "<<z_hitung;
	cout<<"\nZ hitung "<<tanda<<" Z tabel yaitu "<<z_hitung<<" "<<tanda<<" "<<z_tabel;
	cout<<"\nKesimpulan : ";if(abs(z_hitung)>z_tabel) cout<<"Terima H1";else cout<<"Gagal Tolak Ho";
	p_topi = x/n;
	q_topi = 1-p_topi;
	int_1 = (p_topi)-z_tabel*(sqrt(p_topi*q_topi/n));
	int_2 = (p_topi)+z_tabel*(sqrt(p_topi*q_topi/n));
	cout<<"\n\nNilai CI = "<<int_1<<" < p < "<<int_2;
	
	return 0;
}
