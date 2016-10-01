#include <iostream>
#include <random>
#include <functional>
#include <time.h>
#include <Windows.h>
#include <limits>
#undef max
using namespace std;

int cavalry;
int diff;
bool noSaitama = true;
double saitama = 1;
int enemyCastle;
int stub = 0;
int shpy = 0;
int row = 0;

void addArmy(int range_min, int range_max, int n)
{
	// Generate random numbers in the half-closed interval
	// [range_min, range_max). In other words,
	// range_min <= random number < range_max
	// Rand max = 32767
	// Fill massive with random numbers, then take a random one from the big pool of random numbers.
	// Operations are executed in order of writing (Only applies for / and *, because they have equal power)
	int i;
	int m[10000];
	for (i = 0; i < n; i++)
	{
		int u = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
		m[i] = u;
	}
	enemyCastle = m[rand() % n];
}

void roll(int x)
{
start:
	if (stub == 0) { stub = 1; }
	else 
	{
		if (GetAsyncKeyState(VK_SPACE) != 0)
		{
			cout << "You decided to invade the enemy castle with " << cavalry << " cavalry units!" << endl;
			system("pause > nul");
			cout << endl;
			return;
		}

	}
	srand((unsigned)time(NULL));
int a = rand() % x + 1;
int b = rand() % x + 1;
	int answer;
	if (noSaitama)
	{
		int saitamaTest = 100 / saitama;
		if (int test = rand() % saitamaTest + 1 == rand() % saitamaTest + 1)
		{
			noSaitama = false;
			cout << "You recieved Saitama!!!!" << endl;
			cout << "Saitama difficulty: " << saitama << endl;
			system("pause");
		}
	}
		int symbol = rand() % 5 + 1;
		if (symbol == 5)
		{
			cout <<a<< " + " << b << " = ";
			cin >> answer;
			if (answer == a + b) {
				cavalry = cavalry + diff;
				cout << "Good, you got " << diff << " cavalry units!" << endl;
				row++;
				saitama = saitama + diff*0.030;
			}
			else
			{
				cout << " Learn to math, NO CAVALRY FOR YOU!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cavalry = cavalry - diff;
				if (cavalry < 0) cavalry = 0;
				row = 0;
			}
			if (row == 10)
			{
				cout << "You answered 10 equations in a row! GOOD JOB!! Now you get a special unit!" << endl;
				cout << "It will manage your covert ops." << endl;
				shpy++;
				row = 0;
			}

			goto start;
		}
		if (symbol == 4)
		{
			cout <<a<< " - " << b << " = ";
			cin >> answer;
			if (answer == a - b) {
				cavalry = cavalry + diff;
				cout << "Good, you got " << diff << " cavalry units!" << endl;
				row++;
				saitama = saitama + diff*0.030;
			}
			else
			{
				cout << " Learn to math, NO CAVALRY FOR YOU!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cavalry = cavalry - diff;
				if (cavalry < 0) cavalry = 0;
				row = 0;
			}
			if (row == 10)
			{
				cout << "You answered 10 equations in a row! GOOD JOB!! Now you get a special unit!" << endl;
				cout << "It will manage your covert ops." << endl;
				shpy++;
				row = 0;
			}
			goto start;
		}
		if (symbol == 3)
		{
			cout << a << " * " << b << " = ";
			cin >> answer;
			if (answer == a * b) {
				cavalry = cavalry + diff;
				cout << "Good, you got " << diff << " cavalry units!" << endl;
				row++;
				saitama = saitama + diff*0.030;
			}
			else
			{
				cout << " Learn to math, NO CAVALRY FOR YOU!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cavalry = cavalry - diff;
				if (cavalry < 0) cavalry = 0;
				row = 0;
			}
			if (row == 10)
			{
				cout << "You answered 10 equations in a row! GOOD JOB!! Now you get a special unit!" << endl;
				cout << "It will manage your covert ops." << endl;
				shpy++;
				row = 0;
			}
			goto start;
		}
		if (symbol == 2)
		{
			cout << a << " / " << b << " = ";
			cin >> answer;
			if (answer == a / b) {
				cavalry = cavalry + diff;
				cout << "Good, you got " << diff << " cavalry units!" << endl;
				row++;
				saitama = saitama + diff*0.030;
			}
			else 
			{
				cout << " Learn to math, NO CAVALRY FOR YOU!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cavalry = cavalry - diff;
				if (cavalry < 0) cavalry = 0;
				row = 0;
			}
			if (row == 10)
			{
				cout << "You answered 10 equations in a row! GOOD JOB!! Now you get a special unit!" << endl;
				cout << "It will manage your covert ops." << endl;
				shpy++;
				row = 0;
			}
			goto start;
		}
		if (symbol == 1)
		{
			cout << a << " % " << b << " = ";
			cin >> answer;
			if (answer == a % b) {
				cavalry = cavalry + diff;
				cout << "Good, you got " << diff << " cavalry units!" << endl;
				row++;
				saitama = saitama + diff*0.030;
			}
			else
			{
				cout << " Learn to math, NO CAVALRY FOR YOU!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cavalry = cavalry - diff;
				if (cavalry < 0) cavalry = 0;
				row = 0;
			}
			if (row == 10)
			{
				cout << "You answered 10 equations in a row! GOOD JOB!! Now you get a special unit!" << endl;
				cout << "It will manage your covert ops." << endl;
				shpy++;
				row = 0;
			}
			goto start;
		}
	
}


