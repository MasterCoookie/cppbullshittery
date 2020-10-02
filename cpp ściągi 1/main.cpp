#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    cout << "Hello World" << endl;
    //stała, zawsze same duże litery
    //double - liczba z przecinkiem, zazwyczaj 15 po przecinku
    const double PI = 3.1415926535;
    // jedna litera
    char myGrade = 'A';
    //true/false, nazwa zawsze z "is" na początku
    bool isHappy = true;
    //liczba całkowita
    int myAge = 17;
    //liczba z przecinkiem, zazwyczaj 6 po przecinku
    float favNum = 8.8888;

    cout << "Favourite number: " << favNum << endl;

    //sprawdzanie rozmiarów w bajtach

    cout << "Size of this var: " << sizeof(isHappy) << endl;

    // "%" - reszta z dzielenia

    /*  variable = (condition) ? true : false
    ustalanie wartości zmiennej na podstawie "conditon" */

    int largestNum = (5 > 6) ? 5 : 6;
    cout << largestNum << endl;

    return 0;
}