#include <sstream>
#include <iostream>
#include <vector>
#include <math.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main ()
{
	int i,j,s,t,u,k,b1,k1,b2,k2,a[100][100],x[100][100],y[100][100],z[100][100];
	cout << "Matriks A"<<endl;
	cout<<"Masukkan Jumlah Baris : ";
	cin>>b1;
	cout<<"Masukkan Jumlah kolom : ";
	cin>>k1;
	for(i=1;i<=b1;i++)
		for(j=1;j<=k1;j++)
	{
	
		cout<<"Matriks A ["<<i<<","<<j<<"]: ";
		cin>>x[i][j];
	
	}
	cout<<endl<<"Matriks A"<<endl;
	for(i=1;i<=b1;i++)
	{
		for (j=1;j<=k1;j++)
		cout<<x[i][j]<<"\t";
		cout<<endl;
	}
		cout<<"===================================================="<<endl;
	
	cout << "Matriks B"<<endl;
	cout<<"Masukkan Jumlah Baris : ";
	cin>>b2;
	cout<<"Masukkan Jumlah kolom : ";
	cin>>k2;
	for(i=1;i<=b2;i++)
		for(j=1;j<=k2;j++)
	{
	
		cout<<"Matriks B ["<<i<<","<<j<<"]: ";
		cin>>y[i][j];
	
	}
	cout<<endl<<"Matriks B"<<endl;
	for(i=1;i<=b2;i++)
	{
		for (j=1;j<=k2;j++)
		cout<<y[i][j]<<"\t";
		cout<<endl;
	}
		cout<<"===================================================="<<endl;

	//Perkalian antar Matriks
	cout<<"Perkalian Matriks, Syarat : "<<endl<<"1. Baris matriks 1 = Kolom Matriks 2"<<endl;
	for (i=1;i<=b1;i++)
		for(j=1;j<=k2;j++)
		{
			z[i][j]=0;
			for (k=1;k<=k1;k++)
			{
				z[i][j]=z[i][j]+x[i][k]*y[k][j];
			}
		}
		
	for (i=1;i<=b1;i++)
	{
		for (j=1;j<=k2;j++)
		{
			cout<<z[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	//Tranpose Matriks 
	
}
