#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
	char S[100];
	//cin>>S;   space accept kore na ->same to scanf or gets
  
	cin.getline(S,100); // same to fgets
	cout<<S<<endl<<strlen(S);


	return 0;
}