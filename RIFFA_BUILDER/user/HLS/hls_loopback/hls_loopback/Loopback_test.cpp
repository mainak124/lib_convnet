#include "Loopback.h"
#include <stdio.h>
#include<iostream>
#include<algorithm>
#include <fstream>

using namespace std;
int main ()
{

	std::vector<DTYPE> input(SIZE, 0);
	std::vector<DTYPE> output(SIZE, 0);

	srand(0);
	


	for(int i=0;i<SIZE;i++) {
		input[i] = rand()%16384 + 1;
	}

	Loopback(input.data(), output.data());

	return 0;
}

