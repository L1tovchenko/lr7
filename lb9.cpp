// lb9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

    int const k = 10;
    double S[k], sum = 0, sra = 0, min = 0;
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < k; i++)
    {
        cin >> S[i];
    }
    for (int i = 0; i < k; i++)
    {
        if (i % 2)
        {
            sum += S[i];

        }
        for (int i = 0; i < k; ++i)
        {
            if (S[i] > 0)
            {
                min = S[i];
                sra = (S[0] + min)/2;
                break;
            }
        }
    }
    cout << "Сумма= " << sum << "\n" << "Сред ариф первого и первого положительного = " << sra;

    return 0;
}