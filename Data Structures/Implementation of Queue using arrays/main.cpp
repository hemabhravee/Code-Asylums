#include <bits/stdc++.h>

//using namespace std;

class queue{

    int top;
    int rear;
    int capacity;
    int *A;

    public:
        queue(int cap){
            top = -1;
            rear = -1;
            capacity = cap;
            int *A = new int[cap];
        };

        void enqueue(int data){
            if(top == capacity-1){
                std::cout<<"Queue is full!";
            }
            else{
            //std::cout<<"top = "<<++top;
                *(A + (++top)) = data;
                std::cout<<"TEST"<<top<<*(A + top);
            }
            return;
        };

        void dequeue(){
            if(rear == top){
                std::cout<<"Queue is empty!";
            }
            else{
                rear++;
                for(int i=rear ; i<top; i++){
                    *(A + i) = *(A + i+1);
                }
                top--;
                rear--;
            }
            return;
        };
        void show(){
            if(top == rear){
                std::cout<<"Queue is empty!";
            }
            else{
                for (int i=0 ; i<=top ; i++)
                    std::cout<<*(A + i)<<" ";
            }
        };
        bool isFull(){
            if(top == capacity-1)
                return 1;
            else
                return 0;
        };

        bool isEmpty(){
            if(top == rear)
                return 1;
            else
                return 0;
        }
};


int main()
{
    queue myQueue(3);

    if(myQueue.isEmpty())
        std::cout<<"empty";
    else
        std::cout<<"not empty";
    //std::cout<<"Empty?"<<a;
    //myQueue.del();
    myQueue.enqueue(1);
    std::cout<<"\n";
    myQueue.enqueue(2);
    std::cout<<"\n";
    myQueue.enqueue(3);
    std::cout<<"\n";

    if(myQueue.isFull())
        std::cout<<"full";
    else
        std::cout<<"not full";

    std::cout<<"\n";
    myQueue.dequeue();
    std::cout<<"\n";
    myQueue.dequeue();
    std::cout<<"\n";

    if(myQueue.isFull())
        std::cout<<"full";
    else
        std::cout<<"not full";


    std::cout<<"\nQueue is : \n";
    myQueue.show();
    return 0;
}

