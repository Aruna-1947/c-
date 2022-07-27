#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,num,fact=1;
	cout << "Enter a number to find its factorial:\n";
	cin >> num;
	for(i=1;i<=num;i++)
	{
		fact = fact *i;
		}
		cout <<"Factorial of the given number is:\n"<<fact;
		return 0;	
}
