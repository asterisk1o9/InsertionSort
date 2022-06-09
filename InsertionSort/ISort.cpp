//
//  ISort.cpp
//  InsertionSort
//
//  Created by Marvin Augustin on 6/3/22.
//

#include "ISort.hpp"

void iSort::insertionSort(vector<int> &a){
    
    int i, curValue, index;
    
    for(i = 1; i< a.size(); i++){
        curValue = a[i];
        index = i;
        while(index > 0 && a[index-1] > curValue){
            a[index] = a[index-1];
            index--;
         }
        a[index] = curValue;
    }
}

void iSort::revInsertionSort2(vector<int> &a){
    
    int i, curValue, index;
    
    for(i = 1; i< a.size(); i++){
        curValue = a[i];
        index = i;
        while(index > 0 && a[index-1] < curValue){
            a[index] = a[index-1];
            index--;
         }
        a[index] = curValue;
    }
}

//MY ORIGINAL REV INSORT
void iSort::revInsertionSort(vector<int> &a){
    
    int i, curValue, oldVal, index;
    
    for(i = 1; i< a.size(); i++){
        curValue = a[i];
        index = i;
        while(index > 0){
            if(a[index-1] > curValue){
            index++;
         }
        else
        {
            oldVal = a[index-1];
            a[index - 1] = curValue;
            a[index] = oldVal;
            index--;
        }
    }
    }
}

void iSort::linearSearch(vector<int> &a, int value){

    int index = 0;
    
    for(index = 0; index < a.size(); index++){
        if(a[index] == value){
            cout << value << " is found at index " << index << "\n";
            break;
        }
        else if(a[index] != value && index == a.size()-1){
            cout << "Value not found" << "\n";
        }
    }
}

void iSort::vecSum(vector<int> &a, vector<int> &b, vector<int> &c){
    int index = 0;
    int sum;
    
    
    for(index = 0; index < a.size(); index++){
        sum = a[index] + b[index];
        c.push_back(sum);
    }
}

void iSort::print(std::vector <int> const &x) {
    for(auto e : x){
        cout << e << " ";
    }
    cout << "\n";
}

    
