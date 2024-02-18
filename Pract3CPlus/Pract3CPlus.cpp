#include <iostream>
#include <format>

int main()
{
    float numbers[3][5];

    for (int i; i < 3; i++)
    {
        std::cout << "Введиде значение строки номер - ";
        std::cout << i + 1;
        for (int j; j < 5; j++)
        {
            std::cin >> numbers[i][j];
        }
    }
}
