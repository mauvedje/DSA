#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool PrimeNumbers(int n){

    if(n < 2){
        return false;
    }

    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }

    return true;

}


int main(){

    int n;
    cout << "Enter digit for primality check: ";
    cin >> n;

    auto result = PrimeNumbers(n);

    if(result == true)
        cout << "The Number is prime";
    else
        cout << "The number is not prime";
    return 0;
}