
#include<iostream>
using namespace std;


// int fib(int n)// F A C T O R I A LL...........L
// {
//   if()
// }
//this kinddda of recursion is tail recursion as we use recursion at end
int factorial(int n){
if(n<=1)//base case.nhi tar functon stack overflow 
{
    return 1;
} 
     return n*factorial(n-1);//recursion
}
int main(){
     int a;
     cout<<"enter value for a:"<<endl;
     cin>>a;
     cout<<"value of factorial of a is\t"<<factorial(a);
 return 0;}
// factorial(4)=4*factorial(3)
// factorial(4)=4*3*factorial(2)
// factorial(4)=4*3*2*factorial(1)
// int main(){
//     int a;
//     cout<<"enter value for fibonacci"<<endl;
//     cin>>a;
//     cout<<"The value of your value with fibonacci"<<factorial(a);
// }
