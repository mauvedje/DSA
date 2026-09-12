#include <iostream>
using namespace std;

void recurse(int i, int n){

    if(n == 0){
        return;
    }
    
    cout << i << " ";
    recurse(i+1, n-1);

}

int main(){

    int n;
    cout << "Enter the number to be printed from 1 to N: ";
    cin >> n;

    recurse(1, n);

    return 0;
}