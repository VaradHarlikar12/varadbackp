//when string=reversedstring
//'nitin'='nitin'
// #include<iostream>//using for loop
// using namespace std;
// int main(){
//     string name;
//     cout<<"enter your name:"<<endl;
//     cin>>name;
//     int i=0,j=length[name]-1;
//     for(int i<j;i++;j--)[
//        string temp = name[i];
//        name[i]=name[j];
//        name[j]=temp;
//     ]
//     return 0;
// }
//now with recursion
#include<iostream>
using namespace std;
bool checkpali(string str,int i,int j){
    if(i>j)
    return true;
    if(str[i]!=str[j])//means first index and last index is not smae then return 
        return false;
    else {
    return checkpali(str,i+1,j-1); }
}
int main(){
    string name="NITIN";
    cout<<endl;
    bool ispali=checkpali(name,0,name.length()-1);
    if(ispali){
        cout<<"ITS AN PALINDROME"<<endl;
    }
     else{
        cout<<"ITS NOT AN PALINDROME"<<endl;
     }
    return 0;
}