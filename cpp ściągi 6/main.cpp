#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

main()
{
    string steveQuote = "A day without a sunshine is like, you know,  night";

    //tworzenie streamu
    ofstream writer("steavequote.txt");

    //sprawdzanie, czy żeczywiście został otworzony
    if (!writer)
    {
        cout << "Error opening the file" << endl;
        return -1;
    }
    else
    {
        //napisanie pliku
        writer << steveQuote << endl;

        //zamknięcie streamu
        writer.close();
    }

    //tworzenie nowego streamu, gdyż tamten został zamknięty
    //ios::app - dodawanie do tego, co w pliku już istnieje
    //ofsteram - output
    //ifstream - input
    ofstream writer2("steavequote.txt", ios::app);

    //sprawdzanie, czy żeczywiście został otworzony once again
    if (!writer2)
    {
        cout << "Error opening the file" << endl;
        return -1;
    }
    else
    {
        //napisanie pliku
        writer2 << "\n ~Steave Martin" << endl;

        //zamknięcie streamu
        writer2.close();
    }

    //zmienna, która przechowuje każdą 1 literę z pliku
    char letter;

    ifstream reader("steavequote.txt");

    //sprawdzenie po raz kolejny
    if (!reader)
    {
        cout << "Error opening the file" << endl;
        return -1;
    }
    else
    {
        //czytanie każdej litery for loop
        //2 parametr, oznacza kontynuacje, dopuki nie dojdziemy do kocna pliku
        for (int i = 0; !reader.eof(); i++)
        {
            reader.get(letter);
            cout << letter;
        }

        cout << endl;
        reader.close();

        int num;
        cout << "Podaj wybrany dzielnik liczby 2: " << endl;
        cin >> num;
        cout << endl;
        //w try wpisujemy kod, który potencjalnie może wywołać errory
        try
        {

            if (num != 0)
            {
                cout << 2 / num << endl;
            }
            // throw rzuca wyjątkiem, który później może zostać złapany przez catch
            else
                throw(num);
        }
        //łapie wyjątek, dobrze podać jaki
        catch (int num)
        {
            cout << num << " jest blednym dzielnikiem!" << endl;
        }
    }
    system("pause");

    return 0;
}