// // GIVEN AN arr[] OF SIZE n, the task is to print the lexicographically next greater permutation of the given array. If there does not exist any greater permulation, then find the lexicographically smallest permutation of the given array.
// // [1,2,4],[1,4,2],[2,1,4],[4,1,2][4,2,1]

// // Examples:-

// // INPUT: arr=[2,4,1,7,5,0]
// // OUTPUT: [2,4,5,0,1,7]
// // EXPLANATION: THE NEXT PERMUTATION OF THE GIVEN ARRAY IS 2 4 5 0 1 7

// // INPUT: arr=[3,2,1]
// // OUTPUT: [1,2,3]
// // EXPLANATION: As arr[] is the last permutation. So, the next permutation is the lowest one.

// // TABLE OF CONTENT :-

// // 1. [NAIVE APPROACH] GENERATION ALL - O(n!*n*log(n!))Time and Space
// // 2. [Expected Approach] GENERATION ONLY NEXT - O(n) Time and O(n) Space.
// // 3. Using C++ IN -BUILT FUNCTION.

// // APPROACH 1
// #include<bits/stdc++.h>
// using namespace std;

// void permutations(vector<vector<int>>& res,vector<int>& curr, int idx);
// void nextPermutations(vector <int>& arr){
//     vector<vector<int>> res;
//     permutations(res,arr,0);
//     sort(res.begin(),res.end());

//     for(int i=0;i<res.size();i++){
//         if (res[i]==arr){
//             if(i<res.size()-1)
//             arr=res[i+1];
//             if(i==res.size()-1)
//             arr=res[0];
//             break;
//         }
//     }
// }

// void permutations(vector<vector<int>>& res,vector<int>& arr,int idx){
//     if(idx==arr.size()-1){
//         res.push_back(arr);
//         return ;
//     }

//     for (int i=idx;i<arr.size();i++){
//         swap(arr[idx],arr[i]);
//         permutations(res,arr,idx+1);
//         swap(arr[idx],arr[i]);
//     }
// }

// int main(){
//     vector<int> arr={2,4,1,7,5,0};
//     nextPermutations(arr);

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// // approach 2 :-

// // C++ Program to find the next permutation by 
// // generating only next

// #include <bits/stdc++.h>
// using namespace std;

// void nextPermutation(vector<int> &arr) {
  
//     int n = arr.size(); 

//      // Find the pivot index
//     int pivot = -1; 
//     for (int i = n - 2; i >= 0; i--) {
//         if (arr[i] < arr[i + 1]) {
//             pivot = i;
//             break;
//         }
//     }

//     // If pivot point does not exist, reverse the
//     // whole array
//     if (pivot == -1) {
//         reverse(arr.begin(), arr.end());
//         return;
//     }

//     // find the element from the right that
//     // is greater than pivot
//     for (int i = n - 1; i > pivot; i--) {
//         if (arr[i] > arr[pivot]) {
//             swap(arr[i], arr[pivot]);
//             break;
//         }
//     }

//     // Reverse the elements from pivot + 1 to the 
//     // end to get the next permutation
//     reverse(arr.begin() + pivot + 1, arr.end());
// }

// int main()
// {
//     vector<int> arr = { 2, 4, 1, 7, 5, 0 };
//     nextPermutation(arr);    
//     for (int x : arr) 
//         cout << x << " ";    
//     return 0;
// }


// APPROACH 3:- 
// USING C++ IN-BUILT FUNCTION :-
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr ={2,4,1,7,5,0};
    next_permutation(arr.begin(),arr.end());
    for(int num:arr){
        cout<<num<<" ";
    }
        return 0;
}

