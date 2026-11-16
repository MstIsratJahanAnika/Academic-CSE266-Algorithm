
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    // Insertion
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);
    s.insert(40); // Duplicate value

    // Display values
    cout << "Values are: ";

    for(int x : s) {
        cout << x << " ";
    }

    // Search
    if(s.find(40) != s.end())
        cout << "\n40 is found";

    else
        cout << "\n40 is not found";

    // Deletion
    s.erase(30);
    cout << "\nAfter deletion: ";

    for(int x : s) {
        cout << x << " ";
    }

    // Size
    cout << "\nSize: " << s.size();

    return 0;
}
