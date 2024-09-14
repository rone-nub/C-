#include<bits/stdc++.h>
using namespace std;
int main()
{
	int *A=new int;   //syntex dynamic int  data 
	*A=20;    //derefference
	cout<<A<<endl;  //address output
	cout<<*A<<endl;  // value output

	float *B=new float;   //syntex dynamic float data 
	*B=2.345;    //derefference
	cout<<B<<endl;  //address output
	cout<<*B<<endl;  // value output

	return 0;
}