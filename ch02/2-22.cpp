#include<stdio.h>
#include<iostream>
using namespace std;
int BinarySearch(int *num,int n,int sear)
{
    int left = 0,right = n - 1,middle;
    while(left <= right)
    {
        middle = (right - left)/2 + left;//×¢ÒâÕâÀï
        if(num[middle] == sear) return middle;
        if(num[middle] > sear) right = middle - 1;
        if(num[middle] < sear) left = middle + 1;
    }
}
int main()
{
    int n,num[10010],sear;
    cin>>n;
    for(int i = 0;i < n;i++)
        cin>>num[i];
    cin>>sear;
    cout<<1 + BinarySearch(num,n,sear);
    return 0;
}
