#include <bits/stdc++.h>
using namespace std;

int main() {
    // initialise queue
    queue<int> q;                   // first in first out (fifo) data stucture

    // pushing elements 
    q.push(4);                      // {4}
    q.push(2);                      // {4, 2}
    q.emplace(6);                   // {4, 2, 6}

    // front element
    cout << q.front() << endl;      // -> 4

    // back element
    cout << q.back() << endl;       // -> 6

    // deleting element
    q.pop();                        // {2, 6}

    // deleting entire queue
    while(!q.empty())
        q.pop();

    
    // Priority Queue
    priority_queue<int> pq;         // stores in descending order

    // inserting elements 
    pq.push(5);                     // {5}
    pq.push(1);                     // {5, 1}
    pq.emplace(3);                  // {5, 3, 1}
    pq.push(6);                     // {6, 5, 3, 1}

    // storing ascending order using negative
    // pq.push((-1)*element);
    // cout << (-1) * pq.top();

    // storing ascending order with comparator
    priority_queue<int, vector<int>, greater<int>> apq;
    apq.push(5);                     // {5}
    apq.push(1);                     // {1, 5}
    apq.emplace(3);                  // {1, 3, 5}
    apq.push(6);                     // {1, 3, 5, 6}


    // Deque double sided queue
    deque<int> dq;
    // here we can do the followings:
    dq.push_front(4);
    dq.push_back(7);
    dq.pop_front();
    dq.pop_back();
    dq.begin(), dq.end(), dq.rbegin(), dq.rend();
    dq.size();
    dq.clear();
    dq.empty();
    dq.at(1);


    // List
    list<int> ls;
    // here we can do the followings:
    ls.push_front(4);
    ls.push_back(7);
    ls.pop_front();
    ls.pop_back();
    ls.begin(), ls.end(), ls.rbegin(), ls.rend();
    ls.size();
    ls.clear();
    ls.empty();
    ls.erase(ls.begin());
    ls.reverse();
    ls.remove(2);                                       // remove all the elements which equal to 2 with a TC O(1)
    return 0;
}