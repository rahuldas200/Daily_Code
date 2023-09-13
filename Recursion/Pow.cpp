#include<iostream>
using namespace std;
int power(int n , int i){

    if( i == 0){
        return 1;
    }
    return n*power(n,i-1);
}
int main(){
    int n;
    int i;
    cin>>n;
    cin>>i;
    int ans = power(n,i);
    cout<<ans;

}
