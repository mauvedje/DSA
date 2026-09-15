#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int> &v, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min])
                min = j;
        }
        if (min != i)
            swap(v[i], v[min]);
    }
}

int main() {
    vector<int> v = {64, 25, 12, 22, 11};
    int n = v.size();
    selectionSort(v, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}