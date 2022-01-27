#include <bits/stdc++.h>
using namespace std;

class User
{
    private:
        char* userName; 
        int userId;
        int data;
        
    public:
        const char* getName() const;
        const int getId() const;
        User(const char*, int);
        // bool operator< (const User& user) const;
};

User::User(const char* name, int id)
{
    cout<<"Parametric"<<endl;
    data = strlen(name);
    userName = new char[data + 1];
    strcpy(userName,name);
    userId = id;
}

const char* User::getName() const
{
    return userName;
}

const int User::getId() const
{
    return userId;
}

// bool User::operator<(const User& u) const
// {
//     if(u.userId > userId) return true;
//     return false;
// }

int main()
{
    //  map<User, int> m_UserInfoMap;
    // m_UserInfoMap.insert(std::make_pair<User, int>(User(((const char*)"mausam"), 6), 85));
    // m_UserInfoMap.insert(std::make_pair<User, int>(User(((const char*)"kumar"), 1), 55));
    // m_UserInfoMap.insert(std::make_pair<User, int>(User(((const char*)"sinha"), 3), 70));

    // std::map<User, int>::iterator it = m_UserInfoMap.begin();
    // for(; it != m_UserInfoMap.end(); it++)
    // {
        
    //     std::cout<<it->first.getName()<<endl;//<<" :: "<<it->second<<std::endl;
    // }

       vector< pair<User,int> > v;
       v.push_back(make_pair<User,int>(User(((const char*)"Mausam"),10),100));
       vector< pair<User,int> >::iterator itr = v.begin();
       for(;itr!=v.end();itr++)
       {
           cout<<itr->first.getName();
       }

    return 0;
}