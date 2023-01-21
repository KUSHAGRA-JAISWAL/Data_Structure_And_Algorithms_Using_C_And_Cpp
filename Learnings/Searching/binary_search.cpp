#include <iostream>
using namespace std;

int main()
{
    int a[6] = {10, 20, 30, 40, 50,60};
    int lr = 0;
    int up = sizeof(a)/sizeof(a[0]);
    cout << up << endl;
    int f = 0;
    int mid, item;

    cout << "Enter the element to be searched: ";
    cin >> item;

    while (lr <= up)
    {
        mid = (lr + up) / 2;
        if (a[mid] == item)
        {
            f = 1;
            break;
        }
        if (a[mid] < item)
        {
            lr = mid + 1;
        }
        else
            up = mid - 1;
    }
    if (f == 1)
    {
        cout << "Element found at index: " << mid;
    }
    else
    {
        cout << "Element not found";
    }
}