#include <iostream>
using namespace std;
#include "q2.h"
#include "q3.h"

class q1
{
public:
	void question1(void)
	{
		cout << "is you teacher male?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			phd.question2();
		}
		else{
			abroad.question3();
		}

	}
private:
	char ans;
	q2 phd;
	q3 abroad;
};