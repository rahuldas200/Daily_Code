#include<iostream>
using namespace std;
int fibonacci(int n){
    // base condition
    if(n == 1 || n == 0){
        return n;
    }
    int reRes1 = fibonacci(n-1);
    int reRes2 = fibonacci(n-2);
    return reRes1 + reRes2;
  
  //Works first call ->5=5 ->4=3 ->3=2 ->2=1  ->1 = 1
  // 1 -> return 1 than go to ->2 again call reRes2 2 -> 0 its return 0
  // 2-> 1+0 = 1 and so on

}
int main(){
    int n;
    cin>>n;
    int ans = fibonacci(n);
    cout<<ans;
}
