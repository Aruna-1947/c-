#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,a,b,c,d,sum,sub,mul,div,mod,g,h;
	 
	cout << "\nEnter the x value : \n" ;
	cin >>x;
	cout << "\nEnter the y value : \n" ;
	cin >>y;
	x+=4;
	y-=5;
	cout << "\nNow the value of x is : \n" <<x;
	cout << "\nNow the  value of y is : \n" <<y;
	
	cout << "\nEnter the value of a : \n" ;
	cin >> a;
	if(a==0 && a==1)
	{
		cout << "\nCompared successfully!!!!!!\n";
		}
		else 
		{
		   cout << "\nComparison not done \n";	
			}
		
		cout << "\nEnter the value of b : \n";
		cin >> b;
		b > 5 ? cout << "true" : cout << "false";
		
		cout << "Enter the value of c and d : \n";
		cin >>c,d;
		
		sum=c+d;
		sub=c-d;
		mul=c*d;
		div=c/d;
		mod=c%d;
		
		cout << "Addition of two numbers is : \n" <<sum;
		cout << "Substraction of two numbers is : \n" <<sub;
		cout << "Multiplication of two numbers is : \n" <<mul;
		cout << "Division of two numbers is : \n" <<div;
		cout << "Modulus of two numbers is : \n" <<mod;
		
		cout << "Enter the values of g and h : \n";
		cin >> g,h;
		
		if(g>h)
		{
			cout << "G Greater than H\n";
			}
		return 0;
}
