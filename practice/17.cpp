#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        for(space;space>0;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}