// GIVEN AN ARRAY ARR[],THE TASK IS TO REVERSE  THE ARRAY.
// REVERSE AN ARRAY MEANS REARRANGING THE ELEMENTS SUCH THAT THE FIRST ELEMENT  BECOMES TTHE LAST ,
// THE SECOND ELEMENT BECOMES THE SECOND LAST AND SO ON

// INPUT: arr[]={1,4,3,2,6,5}
// output: {5,6,2,3,4,1}
// explaination : the first element 1 moves to last position ,the second element 5 moves to second-last and so on.

// INPUT: arr[]={4,5,1,2}
// output: arr[]={2,1,5,4}
// explaination : the first element 4 moves to last position ,the second element 5 moves to second last and so on.

// // approach - 1
// // USING A TEMPORARY ARRAY -O(n) TIME AND O(n) SPACE

// #include<iostream>
// #include<vector>
// using namespace std;
// void reverseArray(vector<int>&arr){
//     int n=arr.size();
//     vector<int>temp(n);
//     for(int i=0;i<n;i++)
//     arr[i]=temp[i];
// }
// int main(){
//     vector<int>arr={1,4,3,2,6,5};
//     reverseArray(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<"";
//     }
//     return 0;
// }


// // approach - 2
// // USING TWO POINTERS -O(n) TIME AND O(1) SPACE
// #include<iostream>
// #include<vector>
// using namespace std;
// void reverseArray(vector<int>&arr){
//     int left=0,right=arr.size()-1;
//     while(left<right){
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }
// }

// int main(){
//     vector<int>arr={1,4,3,2,6,5};
//     reverseArray(arr);
//     for(int i=0;i<arr.size();i++)
//     cout<<arr[i]<<"";
//     return 0;
// }


// // approach - 3
// // BY SWAPPING ELEMENT - O(n) TIME AND O(1) SPACE

// #include<iostream>
// #include<vector>
// using namespace std;
// void reverseArray(vector<int>&arr){
//     int n=arr.size();
//     for (int i = 0; i < n/2; i++)
//     {
//         swap(arr[i],arr[n-i-1]);
//     } 
// }

// int main(){
//     vector<int>arr={1,4,3,2,6,5};
//     reverseArray(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<"";
//     }
//     return 0;
// }

// // approach - 4 :-
// // USING RECURSION -O(n) TIME AND O(n) SPACE

// #include<bits/stdc++.h>
// using namespace std;
// void reverseArrayRec(vector<int>&arr,int l,int r){
//     if(l>=r)
//       return;
//     swap(arr[l],arr[r]);
//     reverseArrayRec(arr,l+1,r-1);
// }
// void reverseArray(vector<int>&arr){
//     int n=arr.size();
//     reverseArrayRec(arr,0,n-1);
// }
// int main(){
//     vector<int>arr={1,4,3,2,6,5};
//     reverseArray(arr);
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<"";
//     }
//         return 0;
// }

// USING INBUILT METHODS - O(n) TIME AND O(n) SPACE

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector<int>&arr){
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int>arr={1,4,3,2,6,5};
    reverseArray(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"";
    }
    return 0;
}

