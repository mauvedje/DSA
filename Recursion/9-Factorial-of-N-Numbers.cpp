#include <iostream>
using namespace std;

int recurse(int n){

    if(n == 0){
        return 1;
    }

    return n * recurse(n-1);
}

int main(){

    int n;
    cout << "Enter number to be summed: ";
    cin >> n;

    cout << recurse(n);

    return 0;
}