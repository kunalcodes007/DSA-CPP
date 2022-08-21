#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[50], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}

int alternateswap(int arr[50], int size)
{

    int swap;
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = swap;
        }
    }
}
int main()
 {

    int arr[50];
    int size;
    cout << "enter the size of array:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    cout << endl;
    cout << "swapping alternate elements" << endl;
    alternateswap(arr, size);
    printarray(arr, size);
    return 0;
}