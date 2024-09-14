#include<bits/stdc++.h>
using namespace std;
int main()
{
	int Ar1[5];
	for(int i=0; i<5; i++)
	{
      cin>>Ar1[i];
	}  // array1 input newa sesh
	int Ar2[7];
	for(int i=0; i<5; i++)
	{
    Ar2[i]=Ar1[i];  
	}
	// array2 er bitore array1 copy pest kora sesh
	Ar2[5]=18;
	Ar2[6]=21;
	for(int i=0; i<7; i++)
	{
      cout<<Ar2[i]<<" ";
	}   // array2 output
	cout<<endl;

	delete[] Ar1;  // delete array
	for(int i=0; i<5; i++)
	{
		cout<<Ar1[i]<<" ";   //array1 delete er prove
	}

	return 0;
}