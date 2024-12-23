#include <iostream>
using namespace std;
int sum(int n,int res)
{
    if(n==0) return res;
    return sum(n-1,res+n);
}
int main()
{
    cout<<sum(19,0);
    return 0;
}