/*
https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>> a >> b;

for(int n=a;n<=b;n++)
{
	
	
	 if((n>9) && (n%2==0))
	{
		cout<< "even" <<endl;
	}
	else if((n>9) && (n%2!=0))
	{
		cout<< "odd" << endl;
	}

	else if((n>=1) && (n<=9))
	{
		if(n==1)
		{
			cout<< "one";
			cout<< endl;
		}
		else if(n==2)
		{
			cout<< "two";
			cout<< endl;
		}
		else if(n==3)
		{
			cout<< "three";
			cout<< endl;
		}
		else if(n==4)
		{
			cout<< "four";
			cout<< endl;
		}
		else if(n==5)
		{
			cout<< "five";
			cout<< endl;
		}
		else if(n==6)
		{
			cout<< "six";
			cout<< endl;
		}
		else if(n==7)
		{
			cout<< "seven";
			cout<< endl;
		}
		else if(n==8)
		{
			cout<< "eight";
			cout<< endl;
		}
		else if(n==9)
		{
			cout<< "nine";
			cout<< endl;
		}
	}
}
   
    return 0;
}
