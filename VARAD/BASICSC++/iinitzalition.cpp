#include<iostream>
using namespace std;
/*

*/
class Test{
    int b;
    int a;
    public:
    //Test(int i,int j):a(i),b(j){
    //Test(int i,int j):a(i),b(j+2)
    //Test(int i,int j):a(i),b(j*2)
    //Test(int i,int j):a(i),b(a+j)
    //Test(int i,int j):a(i),b(a+j)
    //Test(int i,int j):b(j),a(i+b)this will show garbage value because we took b first but it is 
    //intizalied second in above so to avois this we will just
        Test(int i,int j):b(j),a(i+b){
        cout<<"CONSTRUCTOR EXECUTED"<<endl;
        cout<<"VALUE OF A"<<a<<endl;
        cout<<"VALUE OF B"<<b<<endl;
     }
};
int main(){
    Test (10,3);
    return 0;
}