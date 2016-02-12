#include<iostream>
using namespace std;
//ÒªÇóa>b
int gcd1(int a,int b)//µÝ¹é
{
    if(!b) return a;
    return gcd1(b,a%b);
}
int gcd2(int a,int b)//µü´ú
{
    while(b)
    {
        int temp = a;
        a = b;
        b = temp % a;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd1(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
    return 0;
}
