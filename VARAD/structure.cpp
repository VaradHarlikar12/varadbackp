#include<iostream>
using namespace std;
struct employe //using typedef can allow me to name employee as ep                                                                  //                                                                  //                                                                  //
                                                                //
{                                                               //  
    int emp_id;                                                 //
    char  fav_char;                                             //
    float salary;                                               //
};//ep                                                         //<<<<<----         


// int main(){
//     // can also use ep as nickname for employee so i can write ep harry
//     struct employe harry;
//     struct employe shubham;
//     struct employe jaydeep;
//     harry.emp_id=1;
//     harry.fav_char='c';
//     harry.salary=12000;
//     shubham.emp_id=1;
//     shubham.fav_char='c';
//     shubham.salary=12000;
//     return 0;
// }
/*union is used for better memory allocation.it wil use only of the following elements
,it will make the elements share memory storage capacity and user can select it*/
/*lets accusme i have to exchange my currence with rce,favcar,pound
i have to choose one of them to exchange*/
union money
{
    /* data */
    int rice;//4 bytes
    char favcar;//1
    float pound;//4 bytes
};
// int main(){
//     union money u1;
//     u1.rice;
//     u1.favcar;
//     u1.pound; 
//     return 0;
// 
/*enum is used to allocat.like down example */
int main(){
    enum meal{breakfast,lunch,dinner};
    return 1;
}
