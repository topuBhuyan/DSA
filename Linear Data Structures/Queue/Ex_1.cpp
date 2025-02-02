#include<bits/stdc++.h>
using namespace std;

int queue_array[5];
int front = 0, rear = -1, total_items = 0;

bool isFull() {

    if (total_items == 5) {
        return true;
    }
    return false;
}

bool isEmpty() {

    if(total_items == 0) {
        return true;
    }
    return false;
}

void enqueue(int items){
        if(isFull()) {
            cout <<"The Queue is Full.\n";
            return;
        }
        rear = (rear + 1) % 5;
        queue_array[rear] = items;
        total_items++;
}

int dqueue(){

    if(isEmpty()){
        cout <<"Queue is Full.";
        return -1;
    }

    int front_items = queue_array[front];
    queue_array[front] = -1;
    front = (front + 1) % 5;
    total_items--;
    return front_items;
}

void print_queue() {
    int i;
    cout <<"Queue ";

    for(i = 0; i < 5; i++){
        cout << queue_array[i] <<" ";
    }
    cout <<'\n';
}

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(40);
    enqueue(90);
    print_queue();
    enqueue(80);
    print_queue();

    enqueue(30);
    cout <<"Dqueue:" <<dqueue() <<'\n';
    print_queue();
    enqueue(30);
    print_queue();

    return 0;
}

