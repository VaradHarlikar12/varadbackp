#include<iostream>
using namespace std;
//do not use this in line function
int product(int a, int b){
   static int c=0;
   /* this variable can be intialized once then when below c=c=
   1 will operate it will retain value of c */
    c=c+1;
    return a*b;
}
int main(){
    int a,b;
    cout<<"enter values of a and b"<<endl;
    cin>>a>>b;   
    cout<<"the product of a and are:"<<product(a,b); 
    return 0;
}