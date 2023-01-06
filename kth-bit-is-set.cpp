//m1 by left sift operator
#include <iostream>
using namespace std;
void kthbitcheck(int n, int k)
{
    if (n & (1 << (k - 1)))
        cout << "set" << endl;
    else
        cout << "not set" << endl;
}

int main()
{
    kthbitcheck(1, 3);

    return 0;
}
// m2 is with  right sift operator