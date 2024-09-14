#include<bits/stdc++.h>
using namespace std;

int& Static_Object()
{
    static int static_Variable = 0;
    static_Variable++;
    return static_Variable;   // return Static object
}

int main()
{
    cout<<Static_Object()<<endl;  // Output: 1
    cout<<Static_Object()<<endl;  // Output: 2
    cout<<Static_Object()<<endl;  // Output: 3

    return 0;
}