#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    int player1;
    int player2;
    srand(time(NULL));
    char number[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int x = rand() % 4;
    if(x == 0 || x == 1) {
        cout << "Player " << x << " starts first!" << endl;
        cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
        cout << "---------" << endl;
        cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
        cout << "---------" << endl;
        cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
        for (int i=0; i<8; i++) {
            cout << "Player 1, enter your number: ";
            cin >> player1;
            cin.get();
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            number[player1-1] = 'X';
            cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
            cout << "---------" << endl;
            cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
            cout << "---------" << endl;
            cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
            if ((number[0] == 'X' && number[1] == 'X' && number[2] == 'X') || (number[3] == 'X' && number[4] == 'X' && number[5] == 'X') || (number[6] == 'X' && number[7] == 'X' && number[8] == 'X') || (number[0] == 'X' &&  number[3] == 'X' && number[6] == 'X') || (number[1] == 'X' && number[4] == 'X' && number[7] == 'X') || (number[2] == 'X' && number[5] == 'X' && number[8] == 'X') || (number[0] == 'X' && number[4] == 'X' && number[8] == 'X') || (number[2] == 'X' && number[4] == 'X' && number[6] == 'X')) {
                cout << "Player 1 wins!" << endl;
                break;
            }
            cout << "Player 2, enter your number: ";
            cin >> player2;
            cin.get();
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            number[player2-1] = 'O';
            cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
            cout << "---------" << endl;
            cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
            cout << "---------" << endl;
            cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
            if ((number[0] == 'O' && number[1] == 'O' && number[2] == 'O') || (number[3] == 'O' && number[4] == 'O' && number[5] == 'O') || (number[6] == 'O' && number[7] == 'O' && number[8] == 'O') || (number[0] == 'O' && number[3] == 'O' && number[6] == 'O') || (number[1] == 'O' && number[4] == 'O' &&number[7] == 'O') || (number[2] == 'O' && number[5] == 'O' && number[8] == 'O') || (number[0] == 'O' && number[4] == 'O' && number[8] == 'O') || (number[2] == 'O' && number[4] == 'O' && number[6] == 'O')) {
                cout << "Player 2 wins!" << endl;
                break;
            }
        }
    }
    else {
        cout << "Player 2 starts first!" << endl;
        cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
        cout << "---------" << endl;
        cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
        cout << "---------" << endl;
        cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
        for (int i=0; i<8; i++) {
            cout << "Player 2, enter your number: ";
            cin >> player2;
            cin.get();
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            number[player2-1] = 'X';
            cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
            cout << "---------" << endl;
            cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
            cout << "---------" << endl;
            cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
            if ((number[0] == 'X' && number[1] == 'X' && number[2] == 'X') || (number[3] == 'X' && number[4] == 'X' && number[5] == 'X') || (number[6] == 'X' && number[7] == 'X' && number[8] == 'X') || (number[0] == 'X' &&  number[3] == 'X' && number[6] == 'X') || (number[1] == 'X' && number[4] == 'X' && number[7] == 'X') || (number[2] == 'X' && number[5] == 'X' && number[8] == 'X') || (number[0] == 'X' && number[4] == 'X' && number[8] == 'X') || (number[2] == 'X' && number[4] == 'X' && number[6] == 'X')) {
                cout << "Player 2 wins!" << endl;
                break;
            }
            cout << "Player 1, enter your number: ";
            cin >> player1;
            cin.get();
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            number[player1-1] = 'O';
            cout << number[0] << " | " << number[1] << " | " << number[2] << endl;
            cout << "---------" << endl;
            cout << number[3] << " | " << number[4] << " | " << number[5] << endl;
            cout << "---------" << endl;
            cout << number[6] << " | " << number[7] << " | " << number[8] << endl;
            if ((number[0] == 'O' && number[1] == 'O' && number[2] == 'O') || (number[3] == 'O' && number[4] == 'O' && number[5] == 'O') || (number[6] == 'O' && number[7] == 'O' && number[8] == 'O') || (number[0] == 'O' && number[3] == 'O' && number[6] == 'O') || (number[1] == 'O' && number[4] == 'O' &&number[7] == 'O') || (number[2] == 'O' && number[5] == 'O' && number[8] == 'O') || (number[0] == 'O' && number[4] == 'O' && number[8] == 'O') || (number[2] == 'O' && number[4] == 'O' && number[6] == 'O')) {
                cout << "Player 1 wins!" << endl;
                break;
            }
        }
    }
}