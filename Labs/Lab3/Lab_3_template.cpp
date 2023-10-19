/***
 * CSE 2010 Fall 2023
 * Lab #3
 * Lizbeth Jimenez #007670332
 * {16 October 2023}
 *
 * {Description of lab AKA paraphrase "abstract" section from lab}
 *
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;

    cout << "Test Age\n";
    cout << bob.getAge() << endl;
    bob.updateAge(101);
    cout << bob.getAge() << endl;

    cout << "Test Occupation\n";
    cout << bob.getOccupation() << endl;
    bob.updateOccupation("consultant");
    cout << bob.getOccupation() << endl;

    cout << "Testing lives_in_IE\n";
    cout << bob.getLivesInIE() << endl;
    bob.movedLocation();
    cout << bob.getLivesInIE() << endl;

    cout << "Testing isOlderThan\n";
    cout << bob.getName() << ';' << bob.getAge();
    unknown.updateAge(10);
    unknown.updateName("Doe");
    cout << unknown.getName() << ';' << unknown.getAge() << endl;
    cout << bob.isOlderThan(unknown) << endl;



}

