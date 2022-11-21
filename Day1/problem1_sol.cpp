/*
https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k/



Given an integer array nums and an integer k, return the number of subarrays of nums where the greatest common divisor of the subarray's elements is k.

A subarray is a contiguous non-empty sequence of elements within an array.

The greatest common divisor of an array is the largest integer that evenly divides all the array elements.


Input: nums = [9,3,1,2,6,3], k = 3
Output: 4
Explanation: The subarrays of nums where 3 is the greatest common divisor of all the subarray's elements are:
- [9,3,1,2,6,3]
- [9,3,1,2,6,3]
- [9,3,1,2,6,3]
- [9,3,1,2,6,3]




Input: nums = [4], k = 7
Output: 0
Explanation: There are no subarrays of nums where 7 is the greatest common divisor of all the subarray's elements.



Constraints:

1 <= nums.length <= 1000
1 <= nums[i], k <= 10^9


*/



//----------------------------------SOlution-------------------------------------//

//LeetCode -> ACCEPTED  -> 2447
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int result = 0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int gcd = nums[i];
            for(int j=i;j<n;j++){
                gcd = __gcd(gcd,nums[j]);
                if(gcd==k) result++;
                if(gcd<k) break;
            }
        }
        return result;
    }
};

int main(){
    Solution obj;
    int n,k;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>k;
    int ans = obj.subarrayGCD(arr,k);
    cout<<ans<<" ";
}

/*
6 
9 3 1 2 6 3
3
4 
*/