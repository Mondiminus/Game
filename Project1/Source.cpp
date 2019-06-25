#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	srand(unsigned(time(NULL)));
	char playerName[32];
	char playerAI[] = "Vatson";

	int playerScore = 0, aiScore = 0;
	int playerDiceOne = 0, plaerDiceSecont = 0;
	int aiDiceOne = 0, aiDiceSecond = 0;
	int aiDiceSum = 0;
	int playerDiceSum = 0;


	int n = 0;
	bool exit = false;

	cout << "<<<============================DICE GAME===================\n";
	cout << "<<<=================                       ================\n";
	cout << "<<<==============                                     =====\n";
	cout << "<<<================                             ===========\n";
	cout << "<<<=====                                               == =\n";
	cout << "<<<==========                             =================\n";
	cout << "<<<============                               =============\n";
	cout << "<<<============================DICE GAME===================\n";

	cout << "Enter your name = = = =" << endl;
	cin >> playerName;
	cout << "Enter score to win" << endl;
	cin >> n;
	cout << playerName << " VS " << playerAI << endl;




	cout << "--------------------->>>Start<<<--------------------------" << endl;
	while (!exit)
	{
		cout << playerAI << " throw...." << endl;
		aiDiceOne = rand() % 6 + 1;
		aiDiceSecond = rand()%6 + 1;
		aiDiceSum = aiDiceOne + aiDiceSecond;
		cout << "First"<<aiDiceOne<<" Second "<<aiDiceSecond<<"Suma="<<aiDiceSum << endl;
		cout << " Your throw..." << endl;
		system("pause");
		cout << playerName << " throw..."<< endl;
		exit = true;
	}

	system("pause");
	return 0;
}