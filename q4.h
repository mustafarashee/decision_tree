#include <iostream>
using namespace std;

class q4{
public:
	void question4(void)
	{
		cout << "is your teacher above 50" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			cout << "your teacher is Fareed Alvi";
		}
		else{
			cout << "your teacher is Hussain Saleem";
		}

	}
private:
	char ans;
	
};