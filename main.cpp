#include <iostream>
#include "calculator.h"

using namespace std;

int main(int argc, char *argv[])
{
	Calculator calc;
	
	if (argc == 4) {
		if (argv[3][0] == 'A') {
  			cout<<argv[1]<<" + "<<argv[2]<<" = "<<calc.Add(atof(argv[1]), atof(argv[2]))<<endl;
		}
	}
	if (argc == 3) {
  			cout<<argv[1]<<" - "<<argv[2]<<" = "<<calc.Sub(atof(argv[1]), atof(argv[2]))<<endl;		
	}
	if (argc == 2) {
  			cout<<argv[1]<<" + "<<argv[1]<<" = "<<calc.Double(atof(argv[1]))<<endl;		
	}
	return 0;
}
