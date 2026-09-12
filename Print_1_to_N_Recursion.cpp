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
    cout << "Enter no. of times to print number: ";
    cin >> n;

    recurse(1, n);

    return 0;
}