/* -----------------Problem 1 (Ugly Number)------------------------------//


An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.


Input: n = 6
Output: true
Explanation: 6 = 2 × 3


Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.


Constraints:

-2^31 <= n <= 2^31 - 1

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        while(n%2==0)n/=2;
        while(n%3==0)n/=3;
        while(n%5==0)n/=5;
        return n==1;
    }
};

int main(){
    Solution obj;
    int n;cin>>n;
    cout<<obj.isUgly(n)<<endl;
}