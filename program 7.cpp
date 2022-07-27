#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num1,num2;
	int var1,var2,temp;
	
	cout <<"\nEnter the value of num1 : \n ";
	cin >>num1;
	
	cout << "\nEnmter the value of num2 : \n";
	cin >>num2;
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout << "The values of num1 and num2 after swapping are : \n" <<num1 <<"\n" <<num2;
	
	cout <<"Enter the value of var1 : \n";
	cin >>var1;
	cout <<"Enter the value of var2 : \n";
	cin>>var2;
	
    temp=var1;
    var1=var2;
    var2=temp;
    cout <<"The values of var1 and vafr2 are : \n" <<var1 <<"\n"<<var2;
    return 0;
    
}
