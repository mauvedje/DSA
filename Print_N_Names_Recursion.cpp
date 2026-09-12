#include <iostream>
using namespace std;

void recurse(int n){

    if(n <= 0){
        return;
    }
    
    cout << "Meha" << " ";
    recurse(n-1);

}

int main(){

    int n;
    cout << "Enter no. of times to print name: ";
    cin >> n;

    recurse(n);

    return 0;
}