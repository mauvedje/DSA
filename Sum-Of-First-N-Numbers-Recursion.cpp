#include <iostream>
using namespace std;

void recurse(int i, int sum){

    if(i < 1){
        cout << sum;
        return;
    }

    recurse(i-1, sum+i);

}

int main(){

    int n;
    cout << "Enter number to be summed: ";
    cin >> n;

    recurse(n, 0);

    return 0;
}