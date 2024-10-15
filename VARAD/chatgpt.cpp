#include <iostream>
#include <regex>  // Include regex library for regex functionality
using namespace std;

class customer {
protected:
    string usegmail;
    regex phone_no;  // Declare regex for phone number pattern
    string phone_number;
public:
    char name[30];
    
    // Constructor to initialize phone number regex
    customer() : phone_no(R"(\d{9})") {}

    // Method to validate email
    bool validid(string input) {
        usegmail = input;
        regex email_pattern(R"(^[\w\.-]+@([\w-]+\.)+[\w-]{2,4}$)");
        return regex_match(usegmail, email_pattern);
    }

    // Method to get customer details
    void Customer_details() {
        cout << "ENTER YOUR NAME: ";
        cin >> name;
        cout << "Enter a 9-digit phone number: ";
        cin >> phone_number;

        // Check if the phone number matches the pattern
        if (regex_match(phone_number, phone_no)) {
            cout << "Valid phone number: " << phone_number << endl;
        } else {
            cout << "Invalid phone number." << endl;
        }
    }

    // Method to display customer details
    void display() {
        cout << "NAME OF CUSTOMER: " << name << endl;
        cout << "PHONE NUMBER OF CUSTOMER: " << phone_number << endl;
        cout << "GMAIL ID OF CUSTOMER: " << usegmail << endl;
    }
};

// Subclass for customer problems
class customer_problem : public customer {
public:
    int pro;  // Variable to store the problem choice

    // Constructor to handle customer problem
    customer_problem() {
        cout << "ENTER 1 FOR PANEL DAMAGE:" << endl;
        cout << "ENTER 2 FOR BURN-IN: PERMANENT MARKS ON SCREEN" << endl;
        cout << "ENTER 3 FOR BACKLIGHT ISSUE: UNEVEN BRIGHTNESS OR DARK SPOTS" << endl;
        cout << "ENTER 4 FOR COLOR DISTORTION: INCORRECT COLORS OR LOSS OF ACCURACY" << endl;
        cout << "ENTER 5 FOR DEAD PIXELS" << endl;
        cout << "ENTER 6 FOR AUDIO ISSUES: PROBLEM WITH SPEAKER OR SOUND" << endl;
        cout << "ENTER 7 FOR CONNECTIVITY PROBLEM: ISSUES WITH HDMI PORTS OR OTHER CONNECTIONS" << endl;
        cout << "ENTER 8 FOR POWER ISSUES: TV FAILING TO TURN ON" << endl;
        cout << "ENTER YOUR CHOICE: ";
        cin >> pro;

        // Handle the user's problem choice
        switch (pro) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                cout << "YOUR CALL IS REGISTERED. PLEASE CONTACT CUSTOMER CARE FOR FURTHER PROCESS." << endl;
                break;
            default:
                cout << "Invalid choice. Please contact customer care." << endl;
        }
    }
};

int main() {
    customer_problem c1;

    // Getting and validating Gmail details
    string email;
    cout << "ENTER YOUR GMAIL DETAILS: ";
    cin >> email;

    if (c1.validid(email)) {
        cout << "Valid email address." << endl;
    } else {
        cout << "Invalid email address." << endl;
    }

    // Get customer details and display them
    c1.Customer_details();
    c1.display();

    return 0;
}
