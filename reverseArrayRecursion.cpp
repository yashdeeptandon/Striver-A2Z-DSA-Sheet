#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int left, int right)
{
    if (left >= right)
    {
        return;
    }
    swap(arr[left], arr[right]);

    reverseArray(arr, left + 1, right - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverseArray(arr, 0, 4);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}