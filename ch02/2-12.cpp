#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int maxsubsequencesum1(int a[],int n)
{
int maxsum = 0;
	for(int i = 0;i < n;i++)
for(int j = i;j < n;j++)
{
	int sum = 0;
	for(int k = i;k < j;k++)
		sum += a[k];
	if(sum > maxsum) maxsum = sum;
}
		return maxsum;
}

int maxsubsequencesum2(int a[],int n)
{
	int maxsum = 0,thissum;
	for(int i = 0;I < n;i++)
	{
		thissum = 0;
		for(int j = I;j < n;j++)
		{
			thissum += a[j];//用thissum存储
			if(thissum > maxsum)
				maxsum = thissum;
}
}
return maxsum;
}

int maxsubsequencesum3(const int *num,int left,int right)
{
    //基准情况
    if(left == right)
        if(num[left] > 0)//why?求解求解！！！！！
            return num[left];
        else return 0;

    //计算两边
    int middle = (right - left)/2 + left;
    int maxleft = maxsubsequencesum(num,left,middle);//左半边，注意这里函数有返回值
    int maxright = maxsubsequencesum(num,middle + 1,right);//右半边

    //计算跨越
    int maxleftboarder = 0,maxrightboarder = 0,maxthissum = 0;;
    for(int i = middle; i >= left; i--)
    {
        maxthissum += num[i];
        if(maxthissum > maxleftboarder)
            maxleftboarder = maxthissum;
    }
    maxthissum = 0;
    for(int i = middle + 1; i <= right; i++)
    {
        maxthissum += num[i];
        if(maxthissum > maxrightboarder)
            maxrightboarder = maxthissum;
    }
    return max(max(maxleft,maxright),maxleftboarder + maxrightboarder);//这里算是程序的出口，一定要搞明白返回值！
}
int maxsubsequencesum4(const int *a)
{
    int maxsum = thissum = 0;
    for(int i = 0;i < n;i++)
    {
        thissum += a[i];
        if(thissum > maxsum) maxsum = thissum;
        if(thissum < 0) thissum = 0;
    }
}
int a[1006];
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
    cout<<maxsubsequencesum1(a,n);
    cout<<maxsubsequencesum2(a,n);
    cout<<maxsubsequencesum3(a,0,n - 1);
    cout<<maxsubsequencesum4(a,n);
    return 0;
}
