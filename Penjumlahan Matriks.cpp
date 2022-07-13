#include <sstream>
#include <iostream>
#include <vector>
#include <math.h>
#include <conio.h>
#include <fstream>
using namespace std;
int main ()
{
	int i,j,s,t,u,b,k,x[100][100],y[100][100],z[100][100];
	cout << "Matriks A"<<endl;
	cout<<"Masukkan Jumlah Baris : ";
	cin>>b;
	cout<<"Masukkan Jumlah kolom : ";
	cin>>k;
	for(i=1;i<=b;i++)
		for(j=1;j<=k;j++)
	{
	
		cout<<"Matriks A ["<<i<<","<<j<<"]: ";
		cin>>x[i][j];
	
	}
	cout<<endl<<"Matriks A"<<endl;
	for(i=1;i<=b;i++)
	{
		for (j=1;j<=k;j++)
		cout<<x[i][j]<<"\t";
		cout<<endl;
	}
		cout<<"===================================================="<<endl;
	
	cout << "Matriks B"<<endl;
	for(i=1;i<=b;i++)
		for(j=1;j<=k;j++)
	{
	
		cout<<"Matriks B ["<<i<<","<<j<<"]: ";
		cin>>y[i][j];
	
	}
	cout<<endl<<"Matriks B"<<endl;
	for(i=1;i<=b;i++)
	{
		for (j=1;j<=k;j++)
		cout<<y[i][j]<<"\t";
		cout<<endl;
	}
		cout<<"===================================================="<<endl;
		
	cout<<"Matriks A+B "<<endl;
	for(i=1;i<=b;i++)
	{
		for(j=1;j<=k;j++)
		{
			cout<<x[i][j]+y[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"================================================"<<endl;
	
	cout<<"Matriks A-B "<<endl;
	for(i=1;i<=b;i++)
	{
		for(j=1;j<=k;j++)
		{
			cout<<x[i][j]-y[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"================================================"<<endl;
	
	
}
