#include<iostream>
using namespace std;
void sub(int j,int k)
{
	try
	{
		if(j==0)
		throw j;
		else
		cout<<"Subtraction"<<j-k<<"\n";
	}
		catch(int)
		{
		cout<<"Caught a null value\n";
		throw;
	     }
}
int main()
{
	try{
		sub(9,8);
		sub(0,7);
	}
	catch(int)
	{
	cout<<"caught a null value \n";
     }
     return 0;
}

