/**
  * Shiv Pratap Singh
  * Magical Word
  *
  */

#include <iostream>  
#include <cmath>

using namespace std;

bool isPrime(int number) {
    int limit = sqrt(number);
    
    for(int i = 2; i <= limit; i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // TODO
    
    int testCases;
    cin >> testCases;
    
    while(testCases-- > 0) {
        int size;
        cin >> size;
        
        char str[size];
        getline(cin, str, size);
        
        cout << str;
        
        
    }
    

    return 0;
}
