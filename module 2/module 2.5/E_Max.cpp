#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++)
	{
      cin>>A[i];
	}
	//input newa sesh
	int mx=INT_MIN;
	for(int i=0; i++; i++)
	{
		// if(A[i]>mx)
		// {
		// mx=A[i];
		// }
		mx=max(mx,A[i]);
	}
	cout<<mx;

return 0;
}