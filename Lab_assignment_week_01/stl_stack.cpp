#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;
    s.pop();

    cout << "New Top: " << s.top() << endl;
    if(s.empty())
        cout<< "the stack is empty";
    else
        cout<<"the stack is not empty";

    return 0;
}
