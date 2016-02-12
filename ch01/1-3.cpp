#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int integer(double before)
{
    return (int)before;
}
double decimal(double before)
{
    return fabs(before - (int)before);//注意这里要用绝对值，而且是fabs
}
void PrintInteger(int num)
{
    if(abs(num) >= 10) PrintInteger(num/10);
    if(num < 0 && num > -10)//基准情形放在不断推进的后面
        cout<<num%10;
    else cout<<abs(num%10);
}
void PrintDecimal(double num,int bitt)
{
    cout<<".";
    for(int i = 0;i < bitt;i++)
    {
        num *= 10;
        cout<<integer(num);
        num = num - integer(num);
    }
}
int bit(double num)
{
    char str[20];
    sprintf(str,"%f",num);
    return strlen(str) - 2;
}
int main()
{
    double num;
    cin>>num;
    int inte = integer(num);
    double deci = decimal(num);
    PrintInteger(inte);
    if(deci >= 0.0001)
        PrintDecimal(deci,bit(deci));
    return 0;
}
