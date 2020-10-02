#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

/* funkcje definiowane przed main()
zwykła funkcja musi mieć podany typ zmiennej którą zwraca
typ zmiennych otrzymywanych przez funkcję również musi zostać podany (atrybut)
jeśli chcemy zdefiniować attrybut, musimy podać go jako ostatni*/
int addNumbers(int firstNum, int secondNum = 0)
{

    int combinedValue = firstNum + secondNum;
    return combinedValue;
}

//nazwy funkcji mogą się powtarzać, jeśli zmienimy atrybuty
int addNumbers(int firstNum, int secondNum, int thirdNum)
{
    //całość można wpisać w return od razu
    return firstNum + secondNum + thirdNum;
}

//funkcje void nie zwracają wartości (nie mają return)
//& oznacza, że podana zmienna jest automatycznie updateowana
void modify(int &mod, bool &err)
{
    cout << "Pick a modification:\n1- add one\n2 - minus one\n3 - times two\nYour Selection is: ";
    int option;
    cin >> option;
    if (option == 1)
    {
        mod++;
    }
    else if (option == 2)
    {
        mod--;
    }
    else if (option == 3)
    {
        mod = mod * 2;
    }
    else
    {
        err = true;
        cout << endl
             << "Nie ma takiej opcji!";
    }
}

int main()
{
    while (1)
    {
        cout << addNumbers(1) << endl;

        cout << addNumbers(1, 5, 6) << endl;

        int num;
        bool err;
        cout << "Enter a number " << endl;
        cin >> num;
        cout << endl;

        modify(num, err);
        if (!err)
        {
            cout << "Zmodyfikowana zmienna wynosi: " << num << endl;
        }
    }

    return 0;
}