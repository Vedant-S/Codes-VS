#include <iostream>
using namespace std;

class B {
	unsigned short int NUM1;
	protected:
	unsigned short int NUM2;
	
	void input() {
		cout << "Enter Value of NUM1: ";
		cin >> NUM1;
	}
	
	unsigned short int getdata() {
		return NUM1;
	}
};

class D: public B {
	short int SUM;
	
	void show() {
		cout << "\nThe Value of NUM1 = " << getdata() << endl;
		cout << "The Value of NUM2 = " << NUM2 << endl;
		cout << "The Value of SUM = " << SUM << endl;
	}
	
	public:
	D() {
		input();
		cout << "Enter Value of NUM2: ";
		cin >> NUM2;
		SUM = getdata() + NUM2;
		show();	
	}
};

int main() {
	D d1;
	return 0;
}


