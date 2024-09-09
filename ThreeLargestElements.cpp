#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter size of array : ";
    cin>>x;
    int arr[x];
    cout<<"Enter elements of array : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int max,max2,max3;
    max=max2=max3=arr[0];
    for(int i=0;i<x;i++){
        if(arr[i]>max){
            max3=max2;
            max2=max;
            max=arr[i];
        }
        else{
            if(arr[i]>max2){
                max3=max2;
                max2=arr[i];
            }
            else{
                max3=arr[i];
            }
        }
    }
    cout<<"Three largest numbers of the array are "<<max<<" "<<max2<<" "<<max3<<" ";
}