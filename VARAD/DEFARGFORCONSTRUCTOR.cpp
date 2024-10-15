#include<iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a,int b=9){
            data1=a;
            data2=b;
    }
    void printdata();
};
void Simple::printdata(){
    cout<<"The value of data is "<<data1<<"\t"<<data2<<endl;
}
int main(){
    Simple s1(2);
    s1.printdata();
    return 0;
}