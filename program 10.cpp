#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,rem,sum,n;
	cout <<"Enter a number : \n";
	cin >>num;
	sum=0;
	num=n;
	while(n!=0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==num)
{
	cout <<"The given number is an armstrong number \n";
}
else 
{
	cout<< "The given number is not an armstrong number \n";
}
return 0;
}
