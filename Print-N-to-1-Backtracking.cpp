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
    cout << "Enter no. of times to print number: ";
    cin >> n;

    recurse(1, n);

    return 0;
}