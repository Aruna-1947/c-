#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,rev,rem,n;
	cout <<"Enter a number \n";
	cin >>num;
	n=num;
	 while( n!=0 )
    {
        rem=n%10;
        rev=rev*10+rem;
        n /= 10;
    }
    if(num==rev)
    {
		cout <<"\nThe given number is a palindrome \n";
		}
		else
		{
			cout <<"\nThe given number is not a palindrome \n";
			}
			return 0;
}
