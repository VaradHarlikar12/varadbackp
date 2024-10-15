// int main(){
 //c++ was called c with classes by strouSstoup
 //classes are ecxtensions of structures
 //structures have there own limitations as public access specifier default and permanent 
 //classes    
 //classes can have emthods and properties
 //classes can provide diffrent access permissions like protected nad private with public
 //structures are typedefed in c++
    // return 0;
// }
/*
classes can declare objects along classes 
ex class emp{
 body
 }varad,yash,ayush;
*/
#include<iostream>
#include<string>
using namespace std;    
class binary
{
    private:    
    string s;
    public:
    void read(void);
    void checkbina(void); 
    void one_compli(void);
    void display(void);
};
void binary::read(void){
    cout<<"enter an binary number:"<<endl;
    cin>>s; 
}
void binary::checkbina(void)
{
    for(int i=0;i>s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        cout<<"incorrect format for binary"<<endl;
        exit(0);
    }
}
void binary::one_compli(void){
    checkbina();
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
      {
        s[i]='0';
      }
       {
        if(s[i]=='0')
      {
        s[i]='1';
      }      
       }        
       }        
    }

void binary::display(void)
{
    cout<<"ones complimenes of your number is:"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.[i]<<endl;
    }
}
int main(
    binary b;
    b.read(void);
    b.display();
   // b.checkbina();
    b.one_compli();
    b.dispay();

)