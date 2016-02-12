#include<iostream>
using namespace std;
double percentage(int n)
{
    tot = 0;
    for(int i = 1;i <= n;i++)
        for(int j = i + 1;j <= n;j++)
        {
            if(gcd(i,j)) rel++;//Î±´úÂë
            tot++;
        }
    return rel*1.0/tot
}
int main()
{
    int n;cin>>n;
    cout<<percentage(n);
    return 0;
}
