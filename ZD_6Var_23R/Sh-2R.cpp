
#include <iostream>
#include<math.h>
#include<cmath>
#include<string.h>
#include<fstream>
#include<ctime>
using namespace std;

void condition(int b)
{
    if (b == 1)
        cout << "Дана матрица A(n*m). Определить четные элементы, имеющие нечетную сумму индексов. Показать индексы этих элементов." << "\n"<<"\n";
}

void input(int n, int m, int arr1[10000], int** arr)
{
    int c = 0;
    for (int cnt1 = 0; cnt1 < n; cnt1++)
    {
        for (int cnt2 = 0; cnt2 < m; cnt2++)
        {
            arr[cnt1][cnt2] = arr1[c];
            c = c + 1;
        }
    }
}

void output(int d, int n, int m, int **arr)
{
    if (d == 1)
    {
        for (int cnt1 = 0; cnt1 < n; cnt1++)
        {
            for (int cnt2 = 0; cnt2 < m; cnt2++)
            {
                cout << "(" << cnt1 << ";" << cnt2 << ")";
                cout << arr[cnt1][cnt2] << " ";
                if (cnt2 == m - 1)
                    cout << "\n";
            }
        }
        cout << "\n";
    }
}

void task(int n, int m, int** arr)
{
    int count = 0;
    for (int cnt1 = 0; cnt1 < n; cnt1++)
    {
        for (int cnt2 = 0; cnt2 < m; cnt2++)
        {
            if ((cnt1+cnt2)%2!=0 && arr[cnt1][cnt2] % 2 == 0)
            {
                count = count + 1;
                cout << "(" << cnt1 << ";" << cnt2 << ")";
                cout << arr[cnt1][cnt2] << "\n";
            }
        }
    }
    if (count == 0)
        cout << "Чётных элементов, имеющих нечётную сумму индексов нет!" << "\n";
    cout << "\n";
}

