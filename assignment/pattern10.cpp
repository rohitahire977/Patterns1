#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    int a=1;
    // 1             ---
    // 21     +      --
    // 321           -
    // 4321
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
                cout<<k;
        }
        cout<<endl;
    }
}