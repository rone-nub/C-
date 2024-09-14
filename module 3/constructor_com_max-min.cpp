#include<bits/stdc++.h>
using namespace std;

class Student
	{
		public:
				char Name[100];
				float Height;
				int Age;

		// constructor funtion
			Student(char* N, float H, int A)
			{
        Height=H;
				Age=A;       
				strcpy(Name,N);
			} 
	};


	// Student fun()
	// {
	// 	Student Error.("Error Khan",167.2,21);  
	
	// 	return Error.;

	// }

	// Student fun2()
	// {
		
	// 	Student Warning("Warning Khan",167.2,25);   
	// 	return Warning;

	// }

	int main()
{

	int Age1,Age2;
	cin>>Age1>>Age2;

	Student Error("Error Khan",167.2,Age1); // constructor call

   Student Warning("Warning Khan",167.2,Age2); // constructor call
  
	if(Age1>Age2)
	{
		cout<<Error.Name<<endl;
	}
	else
	{
		cout<<Warning.Name<<endl;
	}

	return 0;
}

/*#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char S;
    std::cin >> A >> S >> B;

    if (S == '<') {
        if (A < B)
            std::cout << "Right";
        else
            std::cout << "Wrong";
    } else if (S == '>') {
        if (A > B)
            std::cout << "Right";
        else
            std::cout << "Wrong";
    } else if (S == '=') {
        if (A == B)
            std::cout << "Right";
        else
            std::cout << "Wrong";
    }

    return 0;
}*/