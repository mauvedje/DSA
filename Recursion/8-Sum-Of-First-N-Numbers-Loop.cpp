#include <iostream>
using namespace std;

void sum(int n, int sum){

    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    cout << "The sum of first N numbers is: " << sum;
    
    return;

}


int main(){
    
    int n;
    cin >> n;

    sum(n, 0);
}