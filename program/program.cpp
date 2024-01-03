#include <iostream>

using namespace std;


int main(void)
{

	//Here we go some input from user
	int answer;
	cout << "Welcome to simple calculator\n";
	cout << "1 - sum, 2 - min, 3- multiply, 4 - divide\n";
	cin >> answer;

	//If user want to sum numbers
	if (answer == 1) 
	{
		long SumFirst;
		long SumSecond;
		long SumAnswer;
		cout << "Enter First: \n";
		cin >> SumFirst;
		cout << "Enter Second \n";
		cin >> SumSecond;
		cout << SumFirst + SumSecond;
	}
		//if want to min numbers
	else if (answer == 2) 
	{
		long MinFirst;
		long MinSecond;
		long MinAnswer;
		cout << "Enter First: \n";
		cin >> MinFirst;
		cout << "Enter Second \n";
		cin >> MinSecond;
		MinAnswer = MinFirst - MinSecond;
		cout << MinAnswer;
		
	}
		//if want to multiply numbers
	else if (answer == 3)
	{
		long MultFirst;
		long MultSecond;
		long MultAnswer;
		cout << "Enter First: \n";
		cin >> MultFirst;
		cout << "Enter Second \n";
		cin >> MultSecond;
		MultAnswer = MultFirst * MultSecond;
		cout << MultAnswer;
	}
		//if want to divide numbers
	else if (answer == 4)
	{
		long DivFirst;
		long DivSecond;
		long DivAnswer;
		cout << "Enter First: \n";
		cin >> DivFirst;
		cout << "Enter Second \n";
		cin >> DivSecond;
		DivAnswer = DivFirst / DivSecond;
		cout << DivAnswer;
	}
		//if user try to use function that program doesn't has
	else
	{
		cout << "Maybe you want add this function?";
	}
	return 0;
}
