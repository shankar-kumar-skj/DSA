// // MAJORITY ELEMENT II - ELEMENTS OCCURING MORE THAN [N/3] TIMES

// // GIVEN AN ARRAY arr[] consisting of n integers, the task is to find all the array element whch occurs more than floor (n/3) times

// // example:-

// // INPUT : arr[]={2,2,3,1,3,2,1,1}
// // output : {1,2}

// // explaination : the frequency of 1 and 2 is 3,which is more than floor n/3 (8/3=2).

// // INPUT : arr[]={-5,3,-5}
// // output : {-5}
// // Explaination : the frequency of -5 is 2 , which is more than floor n/3(3/3=1).

// // INPUT: arr[]={3,2,2,4,1,4}
// // output: {}
// // explanation : there is no majority element.


// // Approach 1: 
// // using NESTED LOOPS - O(n^2) Time and O(1) Space

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> findMajority(vector<int> &arr){
//     int n=arr. size();
//     vector<int> res;

//     for (int i=0;i<n;i++){
//         int count=0;
//         for(int j=i;j<n;j++){
//             if(arr[j]==arr[i])
//             count+=1;
//         }
//         if(count>(n/3)){
//             if(res.size()==0||arr[i]!=res[0]){
//                 res.push_back(arr[i]);
//             }
    
// }

// if (res.size()==2){
//     if(res[0]>res[1])
//     swap(res[0],res[1]);
//     break;
// }
//     }
//     return res;
// }

// int main(){
//     vector<int> arr={2,2,3,1,3,2,1,1};
//     vector<int>res=findMajority(arr);
//     for(int ele:res)
//     cout<<ele<<" ";
//     return 0;
// }

// // USING HASH MAP or DICTIONARY - O(n) Time and O(n) Space
// // C++ program for finding out majority element in an array
// // using hash map

// #include <iostream>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// // Function to find Majority element in an array
// vector<int> findMajority(vector<int> &arr) {
//     int n = arr.size();
//     unordered_map<int, int> freq;
//     vector<int> res;

//     // find frequency of each number
//     for (int ele : arr)
//         freq[ele]++;

//     // Iterate over each key-value pair in the hash map
//     for (auto it : freq) {
//         int ele = it.first;
//         int cnt = it.second;

//         // Add the element to the result, if its frequency
//         // if greater than floor(n/3)
//         if (cnt > n / 3)
//             res.push_back(ele);
//     }

//     if (res.size() == 2 && res[0] > res[1])
//         swap(res[0], res[1]);
//     return res;
// }

// int main() {

//     vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
//     vector<int> res = findMajority(arr);
//     for (auto ele : res) {
//         cout << ele << " ";
//     }
//     return 0;
// }

//  Boyer-Moore’s Voting Algorithm - O(n) Time and O(1) Space
// Steps:

// 1. Initialize two variables ele1 = -1 and ele2 = -1, for candidates and two variables cnt1 = 0 and cnt2 = 0, for counting.
// 2. In each iteration,
// => If an element is equal to any candidate, update that candidate's count.
// => If count of a candidate reaches zero then replace that candidate with current element.
// => If neither candidate matches and both counts are non zero, decrement the counts.
// 3. After this, in second pass we check if the chosen candidates appear more than n/3 times in the array. If they do then include them in result array.

// Since any element than appears more than floor(n/3) times, will dominate over elements that appear less frequently. Whenever we encounter a different element, we decrement the count of both the candidates. This maintains at most two candidates in the array.

// C++ program for finding the majority element in an array
// using Moore’s Voting algorithm

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

// Function to find Majority element in an array
vector<int> findMajority(vector<int> &arr) {
    int n = arr.size();

    // Initialize two candidates and their counts
    int ele1 = -1, ele2 = -1, cnt1 = 0, cnt2 = 0;

    for (int ele : arr) {
      
        // Increment count for candidate 1
        if (ele1 == ele) {
            cnt1++;
        }
      
        // Increment count for candidate 2
        else if (ele2 == ele) {
            cnt2++;
        }
      
        // New candidate 1 if count is zero
        else if (cnt1 == 0) {
            ele1 = ele;
            cnt1++;
        }
      
        // New candidate 2 if count is zero
        else if (cnt2 == 0) {
            ele2 = ele;
            cnt2++;
        }
      
        // Decrease counts if neither candidate
        else {
            cnt1--;
            cnt2--;
        }
    }

    vector<int> res;
    cnt1 = 0;
    cnt2 = 0;

    // Count the occurrences of candidates
    for (int ele : arr) {
        if (ele1 == ele) cnt1++;
        if (ele2 == ele) cnt2++;
    }

    // Add to result if they are majority elements
    if (cnt1 > n / 3) res.push_back(ele1);
    if (cnt2 > n / 3 && ele1 != ele2) res.push_back(ele2);
    
    if(res.size() == 2 && res[0] > res[1])
        swap(res[0], res[1]);
    return res;
}

int main() {
  
    vector<int> arr = {2, 2, 3, 1, 3, 2, 1, 1};
    vector<int> res = findMajority(arr);
    for (int ele : res) {
        cout << ele << " ";
    }
    return 0;
}
