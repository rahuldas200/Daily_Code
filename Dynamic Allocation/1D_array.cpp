#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  // create array
    int* arr = new int[n];
  // taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;;
    }
  // delete heap memory
    delete []arr;
}
