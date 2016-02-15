#include<stdio.h>
#include<stdlib.h>
#include<iostream>
use namespace std;
typedef struct node{
    int val;
    Node *next;
}Node,*Stack;
int IsEmpty(Stack *S){
    return S->next == NULL;
}
Stack CreateStack(){
    Stack *S = new Node;
    s->next = NULL;
    return S;
}
void MakeEmpty(Stack *S){
    Node *now = S->next;
    while(now){
        Node *temp = now->next;
        delete now;
        now = temp;
    }
}
int Top(Stack *S){
    if(S->next == NULL){
        cout<<"top错误，栈中无元素";
        return 0;
    }
    return S->next->val;
}
void Push(int x,Stack *S){
    Node *temp = new Node;
    temp->val = x;
    temp->next = S->next;
    S->next = temp;
}
void Pop(Stack *S){
    if(S->next == NULL){
        cout<<"pop错误，栈中无元素";
        return;
    }
    Node *temp = S->next;
    S->next = S->next->next;
    delete temp;
}
void DisposeStack(Stack *S){
    Node *now = S->next;
    while(now){
        Node *temp = now->next;
        now = now->next;
        delete temp;
    }
}
int main(){
    return 0;
}
