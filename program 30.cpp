#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of number :\n";
	cin>>n;
	if(n>0)
	{
		cout<<n<<"\t Is a positive number\n";
		}
		else if(n==0)
		{
			cout<<n<<"\t Is equal to zero\n";
			}
			else
			{
				cout<<n<<"\t Is a negative number\n";
				}
				return 0;
}
