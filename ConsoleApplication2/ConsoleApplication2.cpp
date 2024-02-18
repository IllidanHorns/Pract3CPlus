
#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    float numbers[3][5];

    for (int i{}; i < 3; i++)
    {
        std::cout << "Введиде значение строки номер - ";
        std::cout << i + 1;
        std::cout << "\n";
        for (int j{}; j < 5; j++)
        {
            std::cin >> numbers[i][j];
        }
    }

    for (int i{}; i < 3; i++)
    {
        float Count{};
        for (int j{}; j < 5; j++)
        {
            Count = Count + numbers[i][j];
        }
        std::cout << "Сумма элементов строки №";
        std::cout << i + 1;
        std::cout << " - ";
        std::cout << Count;
        std::cout << "\n";
        Count = 0;
    }
}



