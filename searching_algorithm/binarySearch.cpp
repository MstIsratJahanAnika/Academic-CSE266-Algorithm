///leetcode profile link:    https://leetcode.com/u/MstIsratJahanAnika/

#include<bits/stdc++.h>
using namespace std;

vector<int> productBad = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

bool isBadVersion(int version){
    return productBad[version-1];
}

class Solution {
public:

    int firstBadVersion(int n){

    int first = 0;
    int last = n-1;
    //int bad;


        while(first <= last){
            int mid = first + (last-first)/2;
            if(isBadVersion(mid) == true)
            {
                //bad = mid;
                last = mid-1;
            }

            else
                first = mid+1;
        }
        return first;
    }
};

int main(){
    Solution sol;
    cout << sol.firstBadVersion(10);
    return 0;
}
