#include <iostream>
using namespace std;
int main()
{

    int i, beg, end, mid, n, item, a[10];
    cout << "Enter number of elements\n";
    cin >> n;
    cout << "Enter the Elements\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter item to search\n";
    cin >> item;
    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;
    while (beg <= end)
    {
        if (a[mid] == item)
        {
            cout << item << " found at location " << mid + 1 << endl;
            break;
        }
        else if (a[mid] < item)
            beg = mid + 1;
        else
            end = mid - 1;
        mid = (beg + end) / 2;
    }
    if (beg > end)
        cout << "Item not present in the list" << endl;
}