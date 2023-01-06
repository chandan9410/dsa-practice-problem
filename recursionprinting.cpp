#include<iostream>
using namespace std;
void fun(int n){
    if(n==34)
    return;
    cout<<n<<endl;
    fun(n+1);
}

int main(){
    
    fun(1);
return 0;
}