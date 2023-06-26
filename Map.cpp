#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialisation of map
    map<string, int> mpp;

    // insertion of keys
    mpp["Animesh"] = 18;
    mpp["Akash"] = 61;
    mpp["Vivek"] = 33;
    mpp.emplace("Sayan", 23);

    // Deleting elements
    // By iterator
    mpp.erase(mpp.begin());
    // By key
    mpp.erase("Vivek");
    // whole map
    mpp.clear();

    // Finding an element
    auto it = mpp.find("Animesh");

    // Checking map is empty
    bool check = mpp.empty();                               // -> check = 0/1

    // Printing Map
    for(auto it : mpp)
        cout << it.first << " " << it.second << endl;       // -> key value
    for (auto it = mpp.begin(); it != mpp.end(); it++)
        cout << it->first << " " << it->second << endl;     // -> key value
    
    // Unordered Map
    unordered_map<int, int> umpp;                           // Avg TC O(1), worst TC O(n)
    
    // Multimap
    multimap<int, int> mmpp;
    
    return 0;
}