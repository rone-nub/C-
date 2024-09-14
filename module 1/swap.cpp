#include<iostream>
#include<utility>
using namespace std;

  // int My_Swap(int *X,int *Y)
	// {
	// 	int temp=*X;
	// 	*X=*Y;
	// 	*Y=temp;
	// }

int main ()
{ 
	int A,B;
	cin>>A>>B;

	//My_Swap(&A,&B);
	swap(A,B);

	cout<<A<<" "<<B<<endl;

	return 0;
}