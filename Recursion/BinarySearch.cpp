#include<iostream>
using namespace std;

bool ispresentBin(int* arr ,int s ,int e,int k){
    // base case 
    // element not found
    if(s>e)
        return false;

    int mid = s+(e-s)/2;
    // element found
    if(arr[mid] == k)
        return true;
    // right Part
    
    if(arr[mid]<k)
        return ispresentBin(arr,mid+1,e,k);

    // left part
    else 
        return ispresentBin(arr,s,mid-1,k);
}

int main(){
    int a[7] = {1,2,3,4,5,6,7};
    int s = 0;
    int e = 6;
    int k = 9;
    if(ispresentBin(a,s,e,k))
        cout<<"present";
    else
        cout<<"Not present";
}
