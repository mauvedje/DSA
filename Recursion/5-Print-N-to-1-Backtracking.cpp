#include <iostream>
using namespace std;

void recurse(int i, int n){

    if(i > n){
        return;
    }
    
    recurse(i+1, n);
    cout << i << " ";
    
}

int main(){

    int n;
    cout << "Enter the number to be printed in N to 1 in backtracking fashion: ";
    cin >> n;

    recurse(1, n);

    return 0;
}