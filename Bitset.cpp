#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialising bitset 
    bitset<5> bt;
    // taking input
    cin >> bt;                                      // ex: 10010

    // useful operations
    // all
    cout << bt.all() << endl;                       // return 1 only if all bits are set (11111) else 0
    // any
    cout << bt.any() << endl;                       // return 0 only if all bits are unset (00000) else 1
    // count
    cout << bt.count() << endl;                     // return number of setbits(1)
    // flip
    bt.flip(2);                                     // flip the 2th position (10010 -> 10110)
    bt.flip();                                      // flip entire bitset (10010 -> 01101)
    // none
    cout << bt.none() << endl;                      // returns 1 only if all bits are unset (00000) else 0
    // set
    bt.set();                                       // make all bits set (11111)
    bt.set(3);                                      // make the 3th bit set
    bt.set(3, 0);                                   // make the 3th bit 0
    // reset
    bt.reset();                                     // make all bits unset (00000)
    bt.reset(3);                                    // make the 3th bit unset
    // size
    cout << bt.size() << endl;                      // -> 5
    // test 
    cout << bt.test(2) << endl;                     // return 1 if 2th bit is set else 0
    
    return 0;
}