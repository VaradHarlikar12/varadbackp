#include<iostream>
#include<cstring>
using namespace std;
template<class t1>
int swapping(t1 a,t1 b){
    t1 temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a:"<<a<<endl;
    cout<<"value of b:"<<b<<endl;
}
void swapchar(char str1[],char str2[]){
   char temp[30];
   cout<<"STRING 1 BEFORE SWAPPING"<<str1<<endl;
   cout<<"STRING 1 BEFORE SWAPPING"<<2<<endl;
   
   strcpy(temp,str1);
   strcpy(str1,str2);
   strcpy(str2,temp);
   
   cout<<"STRING 1 AFTER SWAPPING:"<<str1<<endl;
   cout<<"STRING 2 AFTER SWAPPING:"<<str2<<endl;
}
int main(){
    swapping(10,20);
    char ST1[30]="VARAD";
    char ST2[30]="HARLIKAR";
    swapchar(ST1,ST2);
    return 0;
}