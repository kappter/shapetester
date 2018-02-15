#include <iostream>
#include <string>
#include "Box.h"
#include "Sphere.h"
#include "Pyramid.h"

using namespace std;

int main() {
	int l, w, h;
	char choice = ' ';
	cout << "Welcome to shape tester. What shape would you like to create? b for Box, s for Sphere or p for Pyramid:";
	cin >> choice;
	
	if(choice == 'b'){
		cout << "Enter value for length of a box:";
		cin >> l;
		cout << "Enter value for width of a box:";
		cin >> w;
		cout << "Enter value for height of a box:";
		cin >> h;
		Box b1;
		b1.calcVol(l,w,h);
	} else if (choice == 's') {
		
	} else if (choice == 'p') {
		
	}
	
	return 0;
}