#include <iostream>
#include <vector>
using namespace std;

vector<int> largestElement(int arr[], int n) {
    vector<int> result(n);
    
    int maxRight = -1;   // No element to the right of last element
    
    for (int i = n - 1; i >= 0; i--) {
        result[i] = maxRight;
        if (arr[i] > maxRight) {
            maxRight = arr[i];
        }
    }
    
    return result;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = largestElement(arr, n);
    
    cout << "Largest elements to the right: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}