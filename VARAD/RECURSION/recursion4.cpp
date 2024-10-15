//taking reference variable as the string operation will operate 
//on copy string and we are printing the original string ,so to avoid there are two methods
//1)taking '&str' reference variable 
//2)returning string as answer
//STRING REVERSING
#include<iostream>
using namespace std;
reverse(string &str,int i,int j){
    //base case
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;=
    j--;
    //recursive call
    reverse(str,i,j);
}
int main(){
    string name='varad';
    cout<<endl;
    reverse(name;0;length[name]-1);
    cout<<endl;
    return 0;
}