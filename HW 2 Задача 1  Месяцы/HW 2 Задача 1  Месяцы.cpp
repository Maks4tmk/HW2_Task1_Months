// HW 2 Задача 1  Месяцы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class months {
    Goodbye,
    January, 
    February, 
    March, 
    April, 
    May, 
    June, 
    July, 
    August, 
    September, 
    October, 
    November, 
    December
};


int main(){

    setlocale(LC_ALL,"ru");


    int num_m = 1;
    
    while (!(num_m == 0)) {
        std::cout << "Введите номер месяца:";
        std::cin >> num_m;

        if (num_m < 13) {
            switch (static_cast<months>(num_m)){
                case months::Goodbye:std::cout << "До свидания" << std::endl;
                    break;
                case months::January:std::cout << "Январь" << std::endl;
                    break;
                case months::February:std::cout << "Февраль" << std::endl;
                    break;
                case months::March:std::cout << "Март" << std::endl;
                    break;
                case months::April:std::cout << "Апрель" << std::endl;
                    break;
                case months::May:std::cout << "Май" << std::endl;
                    break;
                case months::June:std::cout << "Июнь" << std::endl;
                    break;
                case months::July:std::cout << "Июль" << std::endl;
                    break;
                case months::August:std::cout << "Август" << std::endl;
                    break;
                case months::September:std::cout << "Сентябрь" << std::endl;
                    break;
                case months::October:std::cout << "Октябрь" << std::endl;
                    break;
                case months::November:std::cout << "Ноябрь" << std::endl;
                    break;
                case months::December:std::cout << "Декабрь" << std::endl;
                    break;
            }
        }
        else {
            std::cout << "Неправильный номер!" << std::endl;
        }
    }
    
    return 0;


}