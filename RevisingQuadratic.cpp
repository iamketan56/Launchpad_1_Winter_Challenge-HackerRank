#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x_square_coficient, x_coficient, constant;
    cin >> x_square_coficient >> x_coficient >> constant;
    int root1, root2;
    int d = x_coficient * x_coficient - 4 * x_square_coficient * constant;
    root1 = (-x_coficient + sqrt(x_coficient * x_coficient - 4 * x_square_coficient * constant)) / 2 * x_square_coficient;
    root2 = (-x_coficient - sqrt(x_coficient * x_coficient - 4 * x_square_coficient * constant)) / 2 * x_square_coficient;
    if (d == 0)
    {
        cout << "Real and Equal" << endl;
        cout << root1 << " " << root2 << endl;
    }
    else if (d > 0)
    {
        cout << "Real and Distinct" << endl;
        cout << root2 << " " << root1 << endl;
    }
    else
    {
        cout << "Imaginary" << endl;
    }
}