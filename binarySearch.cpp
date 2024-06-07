#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        { // Go to left part
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}
int main()
{
    // int num[6] = {0, 1, 2, 2, 1, 0};
    int n = 6;
    int num[n] = {1, 3, 4, 5, 8};
    int index = binarySearch(num, n, 4);
    cout << "index of 8 is " << index;
    return 0;
}
