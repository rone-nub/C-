#include<bits/stdc++.h>
using namespace std;

class Student 
{
	public :    
		string name;
		int cls;
    char section;
    int id;   
};
  
int main()
{
	int n;
	cin>>n;
	cin.ignore();

	Student obj[n];
	//input taken
	for(int i=0; i<n; i++)
	{
		cin >> obj[i].name;
		cin >> obj[i].cls;
		cin >> obj[i].section;
		cin >> obj[i].id;
	}
  // id sorting
  for(int i=0; i<n; i++)
	  {
		 for(int j=i+1; j<n; j++)
		  {
			  swap(obj[i].id,obj[j].id); 
		  }	
	  }
  //output
 for(int i=0; i<n; i++)
	{
    cout << obj[i].name<< " "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].id<<endl;	
	}

	return 0;
}