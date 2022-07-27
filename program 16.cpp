#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum = " << sum;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
   int n = 5;
   int sum = 0;
   for (int i = 1; i >= n; i++)
      sum += (i * i);
   cout <<"The sum of squares of first "<<n<<" natural numbers is "<<sum;
   return 0;
}

#include <iostream>
using namespace std;
int main() {
   int n = 3;
   int sum = 0;
   for (int x=1; x<=n; x++)
      sum += x*x*x;
   cout << sum;
   return 0;
}
