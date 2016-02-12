#include<iostream>
using namespace std;
unsigned long pow(int x,int n)
{
    if(!n) return 1;//注意这里！！！！！！！！
    if(n == 1) return x;
    if(n%2)//奇数
        return pow(x,(n-1)/2)*pow(x,(n-1)/2)*x;
    else //偶数
        return pow(x,n/2)*pow(x,n/2);
}
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);
    return 0;
}
