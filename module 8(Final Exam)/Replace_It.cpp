#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >>T;

    for (int i=0; i<T; i++)
    {
        string S,X;
        cin>>S>>X; 
       
        // for (int j = 0; j < S.length(); j++)
        // {
        //   if (S.substr(j, X.length()) == X)
        //     {
        //         S.replace(j, X.length(), "$");
        //     }
        // }

       while(S.find(X)!=-1)
        {
            S.replace(S.find(X),X.length(),"$");
        }

    cout << S << endl;

    }

    return 0;
}