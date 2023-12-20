#include <iostream>
#include <string>
using namespace std;
int main() {
    string  str1st , str2nd ;
    cout << "Write the 1st string: ";
    cin >> str1st;
    cout << "Write the 2nd string: ";
    cin >> str2nd;
    int l1 = str1st.length() , l2 = str2nd.length();
    bool notequal = false;
    char temp;
    for (int i = 0; i < l1; i++) {
        if (l1 != l2 && str1st != str2nd) {
            notequal = true;
            break;
        }
    }
    if (notequal) {
        cout << "String are not equal" << endl;
    }else {
        for (int i = 0, j = l1 - 1; i < j; i++, j--) {
            temp = str1st[i];
            str1st[i] = str1st[j];
            str1st[j] = temp;
    	}
        cout << "The rotated string is : " << str1st;
    }
    return 0;
}

