#include <iostream>

using namespace std;

int main()
{
	int n, i, dd;
	cout<<"Masukkan n = ";cin>>dd;
	for (n=1;n<=dd;n++)
	{
		for(i=1;i<=n;i++)
		{
			cout<<" ";
		}
		cout<<n<<endl;
	}
	
	return 0;
}
