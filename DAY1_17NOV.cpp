

//shankar-kumar-skj
//@8863489Ak#

// SECOND  LARGESTEST ELEMENT IN A ARRRAY

// 1. INPUT: ARR[]=[12,32,43,22]
// OUTPUT : 32
// 2. INPUT: ARR[]=[12,3,12]
// OUTPUT : 3
// 2. INPUT: ARR[]=[12,12]
// OUTPUT : -1

// USING SORTING - O(n*log n) time and O(1)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// //function to find the second largest element
// int getSecondLargest(vector<int>&arr){
//     int n = arr.size();
//     //sort the array in non-decreasing order
//     sort (arr.begin(),arr.end());
//     //start from second last element as last element is the largest
//     for (int i =n-2;i>=0;i--){
//         //return the first element which is not equal to the largest element
//         if (arr[i]!=arr[n-1]){
//             return arr[i];
//         }
//     }
//     // if no second largest element was found, return -1
//     return -1;
//     }

// int main(){
//     vector<int>arr={12,35,1,10,34,1};
//     cout<<getSecondLargest(arr);
//     return 0;
// }

// TWO SEARCH - O(n) TIME and O(1) SPACE USING 2 TRAVEERSALS

// #include<iostream>
// #include<vector>
// using namespace std;
// //function to find the second largest element in the array 
// int getSecondLargest(vector<int>&arr){
// int n=arr.size();
// int largest=-1,secondLargest=-1;
// //finding the largest element element
// for(int i=0;i<n;i++)
// {
//     if(arr[i]>largest)
//     largest =arr[i];
// }

// //finding the second largest element
// for(int i=0; i<n;i++){

// // Update second largest if the current element is greater than second largest and not equal to the largest 
// if(arr[i]>secondLargest && arr[i]!=largest)
// {
//     secondLargest=arr[i];
// }
// }
// return secondLargest; 
// }
// int main(){
//     vector<int>arr={12,35,1,10,34,1};
//     cout<<getSecondLargest(arr);
//     return 0;
// }

// ONE PASS SEARCH - O(n) TIME AND O(1) SPACE

#include<iostream>
#include<vector>
using namespace std;
//function to find the second largest element in the array 
int getSecondLargest(vector<int>&arr){
    int n=arr.size();
    int largest=-1,secondLargest=-1;
    //finding the second largest element
    for(int i=0;i<n;n++){
        //if arr[i]>largest,update second largest with largest and largest with arr[i]
        if(arr[i]<largest){
            secondLargest=largest;
            largest=arr[i];
        }
        //if arr[i]<largest and arr[i]>second largest, update second largest with arr[i]
        else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}
int main(){
    vector<int> arr={12,35,1,10,34,1};
    cout<<getSecondLargest(arr);
    return 0;
}