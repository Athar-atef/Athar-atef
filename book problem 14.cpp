/*vector<string> split(string target, string delimiter);

implement the function split so that it returns a vector of the strings in

target that are separated by the string delimiter. For example:

split("10,20,30", ",")

should return a vector with the strings "10", "20", and "30". */

#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> split(string target,string delimiter){ //function that take two parameters the target and delimiter
    vector<string>substring;  //vector to store the string in it

    string store;  //string to store each word in the sentence
    for (int i=0;i<(target.length());i++){ //for loop repeat this process until the end of the string
        if(target[i]!=delimiter[0]){  //check if character not equal delimiter
            store +=target[i];    //add the characters to string
        }
        else {
        substring.push_back(store); //store substrings in the vector
        store=""; //remove data from string
    }
    if (i==((target.length()-1))) //check if i equal length of the target -1 to store the last word
    {
        substring.push_back(store); //store substring in the vector
    }

    }


    return substring;

}

int main()
{   vector<string>splitedstr;
    string target;
    string delimiter;
    cout<<"enter the string to split:"<<endl; //print this sentence
    getline(cin,target);// input the target

    cout<<"enter the delimiter of the string:"<<endl;//print this string
    getline(cin,delimiter); //input the delimiter
 //   splitedstr=split("mo salah is the egyptian king"," ");
    splitedstr=split(target,delimiter);
  for( int i=0;i<splitedstr.size();i++){ // for loop to print sub strings
         cout<<"'"<<splitedstr[i]<<"'"<<",";//print those substrings
    }
    cout<<endl;
    return 0;
}
