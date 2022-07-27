#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,a,b,c,dis,real,img;
	cout<<"Enter co-efficients a,b and c : \n";
	cin>>a>>b>>c;
	if(dis>0)
	{
		x1=(-b+sqrt(dis))/(2*a);
		x2=(-b-sqrt(dis))/(2*a);
		cout<<"Roots are real and different "<<endl;
		cout<<"x1= "<<x1<<endl;
		cout<<"x2= "<<x2<<endl;
		}
		else if(dis==0)
		{
			cout<<"roots are real and same"<<endl;
			x1=(-b+sqrt(dis))/(2*a);
			cout<<"x1=x2= "<<x1<<endl;
			}
			else 
			{
				real=-b/(2*a);
				img=sqrt(-dis)/2*a;
				cout<<"Roots are ccomplex and different \n";
				cout<<"x1= "<<real<<"+"<<img<<"i"<<endl;
				cout<<"x2= "<<real<<"-"<<img<<"i"<<endl;
				}
				return 0;
}
