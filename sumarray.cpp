#include <iostream>
using namespace std;
int sum(int arr[],int res,int n)
{
    if(n==0) return res+arr[0];
    return sum(arr,res+arr[n],n-1);
}
int main()
{
    int arr[5]={4,64,2,4,6};
    cout<<sum(arr,0,4);
    return 0;
}