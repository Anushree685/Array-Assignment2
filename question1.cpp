#include<iostream>
#include<vector>
using namespace std;
int main (){
    int a;
    cout<<"Enter size of array : ";
    cin>>a;
    int arr[a];
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter elements in array : ";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int b=0;
    for(int i=0;i<a;i++){
        if(arr[i] > x) b++;
    }
    cout<<"No. of elements strictly greater than "<<x<<" is/are "<<b;
}  