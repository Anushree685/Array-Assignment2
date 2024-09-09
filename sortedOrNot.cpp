#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    int arr[x];
    cout<<"Enter elements of the array : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=1;i<x;i++){
        if(arr[i-1]>arr[i]){
            flag = false ;
            break;
        }
    }
    if(flag == true ) cout<<"YES";
    else cout<<"NO";
}