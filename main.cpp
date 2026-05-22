#include <iostream>

using namespace std;

void show_menu(int mode){
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
}
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    show_menu(1);
    return 0;
}