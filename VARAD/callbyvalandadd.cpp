#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    cout<<c;
    return 0;
}
 //this will not swap a and b as it calling by value 
 //value can't be changed so..... 
 //once fun is called .formal will copy values and then the relation between formal and actual parameter
 //will end .so change will be made in values of a,b
 // but value pf actual x,y will be same
 //but when we call fun with address values then it will copy 
//imagine i give u an song by bluetooth 
//and u make changes in the like u add ur shit in it t
 int swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
    return a,b;
}
//call by reference 
//when we call by reference we call it with its address so 
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    cout<<c;
    return 0;
}
 //this will not swap a and b as it calling by value 
 //value can't be changed so..... 
 //once fun is called .formal will copy values and then the relation between formal and actual parameter
 //will end .so change will be made in values of a,b
 // but value pf actual x,y will be same
 //but when we call fun with address values then it will copy 

 int swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
    return a,b;
}
//call by reference 
//when we call by reference we call it with its address so 
int swappointer(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
//refernce variablr
int swapreference(int &a,int &b)//dircetly pointing toward the address 
{
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){
    int x=3,y=4;
    //this wil not swap but only pass values
    // swap(x,y);
    // this will swap values as actual address is given
    // swappointer(&x,&y);
    //swapreference(x,y);
   return 0;
}

