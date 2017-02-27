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

    int primeArr[] = {67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
    int primeAgg[] = {69, 72, 76, 81, 86, 93, 99, 102, 105, 108, 111};

    int testCases;
    cin >> testCases;

    while(testCases-- > 0) {
        int size;
        cin >> size;

        char str[size + 1];
        scanf("%s", str);

        for(int i = 0; i < size; i++) {
            int ch = (int) str[i];
            for(int j = 0; j < 11; j++) {
                if(ch < primeAgg[j]) {
                    str[i] = (char) primeArr[j];
                    break;
                } else if(ch > primeAgg[j]) {
                    if(j == 10) {
                        str[i] = (char)primeArr[j + 1];
                        break;
                    }
                } else if(ch == primeAgg[j]) {
                    str[i] = (char)primeArr[j];
                    break;
                }
            }
        }

        cout << str << endl;
    }

    return 0;
}

