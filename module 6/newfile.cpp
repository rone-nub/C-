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

int main()
{
	int n;
	cin>>n;
	Student obj[n];
	for(int i=0; i<n; i++)
	{
		cin >> obj[i].name;
		cin >> obj[i].cls;
		cin >> obj[i].id;
		cin >> obj[i].math_marks;
		cin >> obj[i].eng_marks;
	}

	

	for(int i=0; i<n; i++)
	{
    cout << obj[i].name<< " "<<obj[i].cls<<" "<<obj[i].id<<" "<<obj[i].math_marks<<" "<<obj[i].eng_marks ;
		
	}

	return 0;
}