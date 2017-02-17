/**
  * Shiv Pratap Singh
  * Count Divisors
  *
  */
  
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // TODO

    int l, r, k;
    cin >> l >> r >> k;
    
    int count = 0;
    
    while(l != (r + 1)) {
        if(l % k == 0)
            count++;
        l++;
    }

    cout << count;

    return 0;
}
