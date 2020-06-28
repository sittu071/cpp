#include <boost\property_tree\json_parser.hpp>
#include <boost\property_tree\ptree.hpp>
#include <boost\filesystem.hpp>
#include <vector>

using namespace std;

int main()
{
  boost::property_tree::ptree pt;
  boost::property_tree::read_json(jsonfile, pt);
  cout << pt.get<string>("jstruct.file_name")<<endl; //read a string value where parent is jstruct and child is your file_name
  /use below steps to read list from the sub_chile
  for (boost::property_tree::ptree::value_type &exp_err : pt.get_child("jstruct.Exposure_error_f_stops"))
			{
				cout << exp_err.second.data() << endl;
			}
  return 0;
}
