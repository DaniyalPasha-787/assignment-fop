#include <iostream>
using namespace std;

int main() {
	int n = 5 , k ;
    int arrA[n] = {1, 2, 3, 4, 5};
    cout <<"Enter number of ellements 'N' you like to add in array."<<endl<<"N=";
    cin>>k; 
    cout << "Type in the elements you would like to add: "  << endl;
    for (int i = n; i < n+k; i++) {
        cin >> arrA[i];
    }
    cout<<"The array after element added :"<<endl<<"{";
    for (int i = 0; i < n+k-1; i++){
    	cout << arrA[i]<<",";
	}
	cout<<arrA[n+k-1]<<"}";
    return 0;
}

