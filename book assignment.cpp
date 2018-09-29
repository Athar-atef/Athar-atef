/*vector<string> split(string target, string delimiter);

implement the function split so that it returns a vector of the strings in

target that are separated by the string delimiter. For example:

split("10,20,30", ",")

should return a vector with the strings "10", "20", and "30". */

#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> split(string target,string delimiter){
    vector<string>substring;

    string store;
    for (int i=0;i<(target.length());i++){
        if(target[i]!=delimiter[0]){
            store +=target[i];
        }
        else {
        substring.push_back(store);
        store="";
    }
    if (i==((target.length()-1)))
    {
        substring.push_back(store);
    }

    }


    return substring;

}

int main()
{   vector<string>splitedstr;
    string target;
    string delimiter;
    cout<<"enter the string to split:"<<endl;
    getline(cin,target);

    cout<<"enter the delimiter of the string:"<<endl;
    getline(cin,delimiter);
 //   splitedstr=split("mo salah is the egyptian king"," ");
    splitedstr=split(target,delimiter);
  for( int i=0;i<splitedstr.size();i++){
         cout<<"'"<<splitedstr[i]<<"'"<<",";
    }
    cout<<endl;
    return 0;
}
