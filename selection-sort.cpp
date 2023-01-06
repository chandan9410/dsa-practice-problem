// not working properly
#include <iostream>
using namespace std;
void selectsort(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        int min_idx = 0;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(arr[min_idx], arr[i]);
    }
}

int main()
{
    int arr[] = {13, 12, 32, 11, 3112, 1};
    int n = 6;
    selectsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}