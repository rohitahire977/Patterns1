#include<iostream>
using namespace std;
/*
  *
  **
  ***
  ****    n=======4
  ***
  **
  *    */
int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;

    //printing upper triangle
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //printing lower triangle
    for(int i=1;i<=n-1;i++){
        for(int j=3;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}