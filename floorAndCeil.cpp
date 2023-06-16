#include <bits/stdc++.h>

using namespace std;

int floor(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] <= x)
        {
            ans = arr[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int ceil(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] >= x)
        {
            ans = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int arr[] = {3, 4, 4, 7, 8, 10};
    int x = 5;
    cout << floor(arr, 6, x) << " " << ceil(arr, 6, 5);
}