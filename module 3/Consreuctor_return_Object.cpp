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

	Student fun()
	{
		char nm[100]="Rahimullah";
		Student r(29,'D',8,nm);   
		return r;

	}

	Student fun2()
	{
		char nm[100]="karimullah";
		Student r(21,'C',9,nm);   
		return r;

	}

	int main()
{
	Student Rahim=fun();    // funtion call
	
 cout<<Rahim.name<<endl;
	cout<<Rahim.Class<<endl;
	cout<<Rahim.Roll<<endl;
	cout<<Rahim.Section<<endl;

Student fun2(); 

	cout<<fun2().name<<endl;
	cout<<fun2().Class<<endl;
	cout<<fun2().Roll<<endl;
	cout<<fun2().Section<<endl;


	return 0;
}