//
//  main.cpp
//  InsertionSort
//
//  Created by Marvin Augustin on 6/3/22.
//

#include <iostream>
#include "ISort.hpp"

int main(int argc, const char * argv[]) {
    
    iSort testObj;
    
    vector<int> a{3,1,6,4,5,2};
    vector<int> b{2,5,1,6,4,3};
    vector<int> c;
    
    testObj.insertionSort(a);
    testObj.print(a);
    
    testObj.revInsertionSort2(b);
    testObj.print(b);

    testObj.linearSearch(a, 7);
    
    testObj.vecSum(a, b, c);
    testObj.print(c);
   
    
    return 0;
}
