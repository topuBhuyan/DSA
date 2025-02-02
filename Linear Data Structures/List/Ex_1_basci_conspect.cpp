// Time complexity 	O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>my_list;

    // লিস্টে কিছু এলিমেন্ট যোগ করা
    my_list.push_back(10); // শেষে যোগ
    my_list.push_back(20);
    my_list.push_front(5); // শুরুতে যোগ
    my_list.push_back(g);

      // লিস্ট প্রদর্শন
    cout <<"List Elements: ";
    for(int x : my_list) {
        cout << x << " ";
    }
    cout <<'\n';

    // একটি এলিমেন্ট মুছে ফেলা
    //my_list.pop_front(); // শুরু থেকে মুছে ফেলা
    my_list.pop_back();

    cout <<"List After pop: ";

    for(int x : my_list) {
        cout << x <<" ";
    }
    cout <<'\n';

    return 0;
}
/*
push_back: লিস্টের শেষে নতুন এলিমেন্ট যোগ করে।
push_front: লিস্টের শুরুতে নতুন এলিমেন্ট যোগ করে।
pop_back: লিস্টের শেষের এলিমেন্ট সরিয়ে ফেলে।
pop_front: লিস্টের শুরুর এলিমেন্ট সরিয়ে ফেলে।
remove: নির্দিষ্ট মানের এলিমেন্ট লিস্ট থেকে মুছে ফেলে।

*/

