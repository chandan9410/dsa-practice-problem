#include<iostream>
using namespace std;
//factorial of n=4
int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}

int main(){
   cout<<fact(4);
    
return 0;
}