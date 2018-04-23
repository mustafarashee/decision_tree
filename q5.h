#include <iostream>
using namespace std;
class q5{
public:
	void question5(void)
	{
		cout << "is your teacher ever been to abroad recently?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			cout << "your teacher is Usman Amjad";
		}
		else{
			cout << "your teacher is Masroor";
		}

	}
private:
	char ans;

};