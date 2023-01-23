#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main() {
    //STACK
    
    stack<int>st; //declare
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.top()<<" ";//3
    while(!st.empty()){
        cout << st.top()<<" ";//3 2 1
        st.pop();
    }
    stack<int> mystack1;
    stack<int> mystack2;
     
    // pushing elements into first stack
    mystack1.push(1);
    mystack1.push(2);
    mystack1.push(3);
    mystack1.push(4);
     
    // pushing elements into 2nd stack
    mystack2.push(3);
    mystack2.push(5);
    mystack2.push(7);
    mystack2.push(9);
    
    mystack1.swap(mystack2);
 
        // printing the first stack
    cout<<"mystack1 = ";
    while (!mystack1.empty()) {
        cout<<mystack1.top()<<" ";
        mystack1.pop();
    }
 
        // printing the second stack
    cout<<endl<<"mystack2 = ";
    while (!mystack2.empty()) {
        cout<<mystack2.top()<<" ";
        mystack2.pop();
    }
    //{1,2,3,4,5}
    Peek(): Prints the top element of the stack 5
}
