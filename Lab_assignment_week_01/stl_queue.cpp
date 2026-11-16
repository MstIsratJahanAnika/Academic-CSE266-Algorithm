
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> student;

    //enqueue
    student.push(5);
    student.push(7);
    student.push(11);
    cout << "Front element: " << student.front() << endl;
    cout << "Rear element: " << student.back() << endl;

    //dequeue
    student.pop();
    cout << "New front element: " << student.front() << endl;

    // Display queue size
    cout << "Queue size: " << student.size() << endl;

    // Check whether the queue is empty
    if (student.empty())
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queue is not empty";
    }

    return 0;
}
