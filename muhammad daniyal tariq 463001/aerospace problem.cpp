#include <iostream>
#include <cmath>
using namespace std;
int main (){
	double sp1, rho, h1, g=9.8, v1, k;
	cout<<"Enter the values for initial conditions"<<endl<<"static pressure=";
	cin>>sp1; cout<<"density="; cin>>rho; cout<<"height="; cin>>h1;
	cout<<"relative velocity="; cin>>v1; cout <<endl;
	k= sp1 + (rho*pow(v1,2))/2 + rho*g*h1;
	double sp2, h2, v2;
	cout<<"Give the values of velocity and height at this moment:"<<endl;
	 cout<<"height="; cin>>h2; cout<<"relative velocity="; cin>>v2; 
	sp2= k- (rho*pow(v2,2))/2 - rho*g*h2;
	if (sp2<0){
		sp2= -1*sp2;
	}
	cout<< "Static pressure on the object = "<<sp2;
	return 0;
}
