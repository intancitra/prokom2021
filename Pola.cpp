#include <iostream>
#include <sstream>
#include <math.h>
#include <conio.h>
using namespace std;
int main ()
{
	cout<<"Mari menggambar"<<endl;
	cout<<"Gambar 1"<<endl;
	int q;
	cout << "masukkan angka : ";
	cin >> q; 
	for (int i=1; i<=q;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"$";
		}
		cout<<endl;
	}
	for (int i=q-1;i>=1;i=i-1)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Gambar Kedua"<<endl;
	cout<<"Masukkan angka : ";
	int a;
	cin>>a;
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=a;j++)
		{
			if(j>=a-(i-1))
			cout<<"*";
			else
			{
			cout<<" ";
			}
		}
		cout<<endl;
	}
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=a;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i=a;i>=1;i=i-1)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Gambar ketiga"<<endl;
	cout<<"Masukkan angka : ";
	int b;
	cin>>b;
	for(int i=1;i<=b;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for (int j=1;j<=b;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for (int i=1;i<=b;i++)
	{
		for (int j=1;j<=i;j++)
		{
			cout<< " ";
		}
		for (int j=i;j<=b;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	cout<<"Gambar keempat"<<endl;
	cout<<"Masukkan Angka : ";
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=2*n-1;j++)
		{
			if (j>=n-(i-1)&&j<=n+(i-1))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for (int k=n;k>=2*i-n;k--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}
