#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int even[6] = {
        2,
        4,
        6,
        8,
        12,
        18,
    };
    int odd[5] = {1, 3, 4, 5, 6};
    int index = binarySearch(even, 6, 12);
    cout << "Index of 12 is " << index << endl;
    return 0;
}