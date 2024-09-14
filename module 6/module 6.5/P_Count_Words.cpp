#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);

	stringstream SS(str);

 string Word;
 int cnt=0;
 bool inWord=false;
 while(SS>>Word)
  {
	 //cout<<Word<<endl;

    cnt++;

  }
 cout<<cnt;


	return 0;
}