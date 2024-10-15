
#include<iostream>
using namespace std;
int calculator(int)
{ 
    int y_born,current_year=2023,age;
    age=current_year-y_born;
}
int main()
{
  int y_born;
  cout<<"enter your date of birth"<<endl;
  cin>>y_born;    
  cout<<"your age is :",calculator(y_born);
}
//function prototype (called as function calling in c)
//is used to declare the the function in case we wnat to write the function after mian function;
// int sum(int a,int b)
// {
//     //here a,b are formal parameters
//      int c=a+b; 
//      return c;
// }
// int main(){
//     int num1,num2;
//     //here num2 and num1 are actual parameters
//     cout<<"enter value for first element"<<endl;
//     cin>>num1;
//     cout<<"enter value for second element"<<endl;
//     cin>>num2;
//     cout<<"value of addtion is:"<<sum(num1,num2);
//     return 0;
// }

