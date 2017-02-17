/**
  * Shiv Pratap Singh
  * Toggle String
  *
  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // TODO

    string s;
    cin >> s;

    for(char i : s) {
        if(i >= 'A' && i <= 'Z')
            cout << (char)(i + 32);
        else if(i >= 'a' && i <= 'z')
            cout << (char)(i - 32);
    }

    return 0;
}

