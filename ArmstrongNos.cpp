#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    long long num;
    int rem;
    long long temp;
    while (test--)
    {
        long long res = 0;
        cin >> num;
        temp = num;
        while (num != 0)
        {
            rem = num % 10;
            num = num / 10;
            res += rem * rem * rem;
        }
        if (res == temp)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}