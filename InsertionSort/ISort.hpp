//
//  ISort.hpp
//  InsertionSort
//
//  Created by Marvin Augustin on 6/3/22.
//

#ifndef ISort_hpp
#define ISort_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

#endif /* ISort_hpp */

class iSort{
    
public:
    void insertionSort(vector<int> &a);
    void revInsertionSort(vector<int> &a);
    void revInsertionSort2(vector<int> &a);
    void linearSearch(vector<int> &a, int v);
    void vecSum(vector<int> &a, vector<int> &b, vector<int> &c);
    void print(std::vector <int> const &x);
};
