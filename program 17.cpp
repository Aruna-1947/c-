#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2;
	int x,y,z;
	cout <<"Enter the values of num1 and num2 :\n";
	cin >>num1>>num2;
	if(num1>num2)
	{
		cout <<"\nnum1 is greater than num2 \n";
		}
		else 
		{
			cout <<"\nNum2 is greater than \n";
			}
		cout <<"\nEnter the values of x and y and z : \n";
		cin >>x>>y>>z;
		if(x>y && x>z)
		{
			cout <<"\nX greater \n";
			}
			else if(y>x && y>z)
			{
				cout <<"\nY is greater \n";
				}
				else 
				{
					cout <<"\nZ is greater \n";
					}
					return 0;	
}
