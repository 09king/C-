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

#include <iostream>
using namespace std;

class Person
{
public:
	int* age;
	Person(int a)
	{
		age = new int(a); //浅拷贝
	}

	Person(const Person& p)
	{
		age = new int(*p.age); //深拷贝
	}

	~Person()
	{
		delete age;
	}
};




int main()
{
	Person p1(25);
	Person p2 = p1; // Copy constructor is called
	cout << "Age address of p1: " << p1.age << endl;
	cout << "Age address of p2: " << p2.age << endl;
	cout << "Age of p1: " << *p1.age << endl;
	cout << "Age of p2: " << *p2.age << endl;

	*p2.age = 30; 
	cout << "Age of p2: " << *p2.age << endl;
	return 0;
}
