// C++ program demonstrate if there
// is no virtual function used in
// the Base class
//https://www.learncpp.com/cpp-tutorial/dynamic-casting/
//When dealing with polymorphism, you’ll often encounter cases where you have a pointer to a base class, but you want to access some information that exists only in a derived class.
#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

class Base
{
protected:
	int m_value{};

public:
	Base(int value)
		: m_value{value}
	{
	}

	virtual ~Base() = default;
};

class Derived : public Base
{
protected:
	std::string m_name{};

public:
	Derived(int value, const std::string& name)
		: Base{value}, m_name{name}
	{
	}

	const std::string& getName() const { return m_name; }
};

Base* getObject(bool returnDerived)
{
	if (returnDerived)
		return new Derived{1, "Apple"};
	else
		return new Base{2};
}

int main()
{
	Base* b{ getObject(true) };

	Derived* d{ dynamic_cast<Derived*>(b) }; // use dynamic cast to convert Base pointer into Derived pointer

	if (d) // make sure d is non-null
		std::cout << "The name of the Derived is: " << d->getName() << '\n';

	delete b;

	return 0;
}