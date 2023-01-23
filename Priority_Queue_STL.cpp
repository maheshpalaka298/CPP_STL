#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main() {
    //PRIOTIY QUEUE

    priority_queue<int>pq1; //maxheap
    priority_queue<int,vector<int>, greater<int>>pq; //minheap
    pq.push(-1*10);
    pq.push(-1*3);
    pq.push(-1*5);
    pq.push(-1*7);
    cout<< pq.top();
    }
