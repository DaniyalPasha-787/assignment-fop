#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Type any number 'N': ";
    cin >> num;
    if (num < 2) {
        cout << "There is no Prime Number less than 2 as 2 is the smallest prime number!";
    }
    else if (num == 2) {
        cout << "The largest prime number less than or equal to " <<num<< " is: 2";
    }
    else {
        for (int i = num ; i >= 2; i--) {
            bool PR = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    PR = false;
                    break;
                }
            }
            if (PR) {
                cout << "The largest prime number less than or equal to " <<num<< " is: " << i;
                break;
            }
        }
    }
    return 0;
}

