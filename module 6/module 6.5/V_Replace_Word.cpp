#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	getline(cin,str1);
	cin.ignore();

	while(str1.find("EGYPT")!=-1)

	 str1.replace(str1.find("EGYPT"),5," ");

	cout<<str1;

	return 0;
}