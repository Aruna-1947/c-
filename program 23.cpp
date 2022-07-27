#include <iostream>
using namespace std;
int checkPrimeNumber(int);
int main()
{
    int n1, n2;
    bool flag;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;
    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";
    for(int i = n1+1; i < n2; ++i)
    {
        flag = checkPrimeNumber(i);
        if(flag)
            cout << i << " ";
    }
    return 0;
}

