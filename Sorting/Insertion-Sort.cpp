#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &A) {
    int n = A.size();
    for (int i = 1; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && A[j - 1] > A[j]) {
            swap(A[j], A[j - 1]);
            j = j - 1;
        }
    }
}

int main() {
    vector<int> A = {5, 2, 9, 1, 5, 6};

    cout << A.size();

    insertionSort(A);

    for (int x : A) cout << x << " ";
    cout << endl;

    return 0;
}
