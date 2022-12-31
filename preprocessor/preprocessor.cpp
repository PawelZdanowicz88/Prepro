#include <iostream>

int add(int a, int b)
{
    return (a + b);
}


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    int value1 = 0;
    int value2 = 0;

#define MODE 1

#if !defined(MODE)
#error undefined.
#endif
#if MODE 0
std::cout << "Работаю в режиме тренировки";
#endif
#if MODE 1
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
