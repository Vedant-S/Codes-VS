#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
using namespace std;

class BILL
{
	private:
		unsigned short int item_code;
		char item_name[30];
		float unit_price, total;
		unsigned short int quantity;
		public:
			void get_data();
			void put_data();
};

void BILL::get_data()
{
	cout<<"Enter the item code\n";
	cin>>item_code;
	cout<<"Enter the item name\n";
	cin>>item_name;
	cout<<"Enter the item's unit price\n";
	cin>>unit_price;
	cout<<"Enter the quantity of item\n";
	cin>>quantity;
	
	total=quantity*unit_price;
}

void BILL::put_data()
{
	cout<<" "<<item_code<<setw(10)<<" "<<item_name<<" "<<setw(10)<<right<<unit_price<<" "<<setw(10)<<right<<quantity<<" "<<setfill(' ')<<setw(10)<<total<<endl;
}

int main()
{
	BILL b;
	int c, i;
	ifstream fin;

	ofstream fout;
	do
	{
		cout<<"Select a choice\n1. To enter item details\n2. To display all contents\n3. Exit\n";
		cin>>c;
		
		switch(c)
		{
			case 1: 
			cout<<"Enter number of items\n";
			cin>>i;
			cout<<"Enter details:\n";
			fout.open("market.data", ios::binary);
			for(int k=0; k<i; k++)
			{
			
			b.get_data();
			fout.write((char*)&b, sizeof(b));}
			fout.close();
			continue;
			
			case 2:cout<<setw(10);
			cout<<"ITEM_CODE"<<" "<<"ITEM_NAME"<<" "<<setfill(' ')<<setw(10)<<"UNIT_PRICE"<<" "<<setfill(' ')<<setw(10)<<"QUANTITY"<<setfill(' ')<<" "<<"TOTAL\n";
			fin.open("market.data", ios::binary);
			
			
			
			
			fin.seekg(0);
			while(fin.read((char*)&b, sizeof(b)))
			{
				b.put_data();
			}
			fin.close();
			continue;
			
			case 3: break;
			default:cout<<"Invalid input! Try again\n";
		}
	}
	while(c!=3);
	
	fin.close();
	return 0;

}
