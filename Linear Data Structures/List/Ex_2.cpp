#include<bits/stdc++.h>
using namespace std;

void my_list(list<int>g){

    list<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' <<*it;
    cout <<'\n';

}

int main(){

    return 0;
}

