#include<iostream>
using namespace std;
int main()
{
	int i,num,next_term,t1=0,t2=1;
	cout <<"Enter your number of terms:\n";
	cin >>num;
	cout <<"Fabinocci series is:\n";
    for (i = 1; i <= num; ++i)
    {
        cin>> t1;
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
}
}
