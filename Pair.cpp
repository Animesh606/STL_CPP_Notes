#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialisation of pair
    pair<int, int> pr = {2, 4};

    // Printing pair
    cout << pr.first << " " << pr.second << endl;

    // Nested pair
    pair<pair<int, int>, pair<pair<char, int>, string>> npr = {{2, 3}, {{'a', 5}, "pair"}};

    // printing one by one
    cout << npr.first.first << endl;            // -> 2
    cout << npr.first.second << endl;           // -> 3
    cout << npr.second.first.first << endl;     // -> a
    cout << npr.second.first.second << endl;    // -> 5
    cout << npr.second.second << endl;          // -> pair

    
    return 0;
}