//mistakes i did where that i did check the scope properly and kept on repating making mistake of calling phon_no 
//where it should be phone|_number in display .this cause a lot errors
//also swithc should had declated pro as char whee switch takes only int 
#include<iostream>
#include <regex>  
using namespace std;
class customer{
    protected:
    string usegmail;
    regex phone_no;
    string phone_number;
    public:
    char name[30];
// Constructor to initialize phone number regex
    customer() : phone_no(R"(\d{9})") {}
    
//method for valid email    
    bool validid( string input){
        usegmail=input;
        regex email_pattern(R"(^[\w-\.]+@([\w-]+\.)+[\w-]{2,4}$)");//varadharilkar@gmail.com  
        return regex_match(usegmail,email_pattern);
    }

    //metod to get customer details
    void Customer_details(){
        cout<<"ENTER YOUR NAME:"<<endl;
        cin>>name;
        cout << "Enter a 9-digit phone number: ";
        cin >> phone_number;
        // Check if the phone number matches the pattern
    if (regex_match(phone_number, phone_no)) {//checking patterns and number given
        cout << "Valid phone number:"<< phone_number <<endl;
         } 
    else {
        cout << "Invalid phone number." <<endl; 
         }
    }
//displaying customer details
   void display(){
    cout<<"NAME OF CUSTOMER:"<<name<<endl;
    cout<<"PHONE NUMBER OF CUSTOMER IS :"<<phone_number<<endl;
    cout<<"GMAIL ID OF CUSTOMER:"<<usegmail<<endl;
    }
};
class customer_problem: public customer {
    public:
    int pro;
    char other_problem;
    public:
    customer_problem(){
       cout<<"ENTER 1 FOR  PANEL DAMAGE:"<<endl;
       cout<<"ENTER 2 FOR  BURN-IN:"<<" PERMANENT MARKS ON SCREEN"<<endl;
       cout<<"ENTER 3 FOR  BACKLIGHT ISSUE :"<<" UNEVEN BRIGHTNESS OR DARK SPOTS ON SCREEN"<<endl;
       cout<<"ENTER 4 FOR  COLOR DISTORTION:"<<" INCORRECTCOLORS OR LOSS OF ACCURACY"<<endl;
       cout<<"ENTER 5 FOR  DEAD PIXELS:"<<" INCORRECTCOLORS OR LOSS OF ACCURACY"<<endl;
       cout<<"ENTER 6 FOR  AUDIO ISSUES:"<<"PROBLEM WITH SPEAKER OR SOUND"<<endl;
       cout<<"ENTER 7 FOR  CONNECTIVITY PROBLEM :"<<"ISSUES WITH HDMI PORTS OR OHTER CONNECTIONS"<<endl;
       cout<<"ENTER 8 FOR  POWER ISSUES:"<<"TV FAILING TO TURN ON"<<endl;
       cout<<"ENTER ANY OTHER ISSUE"<<endl;
       cin>>other_problem;
        switch (pro)
      {
    case 1:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
    case 2:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
    case 3:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
    case 4:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break; 
    case 5:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
    case 6:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;  
    case 7:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;  
    case 8:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
    default:
        cout<<"YOUR CALL IS REGISTERED PLEASE CONTACT TO CUSTOMER CARE FOR FURTHER PROCESS:"<<endl;
        break;
      }
   }    
};
int main(){
     customer_problem c1;

    string email_input;
    cout << "ENTER YOUR GMAIL DETAILS: ";
    cin >> email_input;

    if (c1.validid(email_input)) {
        cout << "Valid email." << endl;
    } else {
        cout << "Invalid email." << endl;
    }

    c1.Customer_details();
    c1.display();
}