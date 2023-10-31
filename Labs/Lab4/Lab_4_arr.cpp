//Lab_4_arr.cpp
#include <iostream>
#include "ArrayVec.h"
#include "DisplayVec.h"
using namespace std;
int main()
{
    // initialize vec
    const int CAPACITY = 10;
    vector<int> test_vec(CAPACITY);

    //initialize ArrayVec and DisplayArr
    DisplayVec disp = DisplayVec();
    ArrayVec av = ArrayVec();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenVec(test_vec, num_elem, range);

    // display contents
    int test_vec_size = test_vec.size();
    cout << "Vector Elements\n";
    disp.printVector(test_vec);
    cout << "Array Memsize\n";
    disp.printMetaVector(test_vec);
}
