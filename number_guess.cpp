#include <iostream>
using namespace std;

int main() {
int secretNumber = 67; // The number to guess

for (int i = 1; i <= 5; i++) { // Allow the user to guess up to 5 times

int guess; // The user's guess
cout << "Type a number between 1 and 100: ";
cin >> guess; // Get the user's guess

if (guess > 100 || guess < 1)
{
    cout << "Number should be between 1 and 100" << endl;
    continue;
}
   
    if(guess>secretNumber) {
        cout << "Wrong guess think lesser" << endl;
    } else if(guess<secretNumber) {
        cout << "Wrong guess think greater" << endl;
    } else {
        cout << "Congratulations! this is the right guess :)" << endl;
        break;
    }

    if (i == 5) {
        cout << "Noob! secret number was " << secretNumber << endl;
    }
}
    return 0;
}