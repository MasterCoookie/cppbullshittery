#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    // vectory - arr o zmiennym rozmiarze
    vector<int> lotteryNumVect(10);

    int lotteryNumArray[5] = {4, 13, 14, 24, 34};
    int lotteryNumArray2[2] = {67, 9};

    //dodawanie array'a do vektora przy pomocy insert - gdzie w vectorze, array dodawany oraz ilość elementów z tego arr
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);

    //znajdowanie konkretnego elementu po indeksie
    cout << lotteryNumVect.at(2) << endl;

    //dodawanie na koncu wektora
    lotteryNumVect.push_back(6);

    //znajdowanie konca wektora (front zamiast back dla początku)
    cout << lotteryNumVect.back() << endl;
    system("pause");
    return 0;
}