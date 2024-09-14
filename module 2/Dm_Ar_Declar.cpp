#include<bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;

	int Ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>Ar[i];
	}
// array input new sesh

  int* Aray= new int[n];  //dynamic memory allocation

	for(int i=0; i<n; i++)
	{
		cout<<*Aray<<endl;
	}

	return 0;
}