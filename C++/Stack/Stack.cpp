#include<bits/stdc++.h>
//#define CAPACITY 3
using namespace std;

int stack1[3];
int top = -1; // -1 mane stack a kno data ni, sober uppor ar data

void push(int x){
    if(top < 3 - 1){  // stack ar size 3 stack ar size thake 1 subtraction krobo
        top = top + 1; // stack ar man 1 kore incress krobo then stack a rakbo
        stack1[top] = x;    // stack a 1 kore inress kore value raka holo
        cout <<"succesfully add value: " <<x <<'\n';
    }else {
        cout << "No spaces\n";
    }
}

int pop(){ // pop ar condition: stack thake return korbe & remove o korbe
    if(top >= 0) {
        int val = stack1[top]; // staack ta val nam ar variable a raka hyse
        top = top - 1; // stack ar value 1 subtraction korbo
        return val;
    }
    cout << "Empty Stack \n";   
    return -1;
}

int peek(){ // peek ar condition: stack ar sober uper ar man return korbo
    if(top >= 0){ // stack a jodi kno item thake tahole 1 kore inress hobe 0 thake vro ar dike hobe
        return stack1[top];
    }
    cout << "Empty Stack\n";
    return -1; // return -1 : stack a kno value ni 
}

int main(){
    peek();
    push(10);
    push(20);
    push(30);
    cout << "Pop call " <<pop() <<'\n';
    push(40);
    peek();
    cout << "Stack of top: " <<peek() <<'\n';

    return 0;
}