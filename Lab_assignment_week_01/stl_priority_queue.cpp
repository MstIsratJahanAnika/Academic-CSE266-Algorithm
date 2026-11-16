#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Max-Heap (Default)
    priority_queue<int, vector<int>, less<int>> q1;

    q1.push(30);
    q1.push(10);
    q1.push(50);
    q1.push(20);

    cout << "Max-Heap: " << q1.top() << endl;

    q1.pop();

    cout << "After Pop: " << q1.top() << endl;


    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> q2;

    q2.push(30);
    q2.push(10);
    q2.push(50);
    q2.push(20);

    cout << "Min-Heap: " << q2.top() << endl;

    return 0;
}
