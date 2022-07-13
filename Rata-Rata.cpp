#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int i, n;
	float sigma, data, mean, sigma_sq, var;
	cout<<"======Menghitung Rata-Rata======"<<endl;
	cout<<"Masukkan n : ";cin>>n;
	sigma=0;
	sigma_sq=0;
	cout<<"Masukkan angka :\n";
	for(i=1;i<=n;i++)
	{
		cin>>data;
		sigma_sq+=pow(data,2);
		sigma=sigma+data;
	}
	cout<<"Jumlahannya adalah = "<<sigma<<endl;
	mean=sigma/n;
	cout<<"Rata-ratanya adalah = "<<mean<<endl;
	var=(sigma_sq-(pow(sigma,2)/n))/(n-1);
	cout<<"Variannya adalah = "<<var<<endl;
	cout<<"Simpangan baku adalah = "<<sqrt(var);
}
