#include<iostream>
using namespace std;
class varad{
    public:
   string EGO;
   string yes;
    public:
    varad(){
        if(yes){
        cout<<"EGO HURT";
        }
    }
    bool hurt(){
        cout<<"are u weak";
        cout<<"if yes then"<<endl;
        cin>>yes;
    }
};

int main(){
    varad v;
    v.hurt();
    return 0;
}