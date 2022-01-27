#include<iostream>
using namespace std;
//it's a special type of constructor which takes an object and copy.
//it's used in call by reference not by call by value
//compiler provided copy constructor not initialise the data member and it can give some garbage value
//https://www.youtube.com/watch?v=ZWrUldXUpbw

class Complex
{
    double re_, im_;
    public:
    Complex(double re, double im):re_(re),im_(im)
    {
        cout<<"constr"<<endl;
    }

     Complex()
    {

    }
    
    Complex(const Complex& obj):re_(obj.re_),im_(obj.im_)
    {
        // obj.re_ = 20; /*invalid code becuase we don't want to change the 
        //value of object. if it really requires remove const in copy constructor
        cout<<"copy const"<<endl;
    }

    void print()
    {
        cout<<re_<<" "<<im_;
    }

    void Display(Complex c_param)
    {
        cout<<"Dislay:"<<endl;
        c_param.print();
    }   

    // assignment copy constructor implementation is same as assignment copy constructor
    // but in assignment case no extra memory is getting created, here both object is already initialised and second object
    // is copying to other object.

};

int main()
{
    Complex c(4.2,5.3);
    Complex c1(c);
    c.Display(c1);
    return 0;
}