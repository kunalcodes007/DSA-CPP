#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int arr[50];
    cout << "enter the size of array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }

    for (int i =(size-1); i >=0; i--)
    {

        cout << arr[i];
    }
}