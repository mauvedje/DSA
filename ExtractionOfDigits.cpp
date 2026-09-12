#include <iostream>
using namespace std;

void extractNumber(int n){
    while(n > 0){
        
        int lastdigit = n % 10;

        n = n/10;

        cout << lastdigit << " ";
    }
}

int main(){
    int n;
    
    cout << "Enter the number to be extracted: ";
    cin >> n;

    extractNumber(n);

    return 0;
}