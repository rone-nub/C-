#include<bits/stdc++.h>
using namespace std;

class student
	{
		public :
      
			string Name;
			int Roll;
			int Marks;

	};

int main()
{
   student A[3];

	 for(int i=0; i<3; i++)
	 {
		 getline(cin,A[i].Name);
		 cin>>A[i].Roll>>A[i].Marks;
		 cin.ignore();
	 }
	 // input newa sesh of # student

	 student mx;
	 mx.Marks=INT_MIN;
	 
	 for(int i=0; i<3; i++)
	 {
		if(A[i].Marks > mx.Marks)
		{
			mx=A[i];
		}	 
	 }
	  cout<<mx.Name<<" " << mx.Roll<<" " << mx.Marks<<endl;


		 student mn;
	 mn.Marks=INT_MAX;
	 
	 for(int i=0; i<3; i++)
	 {
		if(A[i].Marks < mn.Marks)
		{
			mn=A[i];
		}	 
	 }
	  cout<<mn.Name<<" " << mn.Roll<<" " << mn.Marks<<endl;

	return 0;
}