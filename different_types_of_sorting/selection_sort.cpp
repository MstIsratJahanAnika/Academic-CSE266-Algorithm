
#include <iostream>
#include <vector>
using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        int minIndex = i;

        // Find the smallest element
        for (int j = i + 1; j < n; j++) {

            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the smallest element with current element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to display the vector
void display(vector<int> arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 4};

    cout << "Before sorting: ";
    display(arr);

    selectionSort(arr);

    cout << "After sorting: ";
    display(arr);

    return 0;
}

