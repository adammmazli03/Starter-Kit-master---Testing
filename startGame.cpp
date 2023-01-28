#include <iostream>
#include <string>
#include <cstdlib>
#include "newGame.cpp"
#include "loadGame.cpp"
using namespace std;

void startGame()
{
    string mainMenu_option;

    cout << endl;
    cout << endl;
    cout << "  AA  L    III EEEE N   N   V     V  SSS   ZZZZZ  OOO  M   M  BBBB  III EEEE " << endl;
    cout << " A  A L     I  E    NN  N   V     V S         Z  O   O MM MM  B   B  I  E    " << endl;
    cout << " AAAA L     I  EEE  N N N    V   V   SSS     Z   O   O M M M  BBBB   I  EEE  " << endl;
    cout << " A  A L     I  E    N  NN     V V       S   Z    O   O M   M  B   B  I  E    " << endl;
    cout << " A  A LLLL III EEEE N   N      V    SSSS   ZZZZZ  OOO  M   M  BBBB  III EEEE " << endl;
    cout << endl;
    cout << endl;
    cout << "                       ___________________________________                   " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |             WELCOME!!             |                  " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |             > START <             |                  " << endl;
    cout << "                      |             > LOAD  <             |                  " << endl;
    cout << "                      |             > EXIT  <             |                  " << endl;
    cout << "                      |                                   |                  " << endl;
    cout << "                      |___________________________________|                  " << endl;
    cout << endl;
    cout << endl;
    cout << "select ==> ";
    cin >> mainMenu_option;

    int x_axis;
    int y_axis;
    int zombie;

    for (int i = 0; i < mainMenu_option.length(); i++)
    {
        mainMenu_option[i] = toupper(mainMenu_option[i]);
    }

    // START OPTION
    if (mainMenu_option == "START")
    {
        newGame();
    }

    // LOAD OPTION
    else if (mainMenu_option == "LOAD")
    {
        loadGame();
    }

    // EXIT OPTION
    else if (mainMenu_option == "EXIT")
    {
        string exit;
        cout << "Are you sure? (YES/NO)" << endl;
        cin >> exit;
        cout << endl;
        for (int j = 0; j < exit.length(); j++)
        {
            exit[j] = toupper(exit[j]);
        }

        if (exit == "YES")
        {
            cout << endl;
            cout << "Thank You, see you next time!" << endl;
            system("pause");
        }

        else if (exit == "NO")
        {
            cout << endl;
            system("CLS");
            system("clear");
            startGame();
        }

        else
        {
            cout << "Input Error!!" << endl;
            cout << endl;
            startGame();
        }
    }

    else
    {
        cout << "Input Error!!" << endl;
        cout << endl;
        startGame();
    }
}
