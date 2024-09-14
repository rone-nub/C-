#include<bits/stdc++.h>
using namespace std;

class Student 
{
	public :	     
		string name;
		int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};
  
	//sorting based
	bool compare_marks(Student a, Student b)
	{
		if(a.total_marks==b.total_marks)
		{
			return a.id < b.id;
		}
    return a.total_marks >b.total_marks;    
	}

int main()
{
	int n;
	cin>>n;
	cin.ignore();

	Student obj[n];
 //input
	for(int i=0; i<n; i++)
	{
		cin >> obj[i].name>> obj[i].cls >> obj[i].section >> obj[i].id >> obj[i].math_marks >> obj[i].eng_marks;		
	}

	for(int i=0; i<n; i++)
	{  
		obj[i].total_marks=obj[i].eng_marks+obj[i].math_marks;	
	}
//sorting
	sort(obj, obj+n, compare_marks);

	for(int i=0; i<n; i++)
	{
    cout << obj[i].name<< " "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].id<<" "<<obj[i].math_marks<<" "<<obj[i].eng_marks<<endl;	
	}

	return 0;
}