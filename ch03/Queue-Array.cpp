#include<stdio.h>
#include<iostream>
using namespace std;
struct Quque{
    int Capacity;
    int Front;
    int Rear;
    int Size;
    int *val;
};
int IsEmpty(Queue *Q){
    return Q->Size == 0;
}
Queue CreateQueue(int MaxElements){
    Queue *q = new Queue;
    q->Capacity = MaxElements;
    q->Front = 1;
    q->Rear = 0;
    q->Size = 0;
    q-val = new int[MaxElements];
    return q;
}
void MakeEmpty(Queue *Q){
    Q->Front = 1;
    Q->Rear = 0;
    Q->Size = 0;
}
void Enqueue(int x,Queue *Q){
    Q->Size++;
    Q->val[(++Rear)%(Q->Capacity)];
}
int IsFull(Queue *Q);
void DisposeQueue(Queue *Q);
int Front(Queue *Q);
void Deque(Queue *Q);
int FrontAndDeque(Queue *Q);
int main(){
    return 0;
}
