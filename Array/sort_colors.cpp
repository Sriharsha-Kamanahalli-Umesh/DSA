/*Given an array nums with n objects colored red, white, or blue, sort them in-place so 
that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.*/

#include <iostream>
#include <vector>

using namespace std;

// brute force
void sortColors(vector<int>& nums) {
    for(int i=0; i<nums.size(); i++){
        int min=i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j]<nums[min]){
                min=j;
            }
        }
        int temp = nums[i];
        nums[i] = nums[min];
        nums[min] = temp;
    }
}

// optimal approach

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        for(auto val :nums){
            if(val==0)
                count0++;
            else if(val==1)
                count1++;
            else
                count2++;
        }
        int k=0;
        while(count0--){
            nums[k++]=0;
        }
        while(count1--){
            nums[k++]=1;
        }
        while(count2--){
            nums[k++]=2;
        }
        
    }
};
