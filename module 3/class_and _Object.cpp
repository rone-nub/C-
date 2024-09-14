#include<bits/stdc++.h>
using namespace std;

class Student
	{
		public:
				char name[100];
				int Roll;
				int Class;
				char Section;
	};
	
int main()
{
	Student rahim;
	rahim.Roll=29;
	rahim.Class=9;
	rahim.Section='A';
	char nm[100]="rahim";

	strcpy(rahim.name,nm);

  Student karim;
	karim.Roll=26;
	karim.Class=8;
	karim.Section='C';
	char nm2[100]="karim";

	strcpy(karim.name,nm2);

  cout<<rahim.Class;

	return 0;
}