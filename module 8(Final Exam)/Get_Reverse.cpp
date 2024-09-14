#include<bits/stdc++.h>
using namespace std;

class Student 
{
	public :	     
		string name;
		int cls;
    char section;
    int math_marks;
    int eng_marks;  
};
  
int main()
{
	int n;
	cin>>n;
	cin.ignore();

	Student obj[n];
	for(int i=0; i<n; i++)
	{
		cin >> obj[i].name>> obj[i].cls >>obj[i].section>>obj[i].math_marks>>obj[i].eng_marks;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			swap(obj[i].name,obj[j].name);
			swap(obj[i].cls,obj[j].cls);
			swap(obj[i].section,obj[j].section);
			swap(obj[i].math_marks,obj[j].math_marks);
			swap(obj[i].eng_marks,obj[j].eng_marks);
		}	
	}

	for(int i=0; i<n; i++)
	{
    cout<<obj[i].name<<" "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].math_marks<<" "<<obj[i].eng_marks<<endl;	
	}

	return 0;
}