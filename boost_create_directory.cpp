#include <iostream>
#include <string>
#include <boost/filesystem.hpp>

using namespace std;
int main()
{
   string dirPath = ".";
   boost::filesystem::path pathObj(dirPath);
   if(boost::filesystem::exists(pathObj))
   {
       cout<<dirPath <<" Exist"<<endl;
   }
   else
   {
       boost::filesystem::create_directory(pathObj);
   }

    return 0;
}
