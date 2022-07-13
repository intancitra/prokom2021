#include <iostream>

using namespace std;

int main()
{
	int i, n, sigma;
	cout<<"======Menghitung Penjumlahan suatu Bilangan (Sigma Notation)======"<<endl;
	cout<<"Masukkan n : ";cin>>n;
	sigma=0;
	i=1;
	while(i<=n){
		sigma+=i;
		i++;
	};
	
	//for(i=1;i<=n;i++)
	//{
		//sigma=sigma+i;
	//}
	cout<<"Jumlahannya adalah = "<<sigma;
}
