//  An extern variable is nothing but a global variable 
//initialized with a legal value where it is declared in order to be used elsewhere.
// C++ Program to illustrate the extern storage class
// #include <iostream>
// using namespace std;

// // declaring the variable which is to
// // be made extern an initial value can
// // also be initialized to x
// int x;
// void externStorageClass()
// {

//     cout << "Demonstrating extern class\n";

//     // telling the compiler that the variable
//     // x is an extern variable and has been
//     // defined elsewhere (above the main
//     // function)
//     extern int x;

//     // printing the extern variables 'x'
//     cout << "Value of the variable 'x'"
//          << "declared, as extern: " << x << "\n";

//     // value of extern variable x modified
//     x = 2;

//     // printing the modified values of
//     // extern variables 'x'
//     cout << "Modified value of the variable 'x'"
//          << " declared as extern: \n"
//          << x;
// }

// int main()
// {

//     // To demonstrate extern Storage Class
//     externStorageClass();

//     return 0;
// }


//We can say that they are initialized only once and exist until the termination of the program. Thus, no new memory is allocated because they are not re-declared.
// Global static variables can be accessed anywhere in the program.
// C++ program to illustrate the static storage class
// objects
// #include <iostream>
// using namespace std;

// // Function containing static variables
// // memory is retained during execution
// int staticFun()
// {
//     cout << "For static variables: ";
//     static int count = 0;
//     count++;
//     return count;
// }

// // Function containing non-static variables
// // memory is destroyed
// int nonStaticFun()
// {
//     cout << "For Non-Static variables: ";

//     int count = 0;
//     count++;
//     return count;
// }

// int main()
// {

//     // Calling the static parts
//     cout << staticFun() << "\n";
//     cout << staticFun() << "\n";
    

//     // Calling the non-static parts

//     cout << nonStaticFun() << "\n";
    
//     cout << nonStaticFun() << "\n";
    
//     return 0;
// }


//The register storage class declares register variables using the ‘register’ keyword which has the same functionality as that of the auto variables.
// The only difference is that the compiler tries to store these variables in the register of the microprocessor if a free register is available.
// This makes the use of register variables to be much faster than that of the variables stored in the memory during the runtime of the program. 
//If a free register is not available, these are then stored in the memory only. ( CPU's registers instead of the system's regular memory (RAM). 
//This is done to make the variable access faster
//, since accessing a register is much quicker than accessing memory.)
// C++ Program to illustrate the use of register variables
// #include <iostream>
// using namespace std;

// void registerStorageClass()
// {

//     cout << "Demonstrating register class\n";

//     // declaring a register variable
//     register char b = 'G';

//     // printing the register variable 'b'
//     cout << "Value of the variable 'b'"
//          << " declared as register: " << b;
// }
// int main()
// {

//     // To demonstrate register Storage Class
//     registerStorageClass();
//     return 0;
// }


//The keyword mutable is mainly used to allow a particular data member of a const object to be modified. 
// C++ program to illustrate the use of mutalbe storage
// class specifiers
// #include <iostream>
// using std::cout;

// class Test {
// public:
//     int x;

//     // defining mutable variable y
//     // now this can be modified
//     mutable int y;

//     Test()
//     {
//         x = 4;
//         y = 10;
//     }
// };

// int main()
// {
//     // t1 is set to constant
//     const Test t1;

//     // trying to change the value
//     t1.y = 20;
//     cout << t1.y;

//     // Uncommenting below lines
//     // will throw error
//     // t1.x = 8;
//     // cout << t1.x;
//     return 0;
// }


// C++ program to use thread_local storage specifier
// #include <iostream>
// #include <mutex>
// #include <thread>

// using namespace std;

// // Defining thread-local variable
// thread_local int value = 10;
// // Mutex for synchronization
// mutex mtx;

// int main()
// {
//     // Created 3 threads
//     // Modify value in thread 1
//     thread th1([]() {
//         value += 18;
//         lock_guard<mutex> lock(mtx);
//         cout << "Thread 1 value: " << value << '\n';
//     });

//     thread th2([]() {
//         // Modify value in thread 2
//         value += 7;
//         lock_guard<mutex> lock(mtx);
//         cout << "Thread 2 value: " << value << '\n';
//     });

//     thread th3([]() {
//         // Modify value in thread 3
//         value += 13;
//         lock_guard<mutex> lock(mtx);
//         cout << "Thread 3 value: " << value << '\n';
//     });

//     // Wait for all threads to finish
//     th1.join();
//     th2.join();
//     th3.join();

//     // Print the value of value in the main thread
//     cout << "Main thread value: " << value << '\n';

//     return 0;
// }
