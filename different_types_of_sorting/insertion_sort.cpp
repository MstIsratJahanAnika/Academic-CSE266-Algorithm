
#include<bits/stdc++.h>
using namespace std;

void insertionSort_1(vector<int> &vec){
    int n = vec.size();

    for(int i=1; i<n; i++){
        int key = vec[i], j;

        if(key < vec[i-1]){
            vec.erase(vec.begin()+i);

            for(j=i-1; j>=0 && vec[j]>key; j--);

            vec.insert(vec.begin()+j+1, key);
        }
    }
}

int main(){
    vector<int> arr = {12, 110, -13, 50, 6};

    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(-50);
    arr.push_back(19);

    insertionSort_1(arr);

    for(int v: arr)
        cout << v << " ";

    cout << "\n";

    return 0;
}
