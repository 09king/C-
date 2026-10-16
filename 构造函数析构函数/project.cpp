#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person constructor called" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person constructor with parameter called" << endl;
	}

	Person(const Person& other)
	{
		age = other.age;
		cout << "Person copy constructor called" << endl;
	}

	~Person()
	{
		cout << "Person destructor called" << endl;
	}

	int age;
};




int main()
{
	Person p1;
	Person p2(25);
	Person p3(p2);
	cout << "p2 age:" << p2.age << endl;
	return 0;
}

