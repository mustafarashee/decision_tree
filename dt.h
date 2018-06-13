#include <iostream>
#include <string>
using namespace std;

class dt{
public:
  int gender(void)
  {
    	cout << "is you teacher male?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
    
      if (ans=='a')
      {
        return 0;
      }
      else 
      {
        return 1;
      }
    
  }
  void abroad3(void)
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
	int electronic(void){
	cout << "is your teacher teach electronics related subject" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == 'a')
		{
			return 0;
		}
		else{
			return 1;
		}
	}

	void above(void)
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
	void abroad5(void)
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