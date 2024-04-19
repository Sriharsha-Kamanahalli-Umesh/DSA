/*Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. 
The task is to find the element that would be at the kth position of the final sorted array.*/

/*
Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
*/

#include <iostream>

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int res_arr[n+m];
        int i=0; 
        int j=0; 
        int l=0;
        while(i<n && j<m) {
            if(arr1[i]<=arr2[j]){
                res_arr[l++] = arr1[i];
                i++;
            }
            else{
                res_arr[l++] = arr2[j];
                j++;
            }
        }
        
        while(i<n){
            res_arr[l++] = arr1[i];
            i++;
        }
        while(j<m){
            res_arr[l++] = arr2[j];
            j++;
        }
        return res_arr[k-1];
    }