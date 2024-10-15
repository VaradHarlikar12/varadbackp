#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
 string cust;
 string customer_problem; 
int main(){
  ofstream vout("varadi.txt");
 cout<<"enter your name"<<endl;
 cin>>cust;
 vout<<cust+"has an complaint"<<""<<customer_problem<<endl;
 vout.close();
 ifstream vin("varado.txt");
  cout<<"enter your problem";
  cin>>customer_problem;
 vin.close();
 return 0;
 }
