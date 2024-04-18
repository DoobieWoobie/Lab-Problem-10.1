#include <iostream>
#include <string>
using namespace std;

string scramble(string word);
int main()
{
	srand(time(0));
	string word;
	cout << "Input your quote: " << endl;
	getline(cin, word);
	cout << scramble(word);
}
string scramble(string word)
{
	char original;
	int swap1 = 0;
	int swap2 = 0;
	int lastletter = word.length() - 1;
	string originalword = word;
	while(word == originalword)
	{
		swap1 = rand() % word.length(); //random variable
		swap2 = rand() % word.length();
		original = word[swap2];
		//cout << "Wordlength: " << lastletter << endl;
		//cout << "Swaps: " << swap1 << swap2 << endl;
		if (word[swap1] != word[swap2])
		{
			if(swap1 != 0 && swap1 != lastletter && swap2 != 0 && swap2 != lastletter)
			{
				word[swap2] = word[swap1]; //Letter 1 and letter 2 are now the same
				word[swap1] = original; //takes swap 2 and replace swap 1
			}
		}
	}
	return word;
}