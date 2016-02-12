#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct{
    int CoeffArray[MaxDegree+ 1];
    int HighPower;
}*Polynomial;
void ZeroPolynomial(Polynomial *p){
    for(int i = 0;i < MaxDegree;i++){
        p->CoeffArray[i] = 0;
    p->HighPower = 0;
    }
}
void AddPloynomial(Polynomial *p1,Polynomial *p2,Polynomial *psum){
    ZeroPolynomial(psum);
    psum->HighPower = max(p1->HighPower , p2->HighPower);
    for(int i = 0;i < psum->HighPower;i++){
        psum->CoeffArray[i] = p1->CoeffArray[i] + p2->CoeffArray[i];
    }
}
void MultPolynomial(Polynomial *p1,Polynomial *p2,Polynomial *pmult){
    ZeroPolynomial(pmult);
    pmult->HighPower = p1->HighPower + p2->HighPower;
    for(int i = 0; i < p1->HighPower;i++)
        for(int j = 0;j < p2 -> HighPower;j++)
            pmult->CoeffArray[i + j] += p1->CoeffArray[i] * p2->CoeffArray[j];//注意这里是+=
}
int main(){

    return 0;

