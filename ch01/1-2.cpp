//这种带边界的最操蛋了
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char dic[4][5] = {"this","wats","oahg","fgdt"};
    char words[4][5] = {"this","two","fat","that"};
    for(int i = 0; i < 4; i++) //行
        for(int j = 0; j < 4; j++) //列
            for(int m = 0; m < 8; m++) //方向
                for(int n = 1; n < 4; n++) //走的步数（一定要明确每个变量所代表的意义）
                {
                    int ijia = 0,jjia = 0;//方向变量
                    if(!m)//左到右
                    {
                        if(j + n >= 4) break;
                        jjia = 1;
                    }
                    else if(m == 1)//上到下
                    {
                        if(i + n >= 4) break;
                        ijia = 1;
                    }
                    else if(m == 2)//左上到右下
                    {
                        if(i + n >= 4 || j + n >= 4) break;
                        ijia = 1;
                        jjia = 1;
                    }
                    else if(m == 3)//右下到左上
                    {
                        if(i - n < 0 || j - n < 0) break;
                        ijia = -1;
                        jjia = -1;
                    }
                    else if(m == 4)//右上到左下
                    {
                        if(i + n >= 4 || j - n < 0) break;
                        ijia = 1;
                        jjia = -1;
                    }
                    else if(m == 5)//左下到右上
                    {
                        if(i - n < 0 || j + n >= 4) break;
                        ijia = -1;
                        jjia = 1;
                    }
                    else if(m == 6)//右到左
                    {
                        if(j - n < 0) break;
                        jjia = -1;
                    }
                    else if(m == 7)//下到上
                    {
                        if(i - n < 0) break;
                        ijia = -1;
                    }





                    char compa[5];
                    int ibegin = i,jbegin = j,biao = 0;
                    for(int l = 0; l <= n; l++)
                    {
                        compa[biao++] = dic[ibegin][jbegin];
                        ibegin += ijia;
                        jbegin += jjia;
                    }
                    compa[n + 1] = '\0';
                    //cout<<"-"<<compa<<endl;
                    for(int l = 0; l < 4; l++)
                        if(!strcmp(compa,words[l]))
                            cout<<compa<<endl;
                }
    return 0;
}
