#include "Box.h"
#include <iostream>

using namespace std;

Box::Box() {
	// Implementation
}

void Box::calcVol(int l, int w, int h) {
	cout << "Volume: " << l*w*h << endl;
}