#include <iostream>
using namespace std;
 
// Function declarations
int isPerfect(int num);
void printPerfect(int start, int end);
 
 
 
int main()
{
    int start, end;
 
    // Inputting lower and upper limit to print perfect numbers
    cout<<"Enter lower limit to print perfect numbers: ";
    cin>>start;
    cout<<"Enter upper limit to print perfect numbers: ";
    cin>>end;
 
   cout<<"All perfect numbers between "<<start<< " to "<<end <<" are: "<<endl;
    printPerfect(start, end);
 
    return 0;
}
 
int isPerfect(int num)
{
    int i, sum;
 
    // Finding sum of all proper divisors
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
 
    /*
      If sum of proper positive divisors equals to given number
      then the number is perfect number
     */
    if(sum == num)
        return 1;
    else
        return 0;
}
 
//Printing all perfect numbers
void printPerfect(int start, int end)
{
    // Iterating from start to end
    while(start <= end)
    {
        if(isPerfect(start))
        {
           cout<<start<<endl;
        }
 
        start++;
    }
}
