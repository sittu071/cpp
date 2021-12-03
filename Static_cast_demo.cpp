/* Lets take  example1 of converting object to and from a class. */
#include <iostream>
#include <string>
using namespace std;
class Int {
	int x;

public:
	Int(int x_in = 0)
		: x{ x_in }
	{
		cout << "Conversion Ctor called" << endl;
	}
	operator string()
	{
		cout << "Conversion Operator" << endl;
		return to_string(x);
	}
};
int main()
{
	Int obj(3);
	string str = obj;
	obj = 20;
	string str2 = static_cast<string>(obj);
	obj = static_cast<Int>(30);
	return 0;
}

/* Lets take example2 which involves Inheritance. */
#include <iostream>
using namespace std;
class Base {
};
class Derived : public Base {
};
int main()
{
	Derived d1;
	Base* b1 = (Base*)(&d1); // allowed
	Base* b2 = static_cast<Base*>(&d1);

	return 0;
}


