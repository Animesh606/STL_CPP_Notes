#include <bits/stdc++.h>
using namespace std;

void printArray(array<int, 6> arr){
    for (auto it = arr.begin(); it != arr.end(); it++)
        cout << *it << " ";                                             //arr[i]
    cout << endl;
}
void printReverseArray(array<int, 6> arr){
    for (auto it = arr.rbegin(); it != arr.rend(); it++)
        cout << *it << " ";                                             //arr[i]
    cout << endl;
}
int main() {
    array<int, 6> arr1;                                                 // {?, ?, ?, ?, ?, ?}
    array<int, 6> arr = {0};                                            // {0, 0, 0, 0, 0, 0}
    printArray(arr);
    arr = {4};                                                          // {4, 0, 0, 0, 0, 0}
    printArray(arr);
    printReverseArray(arr);
    arr.fill(6);                                                        // {6, 6, 6, 6, 6, 6} 
    printArray(arr);

    // Algorithms
    int n;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    // Sorting of a subset
    sort(arr2, arr2 + n);                                               // sort(start_pointer, end_pointer)
    sort(arr2 + 1, arr2 + 4);
    // Reverse of a subset
    reverse(arr2, arr2 + n);                                            // reverse(start_pointer, end_pointer)
    reverse(arr2 + 2, arr2 + 5);
    // Finding max and min element index in a subset
    int* maxindex = max_element(arr2 + 1, arr2 + n);                    // max_element(starting_pointer, end_poiner)
    int* minindex = min_element(arr2 + 2, arr2 + 5);                    // min_element(starting_pointer, end_poiner)
    // Finding max and min element in a subset
    int maximum = *max_element(arr2 + 2, arr2 + 4);                     // *max_element(starting_pointer, end_poiner)
    int minimum = *min_element(arr2 + 3, arr2 + 6);                     // *min_element(starting_pointer, end_poiner)
    // Sum of elements for a subset
    int sum = accumulate(arr2 + 1, arr2 + 4, 0);                        // accumulate(start_pointer, end_pointer, initial sum)
    // frequency of a number in a range
    int cnt = count(arr2 + 1, arr2 + 6, 2);                             // count(start_pointer, end_pointer, value)
    // finding the first occurance of any number in a range
    auto it = find(arr2 + 1, arr2 + 5, 2);                              // find(start_pointer, end_pointer, value)
    // binary search in a range
    bool res = binary_search(arr2 + 1, arr2 + 6, 2);                    // binary_search(start_pointer, end_pointer, value)
    // lower bound of a range in sorted array
    auto it = lower_bound(arr2, arr2 + n, 10);                          // returns the iterator of element not lesser than 10
    // upper bound of a range in sorted array
    auto it = upper_bound(arr2, arr2 + n, 10);                          // returns the iterator of element just greater than 10
    
    return 0;
}