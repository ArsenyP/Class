#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include <string.h>
#include<cstring>

using namespace std;

enum colour { Black, White, Orange, Green, Golden };
enum speed { low = 86, medium = 216, fast = 256, super_fast = 411, mega_fast = 511 };
enum price { cheap = 10000, expensive = 20000, luxury = 30000, super_luxury = 100000, mega_rich = 2000000 };

class Boat {
private:
	
colour cvet;
	
speed scorost;
	
price tsena;

char* Yacht_name;

public:
	Boat() 
	{
	}
	Boat(colour CVET, speed SCOROST, price TSENA)
	{
		cvet = CVET;
		scorost = SCOROST;
		tsena = TSENA;
	}
	void Output() {
		cout << "Show boat"<<Yacht_name <<"charachteristics:" << endl;
		switch (cvet) 
		{
		case Black: cout << "boat colour: Black" << endl; break;
		case White: cout << "boat colour: White" << endl; break;
		case Orange: cout << "boat colour: Orange" << endl; break;
		case Green: cout << "boat colour: Green" << endl; break;
		case Golden: cout << "boat colour: Golden" << endl; break;
		}
		cout << "Show Boat's speed" << scorost << endl;
		cout << "Show Boat's price" << tsena << endl;
	}
	void Fill_Yacht(colour CVET, speed SCOROST, price TSENA, const char* name)
	{
		cvet = CVET;
		scorost = SCOROST;
		tsena = TSENA;
		char *Yacht_name = new char [strlen (name)];
		//*Yacht_name = name;
		strcpy_s (Yacht_name, strlen(name), name);
	}
};

int main()
{
	Boat Yachts[10];
	
	Yachts[0].Fill_Yacht(colour::Black, speed::low, price::cheap, "K-222");
	Yachts[1].Fill_Yacht(colour::White, speed::medium, price::expensive, "Rocket");
	Yachts[2].Fill_Yacht(colour::Orange, speed::fast, price::luxury, "Fisherman");
	Yachts[3].Fill_Yacht(colour::Green, speed::super_fast, price::super_luxury, "Pearl");
	Yachts[4].Fill_Yacht(colour::White, speed::mega_fast, price::mega_rich, "Eclipse");

	Yachts[5].Fill_Yacht(colour::Black, speed::medium, price::cheap, "Submarine");
	Yachts[6].Fill_Yacht(colour::Green, speed::medium, price::expensive, "Space");
	Yachts[7].Fill_Yacht(colour::Orange, speed::fast, price::expensive, "Friend");
	Yachts[8].Fill_Yacht(colour::White, speed::super_fast, price::cheap, "Life-Style");
	Yachts[9].Fill_Yacht(colour::Golden, speed::low, price::mega_rich, "Castle");

	cout << "1-€ яхта" << & Yachts[0] << endl;
	cout << "2-€ яхта" << & Yachts[1] << endl;
	cout << "3-€ яхта" << & Yachts[2] << endl;
	cout << "4-€ яхта" << & Yachts[3] << endl;
	cout << "5-€ яхта" << & Yachts[4] << endl;
	cout << "6-€ яхта" << & Yachts[5] << endl;
	cout << "7-€ яхта" << & Yachts[6] << endl;
	cout << "8-€ яхта" << & Yachts[7] << endl;
	cout << "9-€ яхта" << & Yachts[8] << endl;
	cout << "10-€ яхта" << & Yachts[9] << endl;

	_getch();
	system("pause");
	return 0;
}