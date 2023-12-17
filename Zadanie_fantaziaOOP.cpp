// Zadanie_fantaziaOOP.cpp 

#include "Class.h"

int main()
{
    setlocale(LC_ALL, "RU");
    string name1;
    int vz;
    int* ocenki = new int [10];

    cout << "Программа для заполнения информации ученика!" << endl;

    cout << endl;

    cout << "Введите Ф.И.О ученика: ";
    getline(cin, name1);

    cout << endl;

    cout << "Введите возраст ученика: ";
    cin >> vz;

    cout << endl;

    cout << "Заполните оценки ученика (10 - оценок максимум): ";
    for (int i = 0; i < 10; i++) 
    {
        cin >> ocenki[i];
    }
    
    Dnevnik<int> a{ name1, vz };
    a.print();
    Dnevnik<int> b{ *ocenki };

    
   
   
    
}


