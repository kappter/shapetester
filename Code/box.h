#include <iostream>
using namespace std;
//#pragma once
#ifndef BOX_H
#define BOX_H

class box{
	public:
		void calcVol();
		int getVol();
		
	private: 
		int vol;
};
#endif 