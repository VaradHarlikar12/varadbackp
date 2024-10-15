
#include<iostream>
using namespace std;
int calculator(int y_born)
{ 
    int age,current_year=2024;
    age=current_year - y_born;
    cout<<"your age is"<<":"<<endl;
    return age;
}
int main()
{
   int birth_year;
  cout<<"enter your birth year"<<endl;
  cin>>birth_year;
  cout<<calculator(birth_year);
    return 0;
}