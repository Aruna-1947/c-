#include<iostream> 
using namespace std; 
int squaresum1(int num) 
{ 
    int sum = 0; 
    for (int i = 1; i <= num; i++) 
        sum += (i * i); 
    return sum; 
} 
int squaresum(int n) 
{  
	int sum2=0;
	for(int j=1;j<=n;j++)
	sum2+=(j*j*j);
    return sum2;
} 

int main() 
{ 
	int n;
    cout<<"Enter a number:\n";
	cin>>n; 
	cout<<"Sum of squares of the numbers upto gven number is :\n";
    cout << squaresum1(n) << endl;
    cout<<"Sum of cubes of the numbers upto gven number is :\n";
    cout << squaresum(n) << endl;
    return 0; 
}
