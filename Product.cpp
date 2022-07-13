#include <iostream>

using namespace std;

int main()
{
	int i, n, pi;
	cout<<"======Menghitung Perkalian suatu Bilangan (Pi Notation)======"<<endl;
	cout<<"Masukkan n : ";cin>>n;
	pi=1;
	i=1;
	do{
		pi=pi*i;
		i++;
	}while(i<=n);
	cout<<"Perkaliannya adalah = "<<pi;
}
