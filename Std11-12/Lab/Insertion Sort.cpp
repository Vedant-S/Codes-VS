#include <iostream>
using namespace std;

class INSERT {
	short int list[30];
	unsigned short int N;

	void sort(void);
	void show (void);
	
	public:
	INSERT() {
		cout << "Enter Number of Elements: ";
		cin >> N;
		cout << "Enter " << N << " Array Elements:" << endl;
		for (int i = 0; i < N; i++) {
			cin >> list[i];
		}
		sort();
		show();
	}
};

void INSERT::sort() {
	for (int i = 1; i < N; i++) 
	{
		int temp = list[i];
		int pos = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (list[j] > temp) 
			{
				list [j+1] = list[j];
				pos = j;
			}
		}
		list[pos] = temp;
	}
}

void INSERT::show() {
	cout << "\nThe Contents of the Array are: " << endl;
	for (int i = 0; i < N; i++) {
		cout << list[i] << " ";
	}
}

int main() {
	INSERT I1;
	return 0;
}

