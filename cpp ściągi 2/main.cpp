#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    //arr musi mieć ten sam typ zmiennych, podawany w [] rozmiar i wartości podawane w {}
    int myFavNums[5];

    int badNums[4] = {4, 13, 14, 24};
    cout << "Pierwszy badNum: " << badNums[0] << endl;

    //wielowymiarowe arr, kolejno w [] podajemy rozmiar głownego arr a później kolejnych głębiej
    char myName[2][7] = {{'J', 'a', 'n'}, {'K', 'o', 'c', 'u', 'r', 'e', 'k'}};
    cout << "Trzecia litera nazwiska: " << myName[1][2] << endl;

    //zmiana wartości wybarnego elementu arr:
    myName[1][2] = 'x';
    cout << "Trzecia litera nazwiska po zmianie: " << myName[1][2] << endl;

    //generowanie losowej liczby
    int randNum = 1 + rand() % 20;

    cout << randNum << endl;

    while (randNum != 20)
    {
        cout << randNum << ", ";
        randNum = 1 + rand() % 20;
    }

    return 0;
}