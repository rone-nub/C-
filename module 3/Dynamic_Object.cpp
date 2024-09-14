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
	//Student Rahim(29,'A',7,"Rahimullah"); // constructor call
	Student* Rahim = new Student(29,'A',7,"Rahimullah"); // Daynamic Object call
	(*Rahim).Roll=55;

	/*cout<<Rahim.name<<endl;*/ //<- direference korte hobe

	// int * a = new int ;
	// *a=10;                    //->direference system
	// cout<<*a<<endl;

	/*	cout<<(*Rahim).name<<endl;
	cout<<(*Rahim).Class<<endl;
	cout<<(*Rahim).Roll<<endl;
	cout<<(*Rahim).Section<<endl;

	cout<<endl;*/

	// or ,short cut upay
	cout<<Rahim->name<<endl;
	cout<<Rahim->Class<<endl;
	cout<<Rahim->Roll<<endl;
	cout<<Rahim->Section<<endl;

	delete Rahim;  // delete object

	cout<<Rahim->name<<endl;
	cout<<Rahim->Class<<endl;
	cout<<Rahim->Roll<<endl;
	cout<<Rahim->Section<<endl;




	


	return 0;
}