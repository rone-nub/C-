#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	cin.ignore();

	// reverse(str.begin(),str.end());
	// cout<<str;

	stringstream SS(str);

	string Word;

	SS>>Word;
	reverse(Word.begin(),Word.end());
	cout<<Word;

	while(SS>>Word)
	{
    reverse(Word.begin(),Word.end());

		cout<<" "<<Word;		
	}

	return 0;
}