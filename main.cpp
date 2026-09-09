#include <iostream>
using namespace std;

int main() {
    int choice;
    char playAgain;

    do {
        int health = 100;
        int coins = 0;

        cout << "============================\n";
        cout << "      FOREST ADVENTURE\n";
        cout << "============================\n";

        cout << "\nYou wake up in a mysterious forest.\n";
        cout << "You see a house and a cave.\n";

        cout << "\n1. Enter the house\n";
        cout << "2. Enter the cave\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nYou enter the house.\n";
            cout << "You find a treasure chest!\n";

            cout << "\n1. Open the chest\n";
            cout << "2. Leave the house\n";
            cout << "Choose: ";
            cin >> choice;

            if (choice == 1) {
                coins += 100;
                cout << "\nYou found 100 coins!\n";
                cout << "You WIN!\n";
            }
            else {
                cout << "\nYou leave the house safely.\n";
                cout << "You survived the forest!\n";
            }
        }
        else if (choice == 2) {
            cout << "\nYou enter the cave.\n";
            cout << "A bear appears!\n";

            cout << "\n1. Run away\n";
            cout << "2. Fight the bear\n";
            cout << "Choose: ";
            cin >> choice;

            if (choice == 1) {
                health -= 20;
                cout << "\nYou escaped!\n";
                cout << "Health: " << health << endl;
            }
            else {
                health = 0;
                cout << "\nThe bear defeated you.\n";
                cout << "GAME OVER!\n";
            }
        }
        else {
            cout << "\nInvalid choice.\n";
        }

        cout << "\nPlay again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing!\n";

    return 0;
}
