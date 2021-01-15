#include <iostream>
using namespace std;
void search(int *a, int s, int e, int key)
{
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (a[mid] == key)
        {
            cout << "Yes";
            return;
        }
        if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "No";
}
int main()
{
    int a[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    long long int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    search(a, 0, 12, sum);
}