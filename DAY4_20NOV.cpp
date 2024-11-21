// given an array of integer arr[] of size n,the task is to ratate the array elements the array elements to the left by d positions.

// Examples:-
// Input: arr[]={1,2,3,4,5,6},d=2
// output : {3,4,5,6,1,2}
// Explanation : After first left rotation,arr[] becomes{2,3,4,5,6,1} and after the ssecond rotation,arr[] becauses{2,3,4,5,6,1} and after the second rotation, arr[] becomes {3,4,5,6,1,2} 

// Input: arr[]={1,2,3},d=4
// Output: {2,3,1}
// Explaination: The array is rotated as follows:
// 1. After first left rotation,arr[]={2,3,1}
// 2. After second left rotation, arr[]={1,2,3}
// 3. After third left rotation, arr[]={2,3,1}

// append - 1

// Rotate one by one - O(n*d) Time and O(1) Space

// arr[]={1,2,3,4,5,6},d=2

// first step:- 
// ==> Rotate to left by one position.
// ==>arr[]={3,4,5,6,1,2}

// second step :-
// ==> Rotate is done 2 times.
// ==> arr[]={3,4,5,6,1,2}

// #include <bits/stdc++.h>
// using namespace std;

// void rotateArr(vector<int>& arr,int d){
//     int n=arr.size();

//     for(int i=0;i<d;i++){
//         int first =arr[0];
//         for(int j=0;j<n-1;j++){
//             arr[j]=arr[j+1];
//         }
//     }
//     arr[n-1]=first;
// }

// int main(){
//     vector<int> arr={1,2,3,4,5,6}
//     int d=2;

//     rotateArr(arr,d);

//     for(int i=0;i<arr.size();i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }


// 
// // attempt -2

// // Using temporary Array - O(n) Time and O(n) Space

// // the idea is to use a temporary arry of size n,where n is the length of the original array.
// // If we left rotate the array by d positions, the last n - d elements will be at the front and the first d elements will be at the end.

// // 1. Copy the last (n-d) elements of original array into the first n - d position of temporary array.
// // 2. then copy the first d elements of the end of temprorary array.
// // 3. Finally, copy all the elements of temporary array back into the original array.

// #include<bits/stdc++.h>
// using namespace std;

// void rotateArray(vector<int>& arr,int d){
//     int n=arr.size();
//     d %=n;
//     vector<int> temp(n);

//     for (int i=0;i<n-d;i++){
//         temp[i]=arr[d+i];
//     }

//     for(int i=0;i<d;i++){
//         temp[n-d+i]=arr[i];
//     }

//     for(int i=0;i<n;i++){
//         arr[i]=temp[i];
//     }
// }

// int main(){
//     vector<int> arr={1,2,3,4,5,6};
//     int d=2;

//     rotateArray(arr,d);

//     for(int i=0;i<arr.size();i++)
//     cout<<arr[i]<<" ";

//     return 0;
// }


// attempt - 3 :-

// Using Juggling Algorithm - O(n) Time and O(n) Space

#include<bits/stdc++.h>
using namespace std;

void rotateArr(vector<int>& arr,int d){
    int n=arr.size();
     d%=n;
     reverse(arr.begin(),arr.begin()+d);
     reverse(arr.begin()+d,arr.end());
     reverse(arr.begin(),arr.end());
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int d=2;

    rotateArr(arr,d);
    for(int i=0; i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}

