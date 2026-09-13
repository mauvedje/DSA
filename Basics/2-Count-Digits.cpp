#include <cmath>
#include <iostream>
using namespace std;

void extractNumber(int n){
    
    int count = 0;
    
    while(n > 0){
        
        int lastdigit = n % 10;
        n = n/10;
        cout << lastdigit << " ";

        count++;
    }
    cout << endl << "No. of Digits = " << count;
}

void countDigits(int n){  

    if(n == 0){
        cout << "There are 1 no. of digits";  
        return;
    }

    int count = log10(n) + 1;
    cout << "There are " << count << " no. of digits";

}


int main(){
    int n;
    
    cout << "Enter the digits to be counted: ";
    cin >> n;

    countDigits(n);

    return 0;
}