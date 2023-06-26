#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialising stack
    stack<int> st;                          // last in first out (lifo) data structure

    // pushing elements
    st.push(4);                             // {4}
    st.push(2);                             // {4, 2}
    st.emplace(6);                          // {4, 2, 6}

    // The accessible eliment or the top element
    if(!st.empty())                         // if stack is empty st.top() throws an error
        cout << st.top() << endl;           // -> 6

    // Deleting elements
    st.pop();                               // {4, 2}

    // Deleting entire stack
    while(!st.empty())                      // while stack is not empty
        st.pop();
    
    // Size of stack
    cout << st.size() << endl;              // -> 0
    return 0;
}