#include <iostream>
using namespace std;
#include "dt.h"
//#include "q1.h"
#include "q2.h"
#include "q3.h"

class q1:public dt
{
public:
void question1(void){
b=dec.gender();

	
		if (b == 0)
		{
			
			phd.question2();
		}
		else{
			
			abroad.question3();
		}
		}

protected:
	int b;
dt dec;
	q2 phd;
	q3 abroad;
};