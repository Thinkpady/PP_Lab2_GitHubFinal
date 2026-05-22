#include <iostream>

using namespace std;

int show_menu(int mode){
    // 1 - russian
    if (mode == 1){
        cout << "[--------Главное меню--------]\n";
        cout << "1 - Посмотреть таблицу по ученикам.\n";
        cout << "2 - Добавить ученика.\n";
        cout << "3 - Добавить данные ученика.\n";
        cout << "4 - Сформировать отчет по проведенным урокам.\n";
    }
    else if (mode == 2){
            cout << "[--------Main menu--------]\n";
            cout << "1 - View the table for students.\n";
            cout << "2 - Add a student.\n";
            cout << "3 - Add Student data.\n";
            cout << "4 - Generate a report on the lessons learned.\n";
    }
    return mode;
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    cout << "Введите 1 - если хотите продолжить на русском\n";
    cout << "Enter 2 if you want to continue in English.\n";
    
    int mode;
    cin >> mode;

    // Используем switch-case для выбора языка
    switch(mode) {
        case 1:
            show_menu(1);
            break;
        case 2:
            show_menu(2);
            break;
        default:
            cout << "Неверный выбор! Будет использован русский язык по умолчанию.\n";
            show_menu(1);
            break;
    }
    
    return 0;
}