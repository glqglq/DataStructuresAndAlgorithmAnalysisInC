#include<iostream>
using namespace std;
int f(const int &x)
{
    if(x == 1) return 1;
    else return 2*f(x - 1) + x * x;
}
int main()
{
    int x;cin>>x;
    cout<<f(x);
    return 0;
}
