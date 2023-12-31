/***
CSE 2010 Fall 2023
Lab #7
Lizbeth Jimenez #007670332
8 December 2023
*
Learn genetic programming via templates. They'll expand into different classes to have members that can 
hold and process through various data types. 
*
Copying and pasting the header because it wasnt highlighting correctly.Eventually got it to 
highlight correctly and paste the header. 
***/

#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    int test_arr[CAPACITY];

    //initialize ArrayVec and DisplayArr
    DisplayArr disp = DisplayArr();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
