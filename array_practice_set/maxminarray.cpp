#include <bits/stdc++.h>
using namespace std;

int max(int arr[50], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[50], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int array[50];
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "maximum element:" << ' ' << max(array, n) << endl;
    cout << "minimum element:" << ' ' << min(array, n);
    return 0;
}