//Определить класс с именем Printer содержащий следующие поля: страна производитель; скорость печати (в мин); качество печати; цена. 
//Demidovich Nikita, RUDN, NKAbd-01-22, 20.12.2022

#include <iostream>
#include <cstring>


using namespace std;

class Printer {
private:
    string country_of_manifacture; // страна производитель
    string quality; // качество
    int speed; // скорость печати
    int price; // цена
public:
    Printer(string com, string qu, int sp, int pr) { // Конструктор с 4 параметрами
        country_of_manifacture = com;
        quality = qu;
        speed = sp;
        price = pr;
    }

    Printer() { // Пустой конструктор
        country_of_manifacture = "";
        quality = "";
        speed = 0;
        price = 0;
    }
    ~Printer() { // Деструктор
    }

    // Функция вывода
    void output() {
        cout << endl << "********************" << endl;
        cout << "Страна производитель: " << country_of_manifacture << endl;
        cout << "Качество: " << quality << endl;
        cout << "Скорость печати: " << speed << endl;
        cout << "Цена: " << price << endl;
    }

    void cost(int m) {
        cout << "Это будет стоить " << m * price << endl;
    }

};

int main() {

    setlocale(LC_ALL, "Russian");
    cout << "Определить класс с именем Printer содержащий следующие поля: страна производитель; скорость печати (в мин); качество печати; цена. " << endl;

    Printer printer("Индонезия", "Хорошее", 5, 250);

    printer.output();


    cout << "Введите, сколько листов вы хотите напечатать: ";
    int n;
    cin >> n;

    printer.cost(n);

    return 0;
}
