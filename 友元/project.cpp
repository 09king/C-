#include <iostream>
using namespace std;


class Home
{
	friend void gotoBedroom(Home* home);
public:
	string livingroom = "Living Room";

private:
	string bedroom = "Bedroom";

	
};

void gotoBedroom(Home* home) //全局函数友元
{
	cout << home->livingroom << endl;
	cout << home->bedroom << endl;
}

int main()
{
	Home home;
	gotoBedroom(&home);

	return 0;
}

#include <iostream>
using namespace std;



class Friend;
class Home
{
	friend class Friend;
public:
	string livingroom = "Living Room";
private:
	string bedroom = "Bedroom";
};

//友元类，可以访问类里使用成员
class Friend
{
public:
	Home* home;
	void visitHome()
	{
		cout << "Visiting my friend's home." << endl;
		cout << "Living room: " << home->livingroom << endl;
		cout << "Bedroom: " << home->bedroom << endl;
	}
};
int main()
{
	Home* myHome = new Home();
	Friend* myFriend = new Friend();
	myFriend->home = myHome;
	myFriend->visitHome();
	return 0;
}
