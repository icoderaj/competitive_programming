//https://www.hackerrank.com/challenges/fizzbuzz/problem
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++){
        ((i%3 == 0) && (i%5==0)) ? cout<<"FizzBuzz\n" :
        (i%3 == 0) ? cout<<"Fizz\n" : 
        (i%5 == 0) ? cout<<"Buzz\n" : cout<<i<<"\n";
     }
    return 0;
}
