#include <iostream>

using namespace std;

int main()
{
	int i, fact=1, n;
	cout<<"Masukkan angka : ";cin>>n;
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	cout<<"Hasil faktorialnya adalah "<<fact;
}
