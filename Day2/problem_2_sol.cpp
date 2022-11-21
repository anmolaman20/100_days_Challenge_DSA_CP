/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...


Input: columnNumber = 1
Output: "A"


Input: columnNumber = 28
Output: "AB"


Input: columnNumber = 701
Output: "ZY"

constraints:

1 <= columnNumber <= 2^31 - 1


*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
//----------Recursion Method--------------------//
            //     vector<string> vec{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
            //     string f(int n){
            //         if(n>=1 and n<=26){
            //             return vec[n-1];
            //         }
                
            //         if(n%26!=0) return f(n/26) + f(n%26);
            //         else return f(n/26-1) + f(26);
            //     }
            //     string convertToTitle(int c) {
            //         return f(c);
    
    
    string convertToTitle(int c) {
        string ans;
        while(c){
            int rem = c%26;
            if(rem==0) rem = 26;
            ans += ('A'+(rem-1));
            c/=26;
            if(rem==26)c--;
        }  
        reverse(ans.begin(),ans.end());
        return ans;
    
    }
};


int main(){
    int n;
    cin>>n;
    Solution obj;
    cout<<obj.convertToTitle(n);
return 0;
}