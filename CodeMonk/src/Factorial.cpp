/**
  * Shiv Pratap Singh
  * Factorial
  *
  */
  
#include <iostream>

using namespace std;

int main() {
    // TODO
    int N;
    cin >> N;
    
    for(int i = (N - 1); i != 1; i--) {
        N *= i;
    }
    
    cout << N;
    
    return 0;
}
