#include <iostream>

int main()
{
    const int size{ 5 };
    int pascal[size][size]{};

    for (int i = 0; i < size; ++i)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < (size - 1) - i; ++j)
        {
            std::cout << "  ";
        }
        for (int n = 0; n <= i; n++)
        {
            if (pascal[i][n] < 10)
            {
                std::cout << "0";
            }
            std::cout << pascal[i][n] << "  ";
        }

        std::cout << std::endl;
    }
}