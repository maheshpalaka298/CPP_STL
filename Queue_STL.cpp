#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main() {
    
    //QUEUE
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop(); //removes 1 
    cout<<q.front()<<endl;
    cout<< q.size()<<endl;
    cout << q.back()<<endl;
    q.empty();
    while (!q.empty()) {
        cout << q.front()<<" ";
        q.pop();
    }
    q1.swap(q2);
    }
