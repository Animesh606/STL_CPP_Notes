#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;                                        // -> {}
    cout << arr.size() << endl;                             // -> print 0

    // Adding eliments to vector
    arr.push_back(2);                                       // -> {2}
    // push_back and emplace_back are equivalent but emplace_back takes a slight lesser time than push_back
    arr.emplace_back(6);                                    // -> {2, 6}
    cout << arr.size() << endl;                             // -> print 2

    // Deleting eliments from vector
    arr.pop_back();                                         // -> {2}
    cout << arr.size() << endl;                             // -> print 1

    //Copying one vector on another
    vector<int> vec(4, 10);                                 // -> {10, 10, 10, 10}
    vector<int> vec2(vec.begin(), vec.end());               // -> [)
    vector<int> vec3(vec);

    // Clear the whole vector at once
    vec.clear();                                            // -> {}

    // Copying any part of an vector to another vector
    vector<int> vvv = {4, 6, 3, 7, 2};
    vector<int> vvv2(vvv.begin(), vvv.begin() + 3);         // -> {4, 6, 3}


    // 2d vectors
    vector<int> aaa1 = {4, 6, 8};
    vector<int> aaa2 = {1, 9, 0, 5};
    vector<int> aaa3 = {5, 10};

    vector<vector<int>> aaa;                                // -> {{}}
    aaa.push_back(aaa1);                                    // -> {{4, 6, 8}}
    aaa.push_back(aaa2);                                    // -> {{4, 6, 8}, {1, 9, 0, 5}}
    aaa.push_back(aaa3);                                    // -> {{4, 6, 8}, {1, 9, 0, 5}, {5, 10}}

    // Printing 2d vector eliments
    for(auto i : aaa){
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }

    // Defining a 2d vector
    vector<vector<int>> bbb(10, vector<int> (20, 2));       // Initialise a (10x20) 2d vector with defining a value 2 to all

    // Printing in another way
    for (int i = 0; i < bbb.size(); i++){
        for (int j = 0; j < bbb[i].size(); j++)
            cout << bbb[i][j] << " ";
        cout << endl;
    }
    
    // Array of vectors
    vector<int> ala[3];                                     // -> {{}, {}, {}}
    ala[0].push_back(6);                                    // -> {{6}, {}, {}}
    ala[0].push_back(45);                                   // -> {{6, 45}, {}, {}}
    ala[2].push_back(22);                                   // -> {{6, 45}, {}, {22}}
    

    // 3d vectors
    vector<vector<vector<int>>> vaac(10, vector<vector<int>> (5, vector<int> (4, 5))); // Initialise a (10 X 5 X 4) vector with assingning all eliments as 5

    // Algorithms
    // Sorting in a subset
    sort(vvv.begin(), vvv.end());                           // sort(start_pointer, end_pointer)
    // Reverse in a subset
    reverse(vvv.begin(), vvv.end());                        // reverse(start_pointer, end_pointer)
    // Finding max and min element index in a subset
    auto maxindex = max_element(vvv.begin(), vvv.end());    // max_element(start_pointer, end_pointer)
    auto minindex = min_element(vvv.begin(), vvv.end());    // min_element(start_pointer, end_pointer)
    // Finding max and min element in a subset
    int maximum = *max_element(vvv.begin(), vvv.end());     // *max_element(start_pointer, end_pointer)
    int minimum = *min_element(vvv.begin(), vvv.end());     // *min_element(start_pointer, end_pointer)
    // sum of elements in a subset
    int sum = accumulate(vvv.begin(), vvv.end(), 0);        // accumulate(start_pointer, end_pointer, initial sum)
    // frequency of a number in a range
    int cnt = count(vvv.begin(), vvv.end(), 2);             // count(start_pointer, end_pointer, value)
    // finding the first occurance of any number in a range
    auto it = find(vvv.begin(), vvv.end(), 2);              // find(start_pointer, end_pointer, value)
    // binary search in a range
    bool res = binary_search(vvv.begin(), vvv.end(), 2);    // binary_search(start_pointer, end_pointer, value)
    // lower bound of a range in sorted vector
    auto it = lower_bound(vvv.begin(), vvv.end(), 10);      // returns the iterator of element not lesser than 10
    // upper bound of a range in sorted vector
    auto it = upper_bound(vvv.begin(), vvv.end(), 10);      // returns the iterator of element just greater than 10
    
    return 0;
}