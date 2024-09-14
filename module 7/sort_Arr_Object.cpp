#include<bits/stdc++.h>
using namespace std;

class student
	{
		public :
      
			string Name;
			int Roll;
			int Marks;

	};

	bool Cmp(student X, student Y)
	{
		if(X.Marks < Y.Marks)
		{
			return true;
		}
		else
		{
       false;
		}
	}

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

	 
	 //Sort Funtion
	 sort(A,A+3,Cmp);
	 
	 for (int i=0; i<3; i++)
	 {
		  cout<<A[i].Name<<" " << A[i].Roll<<" " << A[i].Marks<<endl;
	 }
	  
	return 0;
}