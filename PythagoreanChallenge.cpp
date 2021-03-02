#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int num;
    while (test--)
    {
        cin >> num;
        int a = 0;
        int b = sqrt(num);
        while (a <= b)
        {
            if (a * a + b * b == num)
            {
                cout << "(" << a << "," << b << ") ";
                a++;
            }
            if (a * a + b * b > num)
            {
                b--;
            }
            if (a * a + b * b < num)
            {
                a++;
            }
        }
        cout << endl;
    }
}