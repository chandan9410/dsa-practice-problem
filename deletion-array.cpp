#include <iostream>

using namespace std;

int deleteEle(int arr[], int n, int x)
{
	int i;

	for(i = 0; i < n; i++)
	{
		if(arr[i] == x)
			break;
	}


	for(int j = i; j < n - 1; j++)
	{
		arr[j] = arr[j + 1];
	}

	return n-1;
} 

    
int main() {
	
       int arr[] = {3, 8, 12, 5, 6};
         int n;
       

     
      n=  deleteEle(arr,5,12);

       cout<<"After Deletion"<<endl;

       for(int i=0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
} 