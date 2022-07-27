#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b,ch;
	while(1)
	{
		cout<<"\t**ARITHMATIC OPERATIONS**\n";
		cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Quit\n";
		cout<<"Enter the a and b values :\n";
		cin>>a>>b;
		cout<<"Enter your choice :\n";
		cin>>ch;
		switch(ch)
		{
			case 1 : 
				{
					cout<<"Addition of two numbers : \n"<<a+b;
					break;
					}
					case 2 :
						{
							cout<<"Substraction of teo numbers :\n"<<a-b;
							break;
							}
				case 3 :
					{
						cout<<"Multiplication of two numbers : \n"<<a*b;
						break;
						}
				case 4 :
					{
						cout<<"Division of two numbers : \n"<<a/b;
						break;
						}
				case 5 :
					{
						cout<<"Modulus of two numbers : \n"<<a%b;
						break;
						}
				case 6 :
					{
						exit(0);
						break;
						}
					default : 
						cout<<"Enter the valid option\n";	
			}
		}
		
}
