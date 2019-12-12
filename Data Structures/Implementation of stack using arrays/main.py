#include <iostream>

using namespace std;
int A[100], B[100];
int top1=-1;
int top2=-1;

void push(int data){
    if(top1==99){
        cout<<"Stack is full!";
        return;
    }
    else{
        A[++top1] = data;
        return;
    }
}

void pop(){
    if(top1==-1){
        cout<<"Stack is empty!";
        return;
    }
    else{
        top1--;
    }
}

void undo(){
    if(top1==-1){
        cout<<"Stack is empty!";
        return;
    }
    else{
        B[++top2] = A[top1--];
        return;
    }
}

void redo(){
    if(top2==-1){
        cout<<"Stack2 is empty!";
        return;
    }
    else{
        A[++top1] = B[top2--];
        return;
    }
}



int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    undo();
    redo();
    for(int i=top1; i>=0; i--)
        cout<<A[i]<<endl;

    return 0;
}
