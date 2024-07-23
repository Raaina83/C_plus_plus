#include<iostream>
using namespace std;
//CONSTRUCTOR(ORDER)
class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called!"<<endl;
    }

    void getdata1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called!"<<endl;
    }
    void getdata2(){
        cout<<"The value of data2 is"<<data2<<endl;
    }
};

class Derived:public Base1,public Base2{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d): Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called!"<<endl;
    }
    void getdata3(){
        cout<<"The value of deerived1 is "<<derived1<<endl;
        cout<<"The value of deerived2 is "<<derived2<<endl;
    }
};
int main(){
    Derived raaina(1,2,3,4);
    raaina.getdata1();
    raaina.getdata2();
    raaina.getdata3();
    return 0;
}