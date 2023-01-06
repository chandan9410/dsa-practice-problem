#include <iostream> 
using namespace std;
int fun(int arr[], int n, int x)
{
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == x)
         return i;
   }
}

int main()
{
   int arr[] = {100, 78, 45, 67, 10, 10, 10, 10, 10};
   cout << fun(arr, 9, 10);

   return 0;
}