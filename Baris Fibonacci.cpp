#include <iostream>

using namespace std;

int main()
{
	int i, fibo, n, a1, a2, a3;
	cout<<"=========Generate Fibonacci Series=========="<<endl;
	cout<<"Baris Fibonacci: Un = Un-2 + Un-1\n";
	cout<<"Masukkan banyak suku (n) = ";cin>>n;
	cout<<"Masukkan suku pertama = ";cin>>a1;
	cout<<"Masukkan suku kedua = ";cin>>a2;
	cout<<"Barisan Fibonaccinya adalah:\n";
	cout<<a1<<" "<<a2<<" ";
	for(i=0;i<n-2;i++)
	{
		a3=a1+a2;
		cout<<a3<<" ";
		a1=a2;
		a2=a3;
	}
}
