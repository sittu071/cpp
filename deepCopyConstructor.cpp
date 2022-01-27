#include<iostream>
#include<cstring>
using namespace std;

class String
{
private:
	char *s;
	int size;
public:
	String(const char *str = NULL); // constructor
	~String() { delete [] s; }// destructor
	String(const String&); // copy constructor
	void print() { cout << s << endl; } // Function to print string
	void change(const char *); // Function to change
    String& operator=(const String&);
	void Display(String c_param)
    {
        cout<<"Dislay:"<<endl;
        c_param.print();
    } 
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

void String::change(const char *str)
{
	delete [] s;
	size = strlen(str);
	s = new char[size+1];
	strcpy(s, str);
}

String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size+1];
	strcpy(s, old_str.s);
}

String& String::operator=(const String& obj)
{
    s = obj.s;
    return *this;
}

int main()
{
	String str1("Mausam");
	String str2("Kumar");
    str1 = str2;
    
    str2.print();

	// str1.print(); // what is printed ?
	// str2.print();

	// str2.change("Kumar");

	// str1.print(); // what is printed now ?
	// str2.print();
	return 0;
}
