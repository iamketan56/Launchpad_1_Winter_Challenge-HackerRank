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
    for (int i = 0; i <= n; i++)
    {
        if ((i > 2) && (i % 2 != 0))
        {

            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    cout << "1";
                }
                else
                {

                    cout << "0";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "1";
            }
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}
