/**
  * Shiv Pratap Singh
  * Roy and Profile Picture
  *
  */
  
#include <iostream>

using namespace std;

int main() {
    // TODO

    int L, N;
    cin >> L >> N;
    
    for(int i = 0; i < N; i++) {
        int W, H;
        cin >> W >> H;
        
        if(W < L || H < L) {
            cout << "UPLOAD ANOTHER" << endl;
        } else if(W == H) {
            cout << "ACCEPTED" << endl;
        } else {
            cout << "CROP IT" << endl;
        }
            
    }

    return 0;
}
