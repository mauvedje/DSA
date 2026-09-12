#include <iostream>
#include <cmath>    
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // Function to get all divisors
    vector<int> getDivisors(int N) {
        // Create a vector to store divisors
        vector<int> res;

        // Loop from 1 to square root of N
        for (int i = 1; i <= sqrt(N); i++) {
            // Check if i divides N
            if (N % i == 0) {
                // Add i to the result
                res.push_back(i);

                // If N / i is different from i, add N / i too
                if (N / i != i) {
                    res.push_back(N / i);
                }
            }
        }

        sort(res.begin(), res.end());
        for(auto it : res){
            cout << it << " ";
        }

        // Return the list of divisors
        return res;
    }
};

int main() {
    // Create object of Solution class
    Solution sol;

    // Input number
    int N;
    cout << "Enter the number to print its divisors: ";
    cin >> N;
    

    // Get divisors
    vector<int> result = sol.getDivisors(N);

    return 0;
}
