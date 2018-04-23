#include <iostream>
using namespace std;
class q3{
public:
	void question3(void)
	{
		cout << "is your teacher ever been to abroad recently?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			 cout << "your teacher is HUMERA TARIQ";
		}
		else{
			cout << "your teacher is UROOJ WAHEED";
		}

	}
private:
	char ans;
	
};