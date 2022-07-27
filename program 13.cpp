#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,num,next_term,t1=0,t2=1;
	cout <<"Enter your number of terms:\n";
	cin >>num;
	cout <<"Fabinocci series is:\n";
    for (i = 1; i <= num; ++i)
    {
        cout << t1 <<"\t";
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
	}
	
}
