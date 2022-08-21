#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[6] = {0, 1, 0, 1, 1, 0};
    int i = 0, j = 5;
    while (i <= j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (arr[i] == 1 && arr[j] == 0 && i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
    return 0;
}