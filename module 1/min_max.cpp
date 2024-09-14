#include<iostream>
#include<algorithm>
using namespace std;

  //  int My_min(int X, int Y)
	//  {
	// 	if(X<Y) 
	// 	     return X;
	// 	else
	// 	   return Y;	 
	//  }

	//  int My_max(int P, int Q)
	//  {
	// 	if(P>Q) 
	// 	     return P;
	// 	else
	// 	   return Q;	 
	//  }

int main() 
{ 
  int A,B;
	cin>>A>>B;
  
	 //My_min(A,B);
	 //My_max(A,B);
	  int Min=min(A,B);
	  int Max=max(A,B);
	 cout<<"Minimum Value : "<<Min<<endl<<"Maiximum Value : "<<Max;


	return 0;
}