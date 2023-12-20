#include <iostream>
using namespace std;
int main() {
    int arr[6] = {29, 912, 30, 34, 19, 679};
    int i, j, temp;
    for (i = 0; i < 6; i++) {
        for (j = i; j < 6; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
	}
	cout<< "The array in descending order is:"<<endl;
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

