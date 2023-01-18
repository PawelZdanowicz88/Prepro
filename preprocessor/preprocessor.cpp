#include <iostream>

#define MODE 1
#ifndef MODE
#error Undefined MODE
#endif

#if MODE == 1
int add(int a, int b)
{
    return (a + b);
}
#endif

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
#if MODE == 0
    std::cout << "Работаю в режиме тренировки";
#elif MODE == 1
    int value1 = 0;
    int value2 = 0;
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1: ";
    std::cin >> value1;
    std::cout << "Введите число 2: ";
    std::cin >> value2;
    std::cout << "Результат сложения: " << add(value1, value2);
#else 
    std::cout << "Неизвестный режим. Завершение работы";
#endif
    return 0;
}