int main()
{
	srand((unsigned)time(NULL)); // Maybe not needed, but it doesn't hurt so :D
	bool hero = false;
	int dayNight;
	cout << "1 Normal" << endl;
	cout << "2 Hard" << endl;
	cout << "3 Insane" << endl;
	cin >> diff;
	switch (diff)
	{
	case 1:
		cout << "Current difficulty is Normal." << endl;
		roll(15);
		if (cavalry > 87) { cout << "Amidst this big army, you stumbled upon a formiddable warrior, feared throughout all kingdoms for his undisputed swordsmanship." << endl; cout << "You entrusted your army to him by making him the leader of this battalion." << endl; system("pause > nul"); cout << "\nHero: I will not fail you, My Lord." << endl; hero = true; }
		addArmy(25, 251, 10000);
		cavalry = cavalry + 2 * shpy;
		goto battle;
	case 2:
		cout << "Current difficulty is Hard." << endl;
		roll(30);
		if (cavalry > 325) { cout << "Amidst this big army, you stumbled upon a formiddable warrior, feared throughout all kingdoms for his undisputed swordsmanship." << endl; cout << "You entrusted your army to him by making him the leader of this battalion." << endl; system("pause > nul"); cout << "\nHero: I will not fail you, My Lord." << endl; hero = true;}
		addArmy(50, 1001, 10000);
		cavalry = cavalry + 3.5 * shpy;
		goto battle;
	case 3:
		cout << "Current difficulty is Insane." << endl;
		roll(100);
		if (cavalry > 700) { cout << "Amidst this big army, you stumbled upon a formiddable warrior, feared throughout all kingdoms for his undisputed swordsmanship." << endl; cout << "You entrusted your army to him by making him the leader of this battalion." << endl; system("pause > nul"); cout << "\nHero: I will not fail you, My Lord." << endl; hero = true; }
		addArmy(200, 2001, 10000);
		cavalry = cavalry + 5.5 * shpy;
	battle:
		cout << "You notice the wind blowing your army's banners, so you decide to launch your assault.\n" << endl;
		if (shpy != 0)
		cout << "Your spymaster reports you that you have successfully recruited " << shpy << " spies.\n" << endl;
		cout << "The question remaining for you is to wether attack during the night(0), or during the day(1). What shall it be, My Lord?" << endl;
	answer:
		cout << "Lord's answer: ";
		cin >> dayNight;
		if (dayNight == 0)
		{
			cout << "You decided to launch your attack during the night." << endl;
			system("pause > nul");
			cout << endl;
		}
		else if (dayNight == 1)
		{
			cout << "You decided to launch your attack during the day." << endl;
			system("pause > nul");
			cout << endl;
		}
		else
		{
			cout << "Invalid answer. Use ""1"" for day and ""0"" for night." << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			goto answer;
		}
			if (1 == rand() % 2)
			{
				cout << "Your army caught the enemy by surprise! While they were busy sounding the alarm and organizing their defenses, you managed to do severe damage to them!" << endl;
				system("pause > nul");
				cout << endl;
				cavalry = cavalry + (cavalry * 25 / 100);
			}
			else
			{
				cout << "The enemy's castle defenses were up, your army has been spotted! Your attempt to surprise them has failed, prepare for a long and fearsome fight..." << endl;
				system("pause > nul");
				cout << endl;
			}
		if (hero) 
		{
			cout << "In the heat of battle, your hero alone brought to ruin "<< enemyCastle * 33 / 100 <<" enemy units, but was it enough?" << endl;
			system("pause > nul");
			cout << endl;
			enemyCastle = enemyCastle - (enemyCastle * 33 / 100);
		}
		if (enemyCastle > cavalry) { cout << "The enemy's castle defenses destroyed your forces! Better luck next time." << endl; }
		else if (enemyCastle == cavalry && hero)
		{
			cout << "Your whole army perished, but your hero stood on his ground and finished the remainding enemy forces." << endl;
			system("pause > nul");
			cout << endl;
			cout << "You won, congratulations!" << endl;
		}
		else if (enemyCastle == cavalry)
		{
			cout << "The enemy barely won this fight, to be precise, they were left without an army, but you were also left without an army, which is needed to conquer the now open enemy kingdom..." << endl;
			system("pause > nul");
			cout << endl;
			cout << "You lost, better luck next time!" << endl;
		}
		else if (cavalry > enemyCastle + 100)
		{
			cout << "A magnificent fight! Your army utterly destroyed the opposition!" << endl;
			cout << "Your remaining units on the battlefield are so many, that you can push your luck and storm in on another castle!" << endl;
			system("pause > nul");
			cout << endl;
			cout << "Congratulations, you won the game!" << endl;
		}
		else if (cavalry> enemyCastle + 50)
		{
			cout << "A honorable fight, My Lord. You won the battle with a decent margin!" << endl;
			system("pause > nul");
			cout << endl;
			cout << "Congratulations, you won the game!" << endl;
		}
		else if (cavalry > enemyCastle)
		{
			cout << "Your army destroyed the enemy castle's defenses and was able to breach in and conquer it!" << endl;
			system("pause > nul");
			cout << endl;
			cout << "Congratulations, you won the game!" << endl;
		}
		else if (cavalry < enemyCastle)
		{
			cout << "Your army was not large enough to destroy the enemy's defenses." << endl;
			system("pause > nul");
			cout << endl;
			cout << "You lost the game, better luck next time!" << endl;
		}
		break;
	default:
		diff = 1;
		cout << "Unknown parameter, setting difficulty to default: Normal." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		roll(15);
		if (cavalry > 100) { cout << "Amidst this big army, you stumbled upon a formiddable warrior, feared throughout all kingdoms for his undisputed swordsmanship." << endl; cout << "You entrusted your army to him by making him the leader of this battalion." << endl; system("pause > nul"); cout << "\nHero: I will not fail you, My Lord." << endl; hero = true; }
		addArmy(25, 251, 10000);
		goto battle;
	}

	system("pause > nul");
	return 0;

}