int main()
{
    while (1)
    {
        setlocale(LC_ALL, "Russian");
        const int len = 10;
        char a[len];
        char a0[2] = "0";
        cout << "Выберите действие: " << "\n" << "любой символ - выполнить задачу" << "\n" << "0 - выход" << "\n";
        cin >> a;
        cout << "\n";
        if (strncmp(a, a0, 1) == 0)
            break;
        else
        {
            while (1)
            {
                int b;
                cout << "Вывести условие задачи?" << "\n";
                cout << "1 - да" << "\n";
                cout << "любое число - нет" << "\n";
                cin >> b;
                cout << "\n";
                condition(b);
                int c;
                cout << "Выберите режим работы программы: " << "\n";
                cout << "1 - Ввести матрицу числами из файла" << "\n";
                cout << "2 - Заполнить матрицу рандомными числами" << "\n";
                cin >> c;
                cout << "\n";
                switch (c)
                {
                case 1:
                {
                    int n, m;
                    cout << "Площадь матрицы(значение n*m) не должно превышать 10000!" << "\n" << "\n";
                    cout << "Введите значение n(кол-во строк матрицы)" << "\n";
                    cin >> n;
                    cout << "\n";
                    cout << "Введите значение m(кол-во столбцов матрицы)" << "\n";
                    cin >> m;
                    cout << "\n";
                    if (n * m > 10000)
                    {
                        cout << "Превышение допустимого кол-ва элементов!" << "\n"<<"\n";
                        break;
                    }
                    else
                    {
                        int** arr = new int* [n];//Инициализация матрицы
                        for (int cnt = 0; cnt < n; cnt++)
                            arr[cnt] = new int[m];
                        int f;
                        cout << "Выберите файл, из которого нужно ввести матрицу: " << "\n";
                        cout << "1 - file1" << "\n";
                        cout << "2 - file2" << "\n";
                        cout << "3 - file3" << "\n";
                        cout << "4 - file4" << "\n";
                        cin >> f;
                        cout << "\n";
                        ifstream File;
                        const int size = 10000;
                        switch (f)
                        {
                        case 1:
                        {
                            ifstream File("./File/file1.txt");
                            if (!File)
                            {
                                cout << "Файл не найден!" << "\n";
                                break;
                            }
                            else
                            {
                                int arr1[size];
                                for (int cnt = 0; cnt < n * m; cnt++)
                                {
                                    File >> arr1[cnt];
                                }
                                input(n, m, arr1, arr);
                                int d;
                                cout << "Вывести значения матрицы?" << "\n";
                                cout << "1 - да" << "\n";
                                cout << "любое число - нет" << "\n";
                                cin >> d;
                                cout << "\n";
                                output(d, n, m, arr);
                                task(n, m, arr);
                                break;
                            }
                        }
                        case 2:
                        {
                            ifstream File("./File/file2.txt");
                            if (!File)
                            {
                                cout << "Файл не найден!" << "\n";
                                break;
                            }
                            else
                            {
                                int arr1[size];
                                for (int cnt = 0; cnt < n * m; cnt++)
                                {
                                    File >> arr1[cnt];
                                }
                                input(n, m, arr1, arr);
                                int d;
                                cout << "Вывести значения матрицы?" << "\n";
                                cout << "1 - да" << "\n";
                                cout << "любое число - нет" << "\n";
                                cin >> d;
                                cout << "\n";
                                output(d, n, m, arr);
                                task(n, m, arr);
                                break;
                            }
                        }
                        case 3:
                        {
                            ifstream File("./File/file3.txt");
                            if (!File)
                            {
                                cout << "Файл не найден!" << "\n";
                                break;
                            }
                            else
                            {
                                int arr1[size];
                                for (int cnt = 0; cnt < n * m; cnt++)
                                {
                                    File >> arr1[cnt];
                                }
                                input(n, m, arr1, arr);
                                int d;
                                cout << "Вывести значения матрицы?" << "\n";
                                cout << "1 - да" << "\n";
                                cout << "любое число - нет" << "\n";
                                cin >> d;
                                cout << "\n";
                                output(d, n, m, arr);
                                task(n, m, arr);
                                break;
                            }
                        }
                        case 4:
                        {
                            ifstream File("./File/file4.txt");
                            if (!File)
                            {
                                cout << "Файл не найден!" << "\n";
                                break;
                            }
                            else
                            {
                                int arr1[size];
                                for (int cnt = 0; cnt < n * m; cnt++)
                                {
                                    File >> arr1[cnt];
                                }
                                input(n, m, arr1, arr);
                                int d;
                                cout << "Вывести значения матрицы?" << "\n";
                                cout << "1 - да" << "\n";
                                cout << "любое число - нет" << "\n";
                                cin >> d;
                                cout << "\n";
                                output(d, n, m, arr);
                                task(n, m, arr);
                                break;
                            }
                        }
                        default:
                        {
                            cout << "Введено некорректное значение!" << "\n"<<"\n";
                            break;
                        }
                        }
                        for (int cnt = 0; cnt < n; cnt++)//Удаление матрицы
                            delete[]arr[cnt];
                        break;
                    }
                }
                case 2:
                {
                    srand(time(0));
                    int n, m;
                    cout << "Введите значение n(кол-во строк матрицы)" << "\n";
                    cin >> n;
                    cout << "\n";
                    cout << "Введите значение m(кол-во столбцов матрицы)" << "\n";
                    cin >> m;
                    cout << "\n";
                    int** arr = new int* [n];//Инициализация матрицы
                    for (int cnt = 0; cnt < n; cnt++)
                        arr[cnt] = new int[m];
                    for (int cnt1 = 0; cnt1 < n; cnt1++)
                        for (int cnt2 = 0; cnt2 < m; cnt2++)
                            arr[cnt1][cnt2] = rand() % 100000 - 100000;
                    int d;
                    cout << "Вывести значения матрицы?" << "\n";
                    cout << "1 - да" << "\n";
                    cout << "любое число - нет" << "\n";
                    cin >> d;
                    cout << "\n";
                    output(d, n, m, arr);
                    task(n, m, arr);
                    for (int cnt = 0; cnt < n; cnt++)//Удаление матрицы
                        delete[] arr[cnt];
                    break;
                }
                default:
                {
                    cout << "Введено некорректное число!" << "\n"<<"\n";
                    break;
                }
                }
                break;
            }
        }
    }
}