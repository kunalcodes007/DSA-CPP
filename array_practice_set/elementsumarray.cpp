#include <bits/stdc++.h>
using namespace std;

int main()
{

    int sum = 0;
    int arr[10];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum = arr[i] + sum;
    }
    cout << sum;
    return 0;
}