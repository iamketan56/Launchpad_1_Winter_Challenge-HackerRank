#include <iostream>
using namespace std;
int main()
{
    int t;
    long long int car_number;

    int rem;
    cin >> t;
    while (t != 0)
    {
        int even_sum = 0;
        int odd_sum = 0;
        cin >> car_number;
        while (car_number != 0)
        {
            rem = car_number % 10;
            if (rem % 2 == 0)
            {
                even_sum += rem;
            }
            else
            {
                odd_sum += rem;
            }
            car_number = car_number / 10;
        }
        if ((odd_sum % 3 == 0) || (even_sum % 4 == 0))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }
}