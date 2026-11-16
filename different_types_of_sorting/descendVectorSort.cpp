#include<bits/stdc++.h>
using namespace std;

bool comp(vector<int> &a, vector<int> &b){
    // convert to float then divide to avoid integer division
    // float x = 1.0*a[0]/a[1]);
    // float y = 1.0*b[0]/b[1]);


    // type casting or type conversion is done to avoid integer division
    float x = (float)a[0]/a[1];
    float y = (float)b[0]/b[1];

    if(a[0] > b[0])
        return true;
    else if(a[0] == b[0])
        return x>=y;
    else
        return false;
}

int main(){
    vector<vector<int>> vec1 = {{10, 20},
                                {20, 40},
                                {20, 10},
                                {40, 10},
                                {10, 30}
    };

    vector<vector<int>> vec2 = {{10, 20},
                                {10, 40},
                                {10, 10},
                                {10, 15},
                                {10, 30}
    };

    sort(vec1.begin(), vec1.end(), comp);
    for(auto i: vec1){
        cout << i[0]<< " "<< i[1]<<"\n";
    }
    cout<< endl;

    sort(vec2.begin(), vec2.end(), comp);
    for(auto i: vec2){
        cout << i[0]<< " "<< i[1]<<"\n";
        // cout<< endl;
    }
    return 0;
}