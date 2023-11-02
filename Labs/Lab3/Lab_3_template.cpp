/***
 * CSE 2010 Fall 2023
 * Lab #3
 * Lizbeth Jimenez #007670332
 * 15 November 2023
 *
 * Its about creating our class object and maniupluating it with functions, and learning to access them 
 * with functions. And ultmiately learn how to link files together. 
 *
 * Figuring out what the error was, at first I kept running the code for Lab4, when I
 * realized it, I ran the right code to compile but still had some format errors I had to find. And
 * when I did, I forgot to control S so I was a confused for a second. But overall the solution was
 * to stare at my lab and Lecture 11. 
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
    cout << bob.getName() << ':' << bob.getAge() << endl;
    unknown.updateAge(10);
    unknown.updateName("Doe");
    cout << unknown.getName() << ':' << unknown.getAge() << endl;
    cout << bob.isOlderThan(unknown) << endl;
}

