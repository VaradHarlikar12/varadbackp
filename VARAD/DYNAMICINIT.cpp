#include<iostream>
using namespace std;
class BankDeposit{
    public:
    int principal;
    int years;
    float Interest_rate;
    float returnValue;
    public:
    BankDeposit(int p,int y,float r);
    BankDeposit(int p,int y,int r);
    BankDeposit();
   void show();
};
    void BankDeposit :: BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    Interest_rate=float(r)/100;
    returnValue=principal;  
    for(int i=0;i<y;i++){
        returnValue*=(1+r);
    } 
   }

     void BankDeposit :: show(){
    cout<<endl<<"Principal amount was"<<principal
    <<",Return value after"<<years<<"is"<<returnValue<<endl;
    }

int main(){
    //BankDeposit bd1,bd2,bd3;
    int p,y,R;
    float r;
    cout<<"Enter the value  of p,y and r"<<endl;
    cin>>p>>y>>r;
     BankDeposit bd1=BankDeposit(p,y,r);
    bd1.show();
    cout<<"Enter the value  of p,y and R"<<endl;
    cin>>p>>y>>R;
    BankDeposit bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}