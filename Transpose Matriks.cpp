#include <iostream>

using namespace std;

int main ()
{
	int i,j,b1,k1;
	
	cout<<"====TRANSPOSE MATRIKS====\n\n";
	
	cout<<"Masukkan Jumlah Baris : ";
	cin>>b1;
	cout<<"Masukkan Jumlah kolom : ";
	cin>>k1;
	int x[b1][k1], y[k1][b1];
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
		{
		y[j][i]=x[i][j];
		cout<<x[i][j]<<" ";}
		cout<<endl;
	}
		cout<<"===================================================="<<endl;
	
	cout<<endl<<"Matriks A transpose"<<endl;
	for(i=1;i<=k1;i++)
	{
		for (j=1;j<=b1;j++)
		{
		cout<<y[i][j]<<" ";
	}
		cout<<endl;
	}
	
}
