#include <iostream>
#include <sstream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {
	int target;
	string userS;
	int guess = -1;
	
	srand(time(NULL));
	target = rand() % 100 + 1;

	while (guess!=target) {
		cout << "Guess a number between 0 and 100: ";
		getline(std::cin, userS);

		stringstream(userS) >> guess;
		cout << userS << "\n";
		
		if (guess > target) {
			cout << "Your guess is too high!\n";
		}else if (guess < target) {
			cout << "Your guess is too low!\n";
		}
		else {
			cout << "Your guess is correct!\n";
		}

		if (userS == "q") {
			cout << "good bye";
			cout << "The number was " << target << "\n";
			break;
		}
	}

	return 0;
}