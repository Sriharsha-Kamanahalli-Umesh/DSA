/*Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.*/

#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        int i=0;
        for(int j=0; j<nums.size(); ++j){
            if(nums[i]==nums[j])
                count++; 
            else{
                if(count>(nums.size()/2)){
                    break;
                }
                count=0;
                i=j;
                j--;
            }
        }
        return nums[i];
    }