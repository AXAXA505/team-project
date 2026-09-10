// Командный проект. Группа ПИ-52.
// Команда: Репина (в. 95), Стороженко (в. 98, техлид).
#include <iostream>
#include <math.h>
#include <windows.h>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "repina.h"
// #include "storozh.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
void setConsoleUTF8() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}
using namespace std;


int main() {
    setConsoleUTF8();
    int choice;
        do {
            cout << "\n=== Командный проект: сборник расчётов ===\n";
            // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
            cout << "1.Штраф\n";
            cout << "2.Итоговая сумма со штрафом\n";
            // === КОНЕЦ БЛОКА МЕНЮ ===
            cout << "0. Выход\n";
            cout << "Выберите пункт: ";
            cin >> choice;
            switch (choice) {
                // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
                case 1:
                    {double dept, p;
                    int days;
                    cout << "Введите сумму задолженности, начисляемый процент и количество дней: ";
                    cin >> dept >> p >> days;
                    cout << "Штраф = " << penalty(dept, p, days) << "\n";
                    break;}
                case 2:
                    {double dept, p;
                    int days;
                    cout << "Введите сумму задолженности, начисляемый процент и количество дней: ";
                    cin >> dept >> p >> days;
                    cout << "Итоговая сумма со штрафом = " << totalWithPenalty(dept, p, days) << "\n";
                    break;}
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