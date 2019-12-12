#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* head1;
node* head2;

void push(int data){

    if(head1 == NULL){
        node* temp = new node();
        temp->data = data;
        head1 = temp;
        return;
    }

    else{
        node* temp = new node();
        temp->next = head1;
        temp->data = data;
        head1 = temp;
        return;
    }

}

void print(){
    if(head1 == NULL){
        cout<<"Stack is empty!";
        return;
    }
    else{
        node* temp = head1;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        return;
    }
}

void pop(){
    if(head1 == NULL){
        cout<<"Stack Empty!";
        return;
    }
    else{
        node* temp = new node();
        temp = head1;
        head1 = head1->next;
        free(temp);
    }
}

int main()
{
    push(5);
    push(10);
    pop();
    print();
}
