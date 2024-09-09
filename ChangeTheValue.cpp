#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    int arr[x];
    cout<<"Enter elements of array : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(i%2==0) arr[i] +=10;
        else arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }
}