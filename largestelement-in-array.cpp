#include <iostream>
using namespace std;

int largestele(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }

        
        if( flag == true)
            return arr[i];
        
    }
    return 0;
}

    //efficient approach
    int findlargest(int arr[],int n){
        int res =0;
        for(int i=1; i<n; i++)
        {
            if(arr[i]>arr[res])
            res =i;
        }
            return arr[res];
        
    }


int main(){
     int arr[]= {12,45,23,3,67,89,32};
     cout<<"  by naive approach"<<endl;
      cout<<largestele(arr,7)<<endl;
      cout<<"  by efficient approach"<<endl;
    cout<<findlargest(arr,7);
    
}