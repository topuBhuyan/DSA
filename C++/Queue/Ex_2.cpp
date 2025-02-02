#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q; // declared queue

    // adding some element in queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout <<"Queue First Elements. " <<q.front() <<'\n';
    cout <<"Queue Last  Elements. " <<q.back() <<'\n';

    // remove 1 element from queue
    q.pop();

    cout << "Queue Elements After pop " <<q.front() <<'\n';

    cout <<"Size in Queue: " <<q.size() <<'\n';

    // checking queue empty or not empty
    if(q.empty()) {
        cout << "Queue Empty! \n";
    }else cout << "Queue Not Empty! \n";



    return 0;
}

