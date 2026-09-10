// Командный проект. Группа ПИ-52.
// Команда: Репина (в. 95), Стороженко (в. 98, техлид).
#include <iostream>
#include <math.h>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
// #include "repina.h"
#include "storozh.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;


int main() {
    int choice;
        do {
            cout << "\n=== Командный проект: сборник расчётов ===\n";
            // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
            // === КОНЕЦ БЛОКА МЕНЮ ===
            cout << "3. Будущая цена\n";
            cout << "4. Реальная стоимость\n";
            cout << "0. Выход\n";
            cout << "Выберите пункт: ";
            cin >> choice;
            switch (choice) {
                // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
                case 3:
                    double price, inf; int n;
                    cout << "\n Введите цену, инфляцию и число лет: ";
                    cin >> price >> inf >> n;
                    cout << "Будущая цена: " << futurePrice(price,inf,n) << "\n";
                    break;
                case 4:
                    double sum;
                    cout << "\n Введите сумму, инфляцию и число лет: ";
                    cin >> sum >> inf >> n;
                    cout << "Реальная стоимость: " << purchasingPower(sum,inf,n);
                    break;
                // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
                case 0:
                    cout << "Работа завершена.\n";
                    break;
                default:
                    cout << "Такого пункта нет.\n";
            }
        } while (choice != 0);
    return 0;
}