#include<iostream>
using namespace std;

void marge(int* arr , int s ,int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrIndex++];
    }

    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrIndex++];
    }

    //marge 2 sorted array
    mainArrIndex = s;
    int index1 = 0;
    int index2 = 0;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrIndex++] = first[index1++];
        }
        else {
            arr[mainArrIndex++] = second[index2++];
        }
    }

    while(index1<len1){
        arr[mainArrIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrIndex++] = second[index2++];
    }

}

void Devide(int* arr,int s ,int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    // left wala part
    Devide(arr,s,mid);
    // right Wala part
    Devide(arr,mid+1,e);

    marge(arr,s,e);
}

int main(){
    int arr[6] = {1,9,3,2,5,6};
    int n = 6;
    Devide(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
