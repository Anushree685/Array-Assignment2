#include<iostream>
#include<climits>
using namespace std;
int main (){
    int x;
    cout<<"Enter the size of array : ";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int fmax = INT_MIN;
    for(int i=0;i<x;i++){
        if(fmax<arr[i]) fmax = arr[i];
    }
    cout<<fmax<<endl;
    int smax = INT_MIN;
    for(int i=0;i<x;i++){
        if( arr[i]!=fmax && smax<arr[i]) smax = arr[i];
    }
    cout<<smax<<endl;
    int tmax = INT_MIN;
    for(int i=0;i<x;i++){
        if(fmax!=arr[i] && smax!=arr[i] && tmax<arr[i]) tmax = arr[i];
    }
    cout<<tmax<<endl;
    
}