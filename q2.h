#include <iostream>
using namespace std;
#include "q4.h"
#include "q5.h"
class q2{
public:
	void question2(void)
	{
		cout << "is your teacher teach electronics related subject" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			age.question4();
		}
		else{
			abroad.question5();
		}

	}
private:
	char ans;
	q4 age;
	q5 abroad;
};