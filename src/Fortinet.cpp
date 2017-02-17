/**
  * Shiv Pratap Singh
  * Fortinet Challenge
  *
  **/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    int aL = a.length();
    int bL = b.length();

    if(aL < bL) {
        return true;
    } else if(aL == bL) {
        return strcmp(a.c_str(), b.c_str()) < 0;
    }
    return false;

}

int main() {
    // TODO
    vector<string> v;

    int size;
    cin >> size;
    if(size < 1 || size > 100) {
        return 0;
    }

    for(int i = 0; i < size; i++) {
        string value;
        cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end(), compare);

    vector<string>::iterator it;
    for(it = v.begin(); it != v.end(); it++) {
        cout << (*it) << endl;
    }

    return 0;
}

