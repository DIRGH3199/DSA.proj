#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long reverse = 0;
        int xcopy = x;

        while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;
        }

        return reverse == xcopy;
    }
};

int main() {
    Solution obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (obj.isPalindrome(num)) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is NOT a Palindrome number." << endl;
    }

    return 0;
}
