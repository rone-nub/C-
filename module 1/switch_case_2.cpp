#include<iostream>
using namespace std;

int main()
{
  int value;
	cin>>value;
	//  switch(value%2) // 0 or 1
	// {
	// 	case 0:
	// 	  cout<<"Even"<<endl;
	// 		break;
	// 	case 1:
	// 	  cout<<"Odd"<<endl;
  //     break;
	// }
		 switch(value%2) //0 or 1
	{
		case 0:
		  cout<<"Even"<<endl;
			break;
		default :
		  cout<<"Odd"<<endl;
	}
	
  return 0;
}