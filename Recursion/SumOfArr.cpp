#include<iostream>
using namespace std;
int sumOfArr(int* arr , int n){
    //base condition
    if(n == 0){
        return 0;
    }
   int sum = arr[0]+ sumOfArr(arr+1,n-1);
   return sum;
}

int main() {
    int arr[5] = {1,2,5,2,3};
    int size = 5;
    int sum = sumOfArr(arr,size); 
    cout<<"sum 0f arr is :"<<sum;

}
