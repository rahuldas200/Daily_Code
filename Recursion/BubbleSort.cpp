#include<iostream>
using namespace std;

void BubbleSort(int* arr , int n){
    //base case
    if(n == 1){
        return ;
    }

    // 1 case solve --> largest element shift to last index
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // agai same 
    return BubbleSort(arr,n-1);
}

int main(){
    int arr[5] = {1,3,10,4,2};
    int n = 5;

    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
