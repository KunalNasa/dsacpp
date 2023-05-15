#include <iostream>
using namespace std;
int pivotelement(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid >= s)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int searching(int arr[], int n, int key)
{
    int pivot = pivotelement(arr, n);
    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        int start = pivot, end = n - 1;
        int mid = start + (start - end) / 2;
        while (start <= end)
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (start - end) / 2;
        }
        return -1;
    }
    else
    {
        int start = 0, end = pivot - 1;
        int mid = start + (end-start) / 2;
        while (start <= end)
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (key > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end-start) / 2;
        }
        return -1;
    }
}
int main()
{
    int arr[7] = {7, 9, 12, 13, 1, 2, 3};
    // int index = pivotelement(arr, 7);
    // cout << index << endl;
    int search = searching(arr, 7, 13);
    cout << "Index of key is: " << search << endl;
}