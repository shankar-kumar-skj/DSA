// GIVEN AN ARRAY OF INTEGER arr[] ,THE TASK IS TO MOVE ALL THE ZEROES TO THE END OF THE ARRAY WHILE MAINTAINING THE RELATIVE  ORDER OF ALL NON-ZERO ELEMENT

// SAMPLE TEST CASES :-

// 1.
// INPUT : arr[]={1,2,0,4,3,0,5,0}
// OUTPUT : arr[]={1,2,4,3,5,0,0,0}
// EXPLAINATION : THESE ARE THREE 0's THAT ARE MOVED TO THE END.
// 2.
// INPUT : arr[]={10,20,30}
// OUTPUT : arr[]={10,20,30}
// EXPLAINATION : NO CHANGE IN ARRAY AS THERE ARE NO 0's.
// 3.
// INPUT : arr[]={0,0}
// OUTPUT : arr[]={0,0}
// EXPLAINATION : NO CHANGE IN ARRAY AS THERE ALL ARE 0's.

// // approach 1

//creating temporary array

// #include<bits/stdc++.h>
// using namespace std;
// void pushZeroesToEnd(vector<int>&arr){
//     int n=arr.size();
//     vector<int>temp(n);
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0)
//         temp[j++]=arr[i];
//     }
//     while(j<n){
//         temp[j++]=0;
//     }
//     for(int i=0;i<n;i++)
//     arr[i]=temp[i];
// }
// int main(){
//     vector<int>arr={1,2,0,4,3,0,5,0};
//     pushZeroesToEnd(arr);
// for(int num:arr){
// cout<<num<<"";
// }
// return 0;
// }


// // approach 2

//to move all the zeros by traversing the array twice

// #include<bits/stdc++.h>
// using namespace std;
// void pushZeroesToEnd(vector<int>&arr){
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0)
//         arr[count++]=arr[i];
//     }
//     while(count<arr.size())
//     arr[count++]=0;
// }
// int main(){
//     vector<int>arr={1,2,0,4,3,0,5,0};
//     pushZeroesToEnd(arr);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
//     return 0;
// }

// //approach 3

// // do all all same as approach 2 but counting it swap the non-zero element with arr[count]  

// #include<bits/stdc++.h>
// using namespace std;
// void pushZeroesToEnd(vector<int>&arr){
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         if (arr[i]!=0){
//             swap(arr[i],arr[count]);
//             count++;
//         }
//     }
// }

// int main(){
//     vector<int>arr={1,2,0,4,3,0,5,0};
//     pushZeroesToEnd(arr);
//     for(int num:arr){
//         cout<<num<<"";
//     }
//     return 0;
// }

// approach 4 

//using library method (stable_parition())

// #include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void pushZeroesToEnd(vector<int>&arr){
stable_partition(arr.begin(),arr.end(),[](int n){
    return n!=0;})
}
int main(){
    vector<int>arr={1,2,0,4,3,0,5,0};
    pushZeroesToEnd(arr);
    for(int i:arr)
    cout<<i<<" ";
    return 0;

}




