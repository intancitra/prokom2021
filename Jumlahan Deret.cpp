#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float deret=0, bawah=0;
	int i, n;
	cout<<"Masukkan n: ";cin>>n;
	for(i=1;i<=n;i++)
	{
		bawah+=i;
		deret+=1/bawah;
		cout<<fixed<<setprecision(3)<<1/bawah<<" ";
	}
	cout<<"\n\nJumlahan dari deret = "<<deret;
}
