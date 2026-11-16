#include <iostream>
#include <vector>  //STL vector library
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50}; //integer type vector
    //insert in last
    v.push_back(60);
    v.push_back(30);
    //delete from last
    v.pop_back(); //removes last elem
    //check if empty
    if(v.empty())
        cout<< "\nthe vector is empty";
    else
        cout<< "\nthe vector is not empty";

    cout << "\nthe size of vector is"<<" "<< v.size()<<endl;
    //remove all
    //v.clear();

    //first and last element
    cout<<"first value is"<< " "<< v.front()<<endl;
    cout<< "last value is"<<" "<<v.back()<<endl;

    //access index wise
    cout <<"1st index value" << " "<<v[1] << endl;

    //inserting in middle
    v.insert(v.begin()+ 2, 500);
    //erase
    v.erase(v.begin() + 1);

    for(int i=0; i< v.size(); i++)
    {
        cout << v[i]<< " ";
    }
    return 0;
}
