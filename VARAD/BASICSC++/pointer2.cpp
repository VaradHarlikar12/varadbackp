#include<iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
    void setData(int a,int b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"CODE OF THIS ITEM IS:"<<id<<endl;
        cout<<"PRICE OF THIS ITEM IS:"<<price<<endl;
    }
};

int main(){
    int size=10;
    Shop s1,*ptr= new Shop[size];
    ptr    
    return 0;
}