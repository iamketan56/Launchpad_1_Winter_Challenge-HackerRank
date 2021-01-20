#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int number;
    while (n != 0)
    {
        int res = 0;
        int rem = 0;
        cin >> number;
        int i = 0;
        while (number != 0)
        {
            rem = number % 10;
            number /= 10;
            res += rem * pow(2, i);
            i++;
        }
        cout << res << endl;
        n--;
    }
    return 0;
}
