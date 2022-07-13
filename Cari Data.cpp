#include <iostream>

using namespace std;

int main()
{
	int i, n, data[n], tmp;
	cout<<"Banyak Data : ";cin>>n;
	for(i=0;i<n;i++){
		cout<<"Data ke-"<<i+1<<" : ";cin>>data[i];
	}
	
	cout<<"\nData yang dicari : ";cin>>tmp;
	for(i=0;i<n;i++){
		if(tmp==data[i]) {cout<<tmp<<" ada di data ke-"<<i+1;
		}
	}
	
	return 0;
}
