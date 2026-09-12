#include <iostream>
using namespace std;

void recurse(int i, int n){

    if(i < 1){
        return;
    }
    
    recurse(i-1, n);
    cout << i << " ";
    
}

int main(){

    int n;
    cout << "Enter the number to be printed from 1 to N in backtracking fashion: ";
    cin >> n;

    recurse(n, n);

    return 0;
}