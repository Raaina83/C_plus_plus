#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        // int count=i;
        for(int j=0;j<i+1;j++){
            cout<<i-j+1<<" ";
            // count--;
        }         
        cout<<endl;
    }
    return 0;
}