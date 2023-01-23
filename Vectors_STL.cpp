#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main() {
    
    //VECTOR

    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.emplace_back(4);
    vector<vector<int>>mat={{1,2,3},{2,3,4},{3,4,5}};
    cout << arr[3] << endl;
    for (int i=0;i<mat.size();i++){
        for (int j =0;j<mat.size();j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<pair<int,int>>ve;
    ve.push_back({3,4});
    ve.emplace_back(4,5);
    for (int i=0;i<ve.size();i++){
        cout << ve[0].first<<","<<ve[0].second;
    }
    cout<< ve[1];
    vector <int>vat(5,13);
    vector<int>var(vat);
    for (int i=0;i<var.size();i++){
        
        cout<<var[i] <<" ";
    }
    
    vector<int>vet;
    vet.push_back(1);
    vet.push_back(2);
    vet.push_back(3);
    vector<int>:: iterator it=vet.begin();
    vector<int>:: iterator it=vet.end();
    vector<int>:: iterator it.rbegin();
    vector<int>:: iterator it=vet.rend();
    vector<int>vet={1,2,3,4};
    for (auto it:vet){
    
        cout << it<< " ";
    }
    cout << vet.back();
    vector<int>vet={1,2,3,4,5};
    vet.erase(vet.begin()+1,vet.begin()+3); //{1 4 5}
    for (auto it:vet){
    
        cout << it<< " ";
    }
    vector<int>vet={1,2,3,4,5};
    vet.insert(vet.begin(),300); //300 1 2 3 4 5
    for (auto it:vet){
    
        cout << it<< " ";
    }
    vector<int>vet={1,2,3,4,5};
    vet.insert(vet.begin()+1,2,10);//1 10 10 2 3 4 5 
    for (auto it:vet){
    
        cout << it<< " ";
    }
    vector<int>vet={1,2,3,4,5};
    vector<int>copy(2,10);//{10,10}
    vet.insert(vet.begin(),copy.begin(),copy.end()); //10 10 1 2 3 4 5
    for (auto it:vet){
    
        cout << it<< " ";
    }
    vet.pop_back();
    v1={1,2}
    v2={4,5}
    v1.swap(v2);//v1={4,5} v2={1,2}
    vet.clear();//to erase all the values
    cout<<vet.empty()
    }
