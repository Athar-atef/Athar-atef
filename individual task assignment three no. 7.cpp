#include <iostream>
//author name : Athar Atef Hussien
//ID : 20170005
// group:1
// assignment 3 individual problem 7 (programming abstraction book)
//Date:17 Nov. 2018
/*purpose : Write a recursive function digitSum(n) that takes a nonnegative integer and
returns the sum of its digits. For example, calling digitSum(1729) should
return 1 + 7 + 2 + 9, which is 19.
The recursive implementation of digitSum depends on the fact that it is
very easy to break an integer down into two components using division by 10.
For example, given the integer 1729, you can divide it into two pieces as
follows:
Each of the resulting integers is strictly smaller than the original and thus
represents a simpler case.*/

using namespace std;
int sum=0;
int sumDigit(int n ){//function that take parameter n and return it self


   if(n == 0){//base case of recursive function
    return sum;

   }
   else{
    sum = sum + n%10 ;
    n = n / 10 ;
    return sumDigit (n);//recursive function that calculate sm of digits of a number
   }

}

int main()
{
   int n;
        cout<<"Enter non negative integer : "<<endl;
        cin>>n;
        sum = sumDigit( n );//calling of the function
        cout<< "the sum of all digits" << " " << n << " "<< " is : " << sum << endl;



    return 0;
}
