#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        // int count=i;
        for(int j=1;j<=i;j++){
            cout<<i+j-1<<" ";
            // count++;
        }         
        cout<<endl;
    }
    return 0;
}