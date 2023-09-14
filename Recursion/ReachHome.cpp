#include<iostream>
using namespace std;
void reachHome(int n , int s){
    if(s == n){
        cout<<"I reached home"<<endl;
        return;
    }
    cout<<n-s<<" Km left"<<endl;
    reachHome(n , s+1);
    
}
int main() {
    int dest = 10;
    int start = 0;
    reachHome(dest , start);

}
