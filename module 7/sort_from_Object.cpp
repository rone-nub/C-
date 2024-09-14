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

	
	 
	 for(int i=0; i<3-1; i++)
	 {
		 for(int j=i+1; j<3; j++)
		 {
			 if(A[i].Roll > A[j].Roll)
			 {
				 swap(A[i],A[j]);
			 }
		 }
	 }
	 
	 for(int i=0; i<3; i++)
	 {
		  cout<<A[i].Name<<" " << A[i].Roll<<" " << A[i].Marks<<endl;
	 }
	  
	return 0;
}