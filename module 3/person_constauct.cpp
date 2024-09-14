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

    
	
int main()
{
	Student Person("Error Khan",167.2,21); // constructor call

	cout<<Person.Name<<endl;
	cout<<Person.Height<<endl;
	cout<<Person.Age<<endl;

	return 0;
}

/*#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    float height;
    int age;

public:
    // Constructor
    Person(const std::string& personName, float personHeight, int personAge) {
        name = personName;
        height = personHeight;
        age = personAge;
    }

    // Getter methods
    std::string getName() const {
        return name;
    }

    float getHeight() const {
        return height;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    // Creating a dynamic object of the Person class
    Person* person = new Person("John Doe", 175.5f, 30);

    // Accessing the properties using the getter methods
    std::cout << "Name: " << person->getName() << std::endl;
    std::cout << "Height: " << person->getHeight() << " cm" << std::endl;
    std::cout << "Age: " << person->getAge() << " years" << std::endl;

    // Remember to delete the dynamic object to free the memory
    delete person;

    return 0;
}*/