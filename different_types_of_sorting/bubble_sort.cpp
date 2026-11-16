

#include <iostream>
#include <vector>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        // Stop if no swapping occurs
        if (!swapped) {
            break;
        }
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

    bubbleSort(arr);

    cout << "After sorting: ";
    display(arr);

    return 0;
}
