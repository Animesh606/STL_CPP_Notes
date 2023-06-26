#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {2, 3, 3, 4, 5, 5, 5, 6, 6, 8, 8, 10};
    int x = 5, ind;

    // Finding the first occurance of a number in sorted list
    ind = lower_bound(vec.begin(), vec.end(), x) - vec.begin();
    if(ind != vec.size() && vec[ind] == x)
        cout << "first occurance " << ind << endl;
    else
        cout << "Does not exists" << endl;
    
    // Finding the last occurance of a number in a sorted list
    ind = upper_bound(vec.begin(), vec.end(), x) - vec.begin() - 1;
    if(ind >= 0 && vec[ind] == x)
        cout << "last occurance " << ind << endl;
    else
        cout << "Does not exists" << endl;

    // frequency of a number in a sorted list
    ind = upper_bound(vec.begin(), vec.end(), x) - lower_bound(vec.begin(), vec.end(), x);
    cout << "Frequency " << ind << endl;

    // Next permutation
    // <--Implemaentation-->
    // void nextPermutation(vector<int>& arr) {
    //     int i,j;int n=arr.size();
    //     for(i=n-2;i>=0;i--){
    //         if(arr[i]<arr[i+1]){
    //             break;
    //         }
    //     }
    //     //noted i ka value
    //     if(i<0)
    //         reverse(arr.begin(),arr.end());
    //     else{
    //         for(j=n-1;j>i;j--){
    //             if(arr[j]>arr[i]){
    //                 break;
    //             }
    //         }
    //         swap(arr[i],arr[j]);
    //         reverse(arr.begin()+i+1,arr.end());
    //     }
    // }
    string s;
    cin >> s;
    bool res = next_permutation(s.begin(), s.end());
    if(res)
        cout << "Next permutation : " << s << endl;
    else
        cout << "Next permutation does not exist" << endl;

    // Prev permutation
    res = prev_permutation(s.begin(), s.end());
    if(res)
        cout << "Prev permutation : " << s << endl;
    else
        cout << "Prev permutation does not exist" << endl;
    

    return 0;
}