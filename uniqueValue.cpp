#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,2,3,3,4,4,1};
    for(int i=0;i<7;i++){
        int count = 0 ;
        for(int j=0;j<7;j++){
            if(j!=i && (arr[i] == arr[j])) count++;
        }
        if(count == 0) {
            cout<<arr[i]<<" is the odd one .";
            break;
        }
    }
}