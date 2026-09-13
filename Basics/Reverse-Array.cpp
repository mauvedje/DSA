#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> reverseArray(vector<int> &array){

    int n = (int)array.size();
    int first = 0;
    int last = n - 1;

    while (first <= last){
        swap(array[first], array[last]);
        first++;
        last--;
    }

    return array;
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Original Array: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    v = reverseArray(v);

    cout << "Reversed Array: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
