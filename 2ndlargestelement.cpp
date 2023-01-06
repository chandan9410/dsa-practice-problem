#include <iostream>
using namespace std;
int largest(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    return res;
}
int secondlargest(int arr[], int n)
{
    int badda = largest(arr, n);
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[badda])
        {
            if (res == -1)
                res = i;
            else if (arr[i] > arr[res])
                res = i;
        }
    }
    return arr[ res];
}

int main()
{  int arr[] = {12,34,674,3,34,23,2311,33};
   cout<<secondlargest(arr,8);


}