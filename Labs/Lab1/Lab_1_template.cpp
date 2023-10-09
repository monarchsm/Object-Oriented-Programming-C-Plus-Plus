/***
 * CSE 2010 Fall 2023
 * Lab #{1}
 * {Lizbeth Jimenez} {007670332}
 * {18 September 2023}
 * 
 * {Sets the students up for the basics and what is to be expected of you. It teaches you 
 * how to compile and execute C++ programs, use input output commands (I/O), use control flow, 
 * and practice how to properly document your code.}
 * 
 * {Describe 1) One challenging part was setting up C++, I was struggling to compile code and 
 * properly set up. My plan is to study the code thoroughly and learn how to format correctly (hectic
 * week). Another challenge is the code and expectations itself, I carefully watched the first few 
 * recordings and googled what I need more help in expect I know I have to do more and plan to. 
 * 
***/

#include <iostream>
#include <cmath>

using namespace std;

// main() takes in no arguments and performs the arithmetic operations based on user selection
// returns 0 when the program terminates without errors. 
// otherwise it returns the number where an invalid selection was made
int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";

    // instantiate your variables, x and y as int of value 0  
    // make modifications from int to doubles for section 5.2 here
    int x = 1;
    double y = 2.4;
    int user_selection = 0;

    cin >> user_selection;

    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
    } else {
        cout << "You selected " << user_selection << endl;
        if (user_selection == 1){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 0;
            }
            cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
    

        } else if (user_selection == 2){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "pow(" << x << "," << y << ") is " << pow(x,y) << endl;
        

        
        } else if (user_selection == 3){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "ceil(" << x << "," << y << ") is " << ceil(x/y) << endl;
        

        } else if (user_selection == 4){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "floor(" << x << "," << y << ") is " << floor(x/y) << endl;
         

       } else if (user_selection == 5){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return user_selection;
            }
            cout << "division between" << x << "," << " is " << x/y << endl;
         
        
        } else if (user_selection == 6){
            cout << "Requesting x\n";
            // the reason we created distinct x and y variables (mod_x, mod_y) 
            // is because '%' only expects int and never doubles. 
            int mod_x = 0;
            int mod_y = 0;
            cin >> mod_x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }
            cout << "Requesting y\n";
            cin >> mod_y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }  

        cout << mod_x << "/ " << mod_y  << " is " << mod_x%mod_y << endl;
        } else {
            printf("Invalid selection\n");
        }

    }
    
    return 0;
}
