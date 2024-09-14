#include<bits/stdc++.h>
using namespace std;

class Student
	{
		public:
				char name[100];
				int Roll;
				int Class;
				char Section;

		// constructor funtion
			Student(int r, int s, int c,char* n)
			{
         Roll=r;
				 Section=s;       
				 Class=c;
				 strcpy(name,n);
			} 
	};
	
int main()
{
	Student Rahim(29,'A',7,"Rahimullah"); // constructor call

	cout<<Rahim.name<<endl;
	cout<<Rahim.Class<<endl;
	cout<<Rahim.Roll<<endl;
	cout<<Rahim.Section<<endl;
cout<<endl;

Student Karim(21,'B',9,"Karimullah");  // constructor call
	cout<<Karim.name<<endl;
	cout<<Karim.Class<<endl;
	cout<<Karim.Roll<<endl;
	cout<<Karim.Section<<endl;

	return 0;
}