#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float ans=0,i=0;
    while(n!=0){
        float bit=n & 1;
        ans=(bit *pow(10,i)) + ans;
        i++;
        n=n >> 1;
    }
    cout<<"answer : "<<ans;
    return 0;
}