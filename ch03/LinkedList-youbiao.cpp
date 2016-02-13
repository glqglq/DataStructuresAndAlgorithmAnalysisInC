#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node{
    int val;
    int next;
}Node;
typedef struct listt{
    int first;
}List;
Node CursorSpace[105];
void InitializeCursorSpace(){
    for(int i = 0;i < 104;i++){
        CursorSpace[i].next = i + 1;
    }
}
List MakeEmpty(List L){
    int freelistlast = 0;//未使用空间的最后一个元素
    while(1){
        if(!CursorSpace[freelistlast].next)
            break;
        freelistlast = CursorSpace[freelistlast].next;
    }
    CursorSpace[freelistlast].next = CursorSpace[L.first].next;
    CursorSpace[L.first].next = 0;
}
int IsEmpty(const List L){
    return CursorSpace[L.first].next == 0;
}
int IsLast(const int pos,const List L){
    return CursorSpace[pos].next == 0;
}
int Find(int x,const List L){
    int now = CursorSpace[L.first].next;
    while(now){
        if(CursorSpace[now].val == x)
            return now;
        now = CursorSpace[now].next;
    }
    if(!now){
        cout<<"没找到！";
        return 0;
    }
}
void Delete(int x,List L){
    int now = CursorSpace[L.first].next;
    int last = L.first;
    while(now && CursorSpace[now].val != x){
        last = now;//移动
        now = ursorSpace[now].next;
    }
    CursorSpace[last].next = CursorSpace[now].next;
    int now2 = CursorSpace[0].next;
    while(now2 && CursorSpace[now2].next){
        now2 = CursorSpace[now2].next;
    }
    CursorSpace[now2].next = now;
    CursorSpace[now].next = 0;
}
int FindPrevious(int x,const List L);
void Insert(int x,List L,int pos){//在pos后面插入数据
    now = CursorSpace[0].next;
    CursorSpace[0].next = CursorSpace[now].next;
    CursorSpace[now].next = CursorSpace[pos].next;
    CursorSpace[pos].next = now;
    CursorSpace[now].val = x;
}
void DeleteList(List L){
    int now = L.first;
    while(CursorSpace[now].next){
        now = CursorSpace[now].next;
    }
    CursorSpace[now].next = CursorSpace[0].next;
    CursorSpace[0].next = L.first;
}
int Header(const List L){
    return L.first;
}
int First(const List L){//第一个
    return CursorSpace[L.first].next;
}
int Advance(const int pos){//下一个
    return CursorSpace[pos].next;
}
int Retrieve(const int pos){//返回位置pos的元素
    return CursorSpace[pos].val;
}
int main(){
    return 0;
}
