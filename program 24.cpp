#include <iostream>
using namespace std;
int main()
{
  int num1, num2, i, num, digit, sum;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
   sum = 0;
  cout << "Armstrong numbers between " << num1 << " and " << num2 << " are: " << endl;
  for(i = num1; i <= num2; i++)
  {
       for(num = i; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }
	}
        if(sum == i)
          cout << i << endl;
  return 0;
}
