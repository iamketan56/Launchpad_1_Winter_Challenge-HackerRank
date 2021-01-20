#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char test;
    cin >> test;
    if ((test >= 'a' && test <= 'z'))
    {
        cout << "lowercase";
    }
    else if ((test >= 'A' && test <= 'Z'))
    {
        cout << "UPPERCASE";
    }
    else
    {
        cout << "Invalid";
    }
}
