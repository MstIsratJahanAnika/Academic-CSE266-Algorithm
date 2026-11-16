#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> student;

    student.insert({1, "anika"});
    student[2] = "nabila";
    student[3] = "nusrat";

    cout << "Student 1: " << student[1] << endl;

    if(student.find(2) != student.end()) {
        cout << "Key 2 found" << endl;
    }

    student.erase(3);

    cout << "Size: " << student.size();

    return 0;
}
