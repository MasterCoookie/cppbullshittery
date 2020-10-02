#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    //string, simple shit
    string welcomeString = "Hello ";

    string yourName;
    cout << "Whats your name? ";

    //user input - metoda, zmienna
    getline(cin, yourName);

    //łączenie stringów (w zmiennych) - "+"
    cout << welcomeString + yourName << "! " << endl;

    double eulersConstant = .57721;
    string eulersGuess;
    double eulersGuessDouble;

    cout << "What is Euler's Constant? ";
    getline(cin, eulersGuess);

    //konwertowanie user inputu (zawsze jest nim string) do użytkowych typów zmiennych np double
    //stod() zmienia stringa w double'a, stoi w int'a
    eulersGuessDouble = stod(eulersGuess);

    if (eulersGuessDouble == eulersConstant)
    {
        cout << yourName << ", You are right! " << endl;
    }
    else
    {
        cout << yourName << ", You are wrong! " << endl;
    }

    return 0;
}