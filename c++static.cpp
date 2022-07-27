//in c++ classes also we can declare static data members
//in general it is called as static variable
//a class data member can also be declared as a ststic data member
//and it is intialized with ZERO automatically
//in general whenever a variable is intialized then it automatically intializes with GARBAGE value
//when a variable is declared as static then it only creates one copy to all the other funcions or classes
//static data member is a class member not an object member and these are also accessed by class name directly
//every data member should be accessed with member functions of that class using a object name
//but when it is a static member we can directly use by calling with class name
// and these are also accessed by objects
//static data member should be declared inside the class using static key word  and it should be defined outside the class with synrax of
//int test ::a=value;
//static data members are created in data segments which is public area 
#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	public :
static	int a;
void get()
{
cout<<"a= "<<a<<endl;
}
};
int test ::a=10;
main()
{
	test :: a=100;
	test t;
	cout<<"a= "<<test :: a<<endl;
	t.get();
}




