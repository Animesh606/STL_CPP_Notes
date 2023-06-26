#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;                                // -> {}
    // Adding eliments in set                   // complexity O(log n)
    st.insert(4);                               // -> {4}
    st.emplace(2);                              // -> {2, 4}
    st.insert(4);                               // -> {2, 4}

    // Erase eliment by index
    st.erase(st.begin());                       // -> {4}
    // Erase a subset of set by index
    st = {5, 3, 4, 6, 8};                       // -> {3, 4, 5, 6, 8}
    st.erase(st.begin(), st.end());             // -> {}
    // clearing whole set
    st.clear();                                 // -> {}
    // erase eliment by value
    st = {1, 2, 3, 8, 4};                       // -> {1, 2, 3, 4, 8}
    st.erase(3);                                // -> {1, 2, 4, 8}
    
    // Finding a element
    auto it = st.find(2);                       // it -> st.begin() + 1
    it = st.find(9);                            // it -> st.end()

    // size of set
    cout << st.size() << endl;                  // -> 4

    // Unordered Set
    unordered_set<int> ust;                     // avarage time complexity O(1) & worst time complexity O(n)
    ust.insert(5);                              // -> {5}
    ust.emplace(2);                             // -> {2, 5}
    ust.insert(6);                              // -> {6, 2, 5}
    ust.insert(2);                              // -> {6, 2, 5}
    ust.insert(8);                              // -> {8, 6, 2, 5}
    ust.insert(1);                              // -> {1, 8, 6, 2, 5}

    // Multiset
    multiset<int> mst;                          // -> {}
    mst.insert(2);                              // -> {2}
    mst.insert(1);                              // -> {1, 2}
    mst.insert(2);                              // -> {1, 2, 2}
    mst.insert(3);                              // -> {1, 2, 2, 3}
    mst.insert(1);                              // -> {1, 1, 2, 2, 3}

    //Counting the occurance
    cout << mst.count(2) << endl;

    // printing set
    for(auto it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
    for(auto it : ust)
        cout << it << " ";
    
    return 0;
}