/* code demonstrate to use of virtual function */

#include<iostream>

using  namespace std;

class media{                     // Abstract Class...
    protected:
        string bookname,authorname,authornativelang;
        int bookISBN;
    public:
        virtual void display();  // Virtual function...
        virtual void show()=0;   // Pure Virtual function...
};

void media::display(){
    cout<<"Media Details\n";
    cout<<"Book Name : "<<bookname<<endl;
    cout<<"Author Name : "<<authorname<<endl;
}

class book: virtual public media{
    public:
        book(string a,int b,string c,string d); // Constructor...
        void display();
        void show();
};

book::book(string a,int b,string c,string d){
    bookname=a;
    bookISBN=b;
    authorname=c;
    authornativelang=d;
}

void book::display(){                // Overriding
    cout<<"Book Details\n";
    cout<<"Book Name : "<<bookname<<endl;
    cout<<"Book ISBN No : "<<bookISBN<<endl;
}

void book::show(){                  // Overriding
    cout<<"Book Details\n";
    cout<<"Book Name : "<<bookname<<endl;
    cout<<"Book ISBN No : "<<bookISBN<<endl;
}

class author: virtual public media{
    public:
        author(string a,int b,string c,string d); // Constructor...
        void display();
        void show();
};

author::author(string a,int b,string c,string d){
    bookname=a;
    bookISBN=b;
    authorname=c;
    authornativelang=d;
}

void author::display(){           // Overriding
    cout<<"Author Details\n";
    cout<<"Author Name : "<<authorname<<endl;
    cout<<"Author's Native Language : "<<authornativelang;
}

void author::show(){              // Overriding
    cout<<"Author Details\n";
    cout<<"Author Name : "<<authorname<<endl;
    cout<<"Author's Native Language : "<<authornativelang;
}

int main()
{
    string bname,aname,anative;
    int isbnno;
    cout<<"Enter the Book Name , Book ISBN Number , Author Name , Author Native Language.\n";
    cin>>bname>>isbnno>>aname>>anative;
    author a(bname,isbnno,aname,anative);
    book b(bname,isbnno,aname,anative);
    media* ptr;

    // Implementing the use of virtual functions..
    cout<<"\nMedia class pointer pointing to author class object...\n";
    ptr=&a;
    ptr->display();

    cout<<"\nMedia class pointer pointing to book class object...\n";
    ptr=&b;
    ptr->display();


    // Implementing the pure virtual functions..
    cout<<"\nAuthor class object calling the show function...\n";
    a.show();
    cout<<"\nBook class object calling the show function...\n";
    b.show();

    return 0;
}
