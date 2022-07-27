#include<iostream>
using namespace std;
int main()
{
	int num,i,count=0;
	cout << "Enter the value of num";
	cin >> num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		
			}
		}
		if(count==2)
		{
			cout << " it is a prime number";
			}
	else 
	{
		
			cout << " It is not prime number ";
			}
		
		
	
}
