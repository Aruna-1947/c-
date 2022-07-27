#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,i;
	cout <<"Enter a number : \n";
	cin >>num;
	for(i=1;i<=num;i++)
	{
		if(num==i*i)
		   {
			cout <<"The given number is a perfect square number \n";
		   }
	else
	    {
		cout <<"The given number is not a perfect square number \n";
	    }
		
	}
	return 0;
}
