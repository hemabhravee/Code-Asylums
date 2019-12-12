#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
};

node* head1;
node* head2;

char A[3] = {'(','[','{'};
char B[3] = {')',']','}'};

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

char peek(){
    if(head1 == NULL){
        cout<<"Stack empty!";
        return '\0';
    }
    else
        return head1->data;

}

char top(){
    if(head1 == NULL){
        cout<<"Stack Empty!";
        return '\0';
    }
    else{
        char x = head1->data;
        head1 = head1->next;
        return x;
    }
}

//bool isOpen(string str){
//    for(int i=0; i<3; i++)
//}

//returns true if balanced
bool isBalanced(string str){
    for(int i=0; i<str.length(); i++){
        //cout<<str[i];
        if(head1 == NULL){
            for(int j=0;j<3;j++){
                if(str[i]==B[j])
                    return false;
            }
            push(str[i]);
        }
        else{
            for(int j=0;j<3;j++){
                if(str[i] == B[j] && head1->data == A[j]){
                    pop();
                    if(i == str.length()-1 && head1 == NULL)
                        return true;
                    goto next;
                }
            }
            push(str[i]);
        }
        if(i == str.length()-1)
                        return false;
        next:
            continue;
    }
}

int main()
{
    if(isBalanced("(()"))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
}

