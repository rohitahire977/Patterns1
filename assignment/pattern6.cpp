#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no. of rows:";
    cin>>m;
    int n;
    cout<<"enter no. of columns:";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==m || j==n || j==1 ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}