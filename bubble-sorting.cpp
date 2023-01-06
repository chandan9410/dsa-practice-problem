#include <iostream>
using namespace std;
void bubbelesort( int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    
        for (int j = 0; j < n-i-1; j++)
        
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                }
    
        
    
}

int main()
{
    int arr[] = {12, 23, 13, 1, 121, 123, 17};
    int n=7;
   
     bubbelesort(arr, n);
     for(int i=0; i<n;i++)
     {
        cout<<arr[i]<<", ";
     }
 
    return 0;
}