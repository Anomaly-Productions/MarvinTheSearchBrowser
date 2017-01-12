/*
Anomaly Productions presents:
************************
Marvin the search browser
************************

written by Bramwell Simpson
*/
#include <iostream>	//without this, what is c++?
#include <string>	//string support
#include <array>	//Array support
#include <ctime>	//To make the random number even more random
#include <cstdlib> //Random support

using namespace std;

string getName(void)
{
	string name;
	//Welcoming the user
	cout << "Welcome to the first offline search browser!" << endl;
	cout << "However, you have been selected to have an experimental version of this browser!" << endl;
	cout << "It has a personality!" << endl;

	cout << "So the browser can know you better, please enter your name:";
	cin >> name;

	//cout << "Thank you for entering your name %s" %s name << endl;
	cout << "Thankyou " << name << endl;

	return name;
}

int main()
{
	srand((int)time(0));
	string ans;
	bool quit = false;
	string name = getName(); //Setting name to the function
	
	string answers[] = { "I would tell you the answer, but you wouldn't like it.", "I would tell you the answer, but you wouldn't read it.", \
		"*Sigh* I'm the most powerful browser in the world, but you just want me to do that.", "Yes, I know the answer but it's completely rubbish and boring, like me." \
	};

	const int ARRAY_SIZE = 3;

	cout << "Ready to take your questions" << name << endl;
	//^ the depressed browser's answers
	while (quit == false)
	{
		cout << "> ";
		getline(cin, ans);
		cout << answers[rand() % ARRAY_SIZE] << endl;
		if (ans == "quit" || ans == "Quit" || ans == "QUIT")
		{
			quit = true;
		}
	}
	return 0;
}
