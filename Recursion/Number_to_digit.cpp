#include<iostream>
using namespace std;

void printChar(int n){
  // -> base case
    if(n == 0){
        return ;
    }
  // -> first divite n by 10
    printChar(n / 10);
  // -> after dividing when n==0 than find digit
    string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<str[n % 10]<<" ";
}
int main() {
    int n;
    cin>>n;
    printChar(n);
    cout<<endl;

}
