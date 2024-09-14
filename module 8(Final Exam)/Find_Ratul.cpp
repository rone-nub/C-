#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
		cin.ignore();

    string Word;
    bool found=false;

    for (int i=0; i<str.length(); i++)
		{
        if (str[i]==' ')
				{
            if (Word=="Ratul")
						{
              found=true;
                break;
            }

          Word="";
        }
				else
				{
          Word+=str[i];
        }
    }

    if (Word=="Ratul")
		{
        found=true;
    }

    if (found)
		{
        cout<<"YES"<<endl;
    }
		else
		{
        cout<<"NO"<<endl;
    }

    return 0;
}
