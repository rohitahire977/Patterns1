#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;

    //upper triangle.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    //downward triangle
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n-i;k++){
            cout<<"*";
        }
        cout<<endl;
    }

}