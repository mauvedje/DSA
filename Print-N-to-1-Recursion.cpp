#include <iostream>
using namespace std;

void recurse(int n){

    if(n == 0){
        return;
    }
    
    cout << n << " ";
    recurse(n-1);

}


int main(){

    int n;
    cout << "Enter no. of times to print number: ";
    cin >> n;

    recurse(n);

    return 0;
}
