#include<iostream>
using namespace std;
int main(){

    int n , m;
    cin>>n;
    cin>>m;

    //creating 2D array
    int ** arr = new int* [n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    // taking input

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // printing the array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //heap memory free 

    for(int i=0;i<n;i++){
        delete[] arr[i];
    }

    delete []arr;

}
