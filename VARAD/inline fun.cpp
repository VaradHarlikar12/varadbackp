/* DIFF BETWEEN STATIC AND  CONST STATIC CAN BE EXECUTED ONCE AND CONST CAN'T BE CHANGED*/
#include<iostream>
using namespace std;
//normal function call karlyavar formal parameters copy hotate execute hotate ani return hote value 
//pan inline madhe direct change karta so it is easier to
//compile time madhe run hota so space and time save karta
//mostly short code functions la inline karcha nhi tar cache meory bharte ani problem hote
//don't use while recursion,static variables 
const float pi=3.14;
inline int product(int a, int b){
    return a*b;
}
//DEFAULT AGRUMENTS LAST LA LIHICHA ANI COMPULSORY ARGUMENTS PAHILA lihicha
int money_recieved(int currentMoney,int factor=1.04){
    return currentMoney*factor;
}
int main(){
    int a,b;
    // cout<<"enter values of a and b"<<endl;
    // cin>>a>>b;   
    // cout<<"the product of a and are:"<<product(a,b); 
    int money=100000;
    // cout<<"your balanace is"<<money<<"after one year your balance will be"<<money_recieved(money)<<"after an year"<<endl;
    // cout<<"for VIP balanace is"<<money<<"after one year your balance will be"<<money_recieved(money,1.1)<<"after an year"<<endl;   
    return 0;
}