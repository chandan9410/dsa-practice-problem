#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return sum(n/10)+n%10;
}

int main(){
    cout<<sum(4556);
    
return 0;
}




