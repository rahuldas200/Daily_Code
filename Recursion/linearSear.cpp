#include<iostream>
using namespace std;
bool isKeyPresent(int* arr , int n ,int key){
    if(n == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    isKeyPresent(arr+1,n-1,key);
}
int main(){
    int arr[7] = {4,5,1,25,7,9,3};
    int size = 7;
    int key = 12;
    if(isKeyPresent(arr,size,key)){
        cout<<"key is present";
    }
    else {
        cout<<"key is not present";
    }
}
