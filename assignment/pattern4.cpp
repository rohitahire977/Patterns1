#include<iostream>
using namespace std;
/*
   1
   AB
   123 n=4
   ABCD
   12345 */

int main(){
    int n;
    cout<<"enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(j+64);
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
}