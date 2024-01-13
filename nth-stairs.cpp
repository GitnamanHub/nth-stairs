#include<iostream>
using namespace std;

int countstairs(int n)
{
    if(n<0)
    return 0;

    if(n==0)
    return 1;

    return countstairs(n-1)+countstairs(n-2);
}
int main()
{
    int nstairs=5;
    cout<<countstairs(nstairs);
}