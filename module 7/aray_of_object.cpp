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

	 for(int i=0; i<3; i++)
	 {
		 cout<<A[i].Name<<" " << A[i].Roll<<" " << A[i].Marks<<endl;
		 
	 }

	return 0;
}