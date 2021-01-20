#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        long long int rev = 0;
        int rem = 0;

        while (n != 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        cout << rev << endl;
        t--;
    }
    return 0;
}
