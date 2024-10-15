#include<iostream>
using namespace std;
int main() {
//what is an pointer--it an variable which stores address value of another variable
int a=3;
int *b=&a;
//value of a=3 but address of a is stored in b
// & ----> Address operator
// * ----> Dereference operator
    cout<<"address of a"<<&a<<endl;//address of a using '&'
    cout<<"address of a"<<b<<endl;//address of a using reference variable 
    cout<<"value at a is"<<*b;
    //pointer to pointer
    int **c=&b;
    cout<<"address of b"<<&b<<endl;//address of a using '&'
    cout<<"address of b"<<c<<endl;
    cout<<"value of b"<<*c<<endl;
    cout<<"value of address of b which is referencing to value of a is"<<** c<<endl;
    return 0;
}