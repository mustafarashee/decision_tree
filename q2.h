#include <iostream>
using namespace std;
#include "q4.h"
#include "q5.h"
class q2:public dt{
public:
	void question2(void)
	{
	b=elec.electronic();
		if (b==0)
		{
			age.question4();
		}
		else{
			abroad.question5();
		}

	}
private:

	int b;
	dt elec;
	q4 age;
	q5 abroad;
};