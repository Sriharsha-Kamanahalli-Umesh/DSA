
/*Given an array Arr of size N such that each element is from the range 0 to 9. 
Find the minimum possible sum of two numbers formed using the elements of the array. 
All digits in the given array must be used to form the two numbers.*/

#include <iostream>
#include <vector>

using namespace std;

string solve(int arr[], int n) {
        // code here
        std::vector<int> vec;
        for(int i=0; i<n; i++){
            vec.push_back(arr[i]);
        }
        sort(vec.begin(), vec.end());
        long sum1=0;
        long sum2=0;
        for(int i=0; i<vec.size(); i++){
            if(i%2==0)
                sum1=vec[i]+(sum1*10);
            else
                sum2=vec[i]+(sum2*10);
        }
        return std::to_string(sum1+sum2);
        
    }