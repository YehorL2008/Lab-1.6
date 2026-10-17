#include <iostream>

using namespace std;

int main(){

    // Опис констант символьного типу
    const char DefaultSymbol = 'A';
    
    // Опис змінних символьного типу
    char FirstLit, SecondLit, ThirdLit;
    char FirstCode, SecondCode, ThirdCode;

    // Ініціювання об'єктів при опису
    char InitChar =  'Z';

    // Ініціювання об'єктів оператором привласнення (Варіант 5)
    FirstLit = '=';
    SecondLit = '5';
    ThirdLit = 'd';
    FirstCode = 0x56;
    SecondCode = 0x10;
    ThirdCode = 0x72;

    // Виведення результатів
    cout << "Константа : " << DefaultSymbol << endl;
    cout << "Ініційована : " << InitChar << endl;
    cout << "Літерал 1 ('='): " << FirstLit << endl;
    cout << "Літерал 2 ('5'): " << SecondLit << endl;
    cout << "Літерал 3 ('d'): " << ThirdLit << endl;
    cout << "Код 1 (0x56): " << FirstCode << endl;
    cout << "Код 2 (0x10): " << SecondCode << endl;
    cout << "Код 3 (0x72): " << ThirdCode << endl;

    return 0;
}