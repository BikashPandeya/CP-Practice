#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    cout << n << " "; // Output the initial value of n
    while (n > 0)
    {
        if (n == 1)
        {
            break;
        }
        if (n % 2 == 0)
        {
            
            n=n/2;
           cout << n << " ";

        }
        else
        {

           
            n = n * 3 +1;
            cout << n << " ";

        }
    }
}