/***
 * CSE 2010 Fall 2023
 * Lab #4
 * Lizbeth Jimenez #007670332
 * 30 October
 *
 * To learn the differences of arrays and vectors in detail, to how they contain elements and 
 * how to pass them into functions. And ultimately learn how to organize orangize data with data 
 * structures.
 *
 * The most challenging for me was remembering how to run my terminal. My solution is to open lab 
 * lectures and run it. 
 *
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;



int main()
{
    // initialize vec
    // vector<int> v;
    const int CAPACITY = 10;
    vector<int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayVec
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vec_size = test_vec.size();
    cout <<"Vector Elements\n";
    disp.printVector(test_vec);
   

}

