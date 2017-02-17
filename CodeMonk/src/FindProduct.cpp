/**
  * Shiv Pratap Singh
  * Find Product
  *
  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // TODO

    int size;
    cin >> size;

    int array[size];
    long answer = 1;

    long divisor = pow(10, 9) + 7;

    for(int i = 0; i < size; i++) {
        cin >> array[i];
        answer = (answer * array[i]) % divisor;
    }

    cout << answer;


    return 0;
}

