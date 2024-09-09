#include<iostream>
#include<vector>
using namespace std;
int sum(int i,vector<int> &v){
    int sum = 0;
    for(int j=i;j<v.size();j+=2){
        sum +=v[j];
    }
    return sum;
}
int main (){
    vector<int> v;
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    for(int i=0;i<x;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int diff = sum(0,v) - sum(1,v);
    if(diff < 0) diff = 0 - diff;
    cout<<"Difference between sum is : "<<diff;
}