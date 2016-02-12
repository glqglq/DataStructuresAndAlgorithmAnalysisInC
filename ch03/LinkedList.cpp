#include<stdio.h>
#include<iostream>
using namespace std;
struct Node{
    int val;
    Node *next;
};
struct LinkedList{
public:
    Node *first;
    LinkedList(){
        first = new Node;
        first->next = NULL;
    }
    void PrintList(){
        Node *now = first->next;
        while(now){
            cout<<" "<<(now->val);
            now = now->next;
        }
        cout<<endl;
    }
    int MakeEmpty(){
        Node *now = first->next;
        int sum = 0;
        while(now){
            Node *temp = now->next;
            delete now;
            now = temp;
            sum++;
        }
        first->next = NULL;
        return sum;
    }
    int Insert(int num,int loc){//将num插入到loc后面去
//            cout<<"j";
        Node *now = first;
        int nowloc = 0;
        while(now){
            if(nowloc == loc){
                Node *temp = new Node;
                temp->val = num;
                temp->next = now->next;
                now->next = temp;
                break;
            }
            now = now->next;
            nowloc++;
        }
    }
    int Delete(int loc){//删除loc后的节点
        int nowloc = 0;
        Node *now = first;
        while(now){
            if(nowloc == loc){
                Node *temp = (now->next)->next;
                delete (now->next);
                now->next = temp;
                break;
            }
            now = now->next;
            nowloc++;
        }
    }
    int FindKth(int loc){//找到位置为loc的元素
        Node *now = first;
        int nowloc = 0,flag = 0;
        while(now){
            if(nowloc == loc){
                flag = 1;
                cout<<"位置在"<<loc<<"的元素值为："<<(now->val)<<endl;
                break;
            }
            now = now->next;
            nowloc++;
        }
        if(!flag) cout<<"没有找到";
    }
    int Find(int num){//查找num
        Node *now = first;
        int nowloc = 0,flag = 0;
        while(now){
            if(now->val == num){
                flag = 1;
                cout<<num<<"的位置是："<<nowloc<<endl;
                break;
            }
            now = now->next;
            nowloc++;
            if(!flag) cout<<"没有找到";
        }
    }
};
int main(){
    LinkedList *l = new LinkedList;
    l->Insert(1,0);
    l->Insert(2,1);
    l->Insert(3,2);
    l->PrintList();
    l->FindKth(2);
    l->Find(2);
    l->Delete(1);
    l->PrintList();
    l->MakeEmpty();
    l->FindKth(1);
    return 0;
}
