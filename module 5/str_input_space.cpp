#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	//cin.ignore();  // one line ignore
	getchar();  // one character ignore
	string s;
	// cin>>s;   //without space
	//cin.getline(s,100);  //char s[100]; er jonno,, ekhane kaj korbe na

	cout<<x<<endl;

	getline(cin,s);   //input with space
	
	cout<<s<<endl;

	cout<<s.size()<<endl;



	return 0;
}