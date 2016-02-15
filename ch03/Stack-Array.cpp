#include<stdio.h>
#include<iostream>
using namespace std;
struct Stack{
    int *val;
    int capacity;//容量
    int TopOfStack;
};
int IsEmpty(Stack *S){
    return S->TopOfStack == -1;
}
int IsFull(Stack *S){
    return S->Top == (S->capacity - 1);
}
Stack *CreateStack(int MaxElements){
    if(MaxElements >= 105){
        cout<<"这个栈太大了，无法建立！";
        return;
    }
    Stack *S = new Stack;
    if(!S){
        cout<<"越界";
        return;
    }
    S->val = new [105] int;
    if(!(S->val)){
        cout<<"越界";
        return;
    }
    S->capacity = MaxElements;
    S.TopOfStack = -1;
}
void DisposeStack(Stack *S){
    delete S->val;
    delete S;
}
void MakeEmpty(Stack *S){
    S->TopOfStack = -1;
}
int Top(Stack *S){
    return S->val[S->TopOfStack];
}
void Push(int x,Stack *S){
    S->val[++(S->TopOfStack)] = x;
}
void Pop(Stack *S){
    (S->TopOfStack)--;
}
int TopAndPop(Stack *S){
    int temp = S->val[S->TopOfStack--];
    return temp;
}
int main(){
    return 0;
}
