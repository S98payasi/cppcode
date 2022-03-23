// find the largest element of the array
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the size of arr";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int MAX = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        MAX = max(MAX, a[i]);
    }
    cout << MAX;
    return 0;
}
