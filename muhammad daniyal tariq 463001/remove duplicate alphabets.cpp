#include <iostream>
#include <string>
using namespace std;
int main() {
    string ing;
    cout << "Enter a string: ";
    getline(cin, ing);
    int l = ing.length();
    cout << endl;
    for (int i = 0; i < l; i++) {
        bool diff = true;
        for (int j = 0; j < l; j++) {
            if (i != j && ing[i] == ing[j]){			
                diff = false;
                break; 
        	}
   		}
        if (diff) {
            cout << ing[i];
        }
    }
    return 0;
}

