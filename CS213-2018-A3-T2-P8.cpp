#include <iostream>
// author name : Athar Atef Hussien
//ID : 20170005
//group:1
//Date: 17 NOV. 2018
// assignment 3 individual problem 8 (programming abstraction book)
/* purpose: The digital root of an integer n is defined as the result of summing the digits
repeatedly until only a single digit remains. For example, the digital root of
1729 can be calculated using the following steps:
Step 1: 1 + 7 + 2 + 9 → 19
Step 2: 1 + 9 → 10
Step 3: 1 + 0 → 1Because the total at the end of step 3 is the single digit 1, that value is the
digital root.
Write a function digitalRoot(n) that returns the digital root of its
argument. Although it is easy to implement digitalRoot using the
digitSum function from exercise 6 and a while loop, part of the challenge of
this problem is to write the function recursively without using any explicit loop
constructs.*/

using namespace std;
unsigned int digitalRoot( unsigned int x){//function that take non negative integer number and return itself
    if(x<10){//base case of recursive function
        return x;
    }
    else{
        x=x%10 + digitalRoot(x/10);
        return digitalRoot(x);//recursive function that sum of digits until remaining of only one digit
    }


}

int main()
{
    cout<<digitalRoot(1729)<<endl;

    return 0;
}
