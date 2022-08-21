#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    cout << "enter the element to search " << endl;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == n)
        {

            cout << "found at index:" << i;
            break;
        }
      
        
    }
    return 0;
}