#include <iostream>

using namespace std;

int main()
{
	int n, i, t, dd;
	cout<<"Masukkan n = ";cin>>dd;
	for (n=1;n<=dd;n++)
	{
			for(i=1;i<=dd;i++)
			{if((n==i)||(n+i==dd+1)){
				cout<<"*";}
				else cout<<" ";
			}
		cout<<endl;
		}
}
