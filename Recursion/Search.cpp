#include<iostream>
using namespace std;
bool isSort(int arr[] ,int n){
  //[1,2,3,4,5]
             
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSort(arr+1,n-1);

}

int main() {
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if( isSort(arr, n)){
        cout<<"Array is sorted";
    }
    else cout<<"array is not sorted";
    delete[] arr;
}
