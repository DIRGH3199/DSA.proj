#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4};
    int n = 6;

    int visited[6] = {0}; // To mark counted elements

    cout << "Frequencies:\n";

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
}
