#include<iostream>
using namespace std;
//it's a special type of constructor which takes an object and copy.
//it's used in call by reference not by call by value
//compiler provided copy constructor not initialise the data member and it can give some garbage value
//https://www.youtube.com/watch?v=ZWrUldXUpbw


// we do a copy construction when we want to make a clone of object into non-exising object with existing object
//  when we clone existing object into another existing object
class Complex
{
    double re_, im_;
    public:
    Complex(double re, double im):re_(re),im_(im)
    {
        cout<<"constr"<<endl;
    }
    Complex(const Complex& obj):re_(obj.re_),im_(obj.im_)
    {
        cout<<"copy const"<<endl;
    }
// to perform chain assignment we are doing assignment
    Complex& operator=(const Complex& obj)
    {
        cout<<"Assignment copy const"<<endl;
        re_ = obj.re_;
        im_ = obj.im_;
        return *this;
    }
    void print()
    {
        cout<<re_<<" "<<im_<<endl;;
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
    Complex c1(4.2,5.3),c2(7.9,8.5);
    Complex c3(c2);
    c1.print();
    c2.print();
    c3.print();
    c1 = c2 = c3; 
    c1.print();
    c2.print();
    c3.print();
    return 0;
}