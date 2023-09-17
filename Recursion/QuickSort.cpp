#include<iostream>
using namespace std;
int patition(int *arr,int s ,int e){
    int pivat = arr[s];

    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivat){
            cnt++;
        }
    }
    int pivatIndex = s+cnt;
    swap(arr[pivatIndex],arr[s]);

    int i = s;
    int j = e;

    while(i <pivatIndex &&  j > pivatIndex){
        while(arr[i] <= pivat){
            i++;
        }
        while(arr[j] > pivat){
            j--;
        }
        if(i <pivatIndex &&  j > pivatIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivatIndex;




}
void QuickSort(int *arr ,int s, int e){
    if( s >= e){
        return;
    }
    // patition array
    int p = patition(arr,s,e);
    cout<<p<<"pivat element"<<endl;
    cout<<endl;

    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);

}

int main(){
    int arr[] = {3,1,4,5,2,2,1,5,6,9};
    int n = 10;
    QuickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
