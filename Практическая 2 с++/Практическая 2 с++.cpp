#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// функция для вычисления факториала через рекурсию
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// функция для обмена значений двух переменных
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// функция для вывода элементов массива на экран
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// функция для вычисления суммы элементов массива
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// функция для вычисления среднего арифметического элементов массива
float averageArray(int* arr, int size) {
    int sum = sumArray(arr, size);
    float average = static_cast<float>(sum) / static_cast<float>(size);
    return average;
}

// функция для создания и заполнения двумерного массива случайными числами
void fillArray(int** arr, int n, int m) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100 + 1;
        }
    }
}

// функция для вычисления суммы всех элементов двумерного массива
int sumMatrix(int** arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << endl;
    }
    return sum;
}

int main() {
    setlocale(0, "");
    int choice, n, m;
input:
    while (true)
    {
        cout << "Выберите задание: " << endl;
        cout << "1. Факториал через рекурсию" << endl;
        cout << "2. Обмен значениями двух переменных" << endl;
        cout << "3. Вычисление суммы элементов массива" << endl;
        cout << "4. Вывод элементов массива на экран" << endl;
        cout << "5. Вычисление среднего арифметического элементов массива" << endl;
        cout << "6. Ввести N чисел вручную и вывести их в виде массива" << endl;
        cout << "7. Создание и заполнение двумерного массива случайными числами" << endl;
        cout << "8. Вычисление суммы всех элементов двумерного массива" << endl;
        cout << "9. Поиск наименьшего элемента в массиве" << endl;
        cout << "10. Выход" << endl;
        cout << "Введите номер задания: ";
        cin >> choice;

        switch (choice) {
        case 1:
            int num;
            cout << "Введите число для вычисления факториала: ";
            cin >> num;
            cout << "Факториал числа " << num << " равен " << factorial(num) << endl;
            system("pause");
            system("cls");
            break;
        case 2:
            int x, y;
            cout << "Введите два числа для обмена их значениями: ";
            cin >> x >> y;
            swap(&x, &y);
            cout << "После обмена: x = " << x << ", y = " << y << endl;
            system("pause");
            system("cls");
            break;
        case 3:
            int arrSize;
            cout << "Введите размер массива: ";
            cin >> arrSize;
            int* arr;
            arr = new int[arrSize];
            cout << "Введите элементы массива: ";
            for (int i = 0; i < arrSize; i++) {
                cin >> arr[i];
            }
            cout << "Сумма элементов массива: " << sumArray(arr, arrSize) << endl;
            system("pause");
            system("cls");
            break;
        case 4:
            int size;
            cout << "Введите размер массива: ";
            cin >> size;
            int* array;
            array = new int[size];
            cout << "Введите элементы массива: ";
            for (int i = 0; i < size; i++) {
                cin >> array[i];
            }
            printArray(array, size);
            system("pause");
            system("cls");
            break;
        case 5:
            int sizeArr;
            cout << "Введите размер массива: ";
            cin >> sizeArr;
            int* a;
            a = new int[sizeArr];
            cout << "Введите элементы массива: ";
            for (int i = 0; i < sizeArr; i++) {
                cin >> a[i];
            }
            cout << "Среднее арифметическое элементов массива: " << averageArray(a, sizeArr) << endl;
            system("pause");
            system("cls");
            break;
        case 6:
            cout << "Введите размер массива: ";
            cin >> n;
            arr = new int[n];
            cout << "Введите " << n << " чисел:\n";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            cout << "Введенный массив:\n";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            delete[] arr;
            system("pause");
            system("cls");
            break;
        case 7:
            cout << "Введите количество строк и столбцов двумерного массива: ";
            cin >> n >> m;
            int** matrix;
            matrix = new int* [n];
            for (int i = 0; i < n; i++) {
                matrix[i] = new int[m];
            }
            fillArray(matrix, n, m);
            cout << "Двумерный массив:" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
            system("pause");
            system("cls");
            break;
        case 8:
            cout << "Введите количество строк и столбцов двумерного массива: ";
            cin >> n >> m;
            int** arrMatrix;
            arrMatrix = new int* [n];
            for (int i = 0; i < n; i++) {
                arrMatrix[i] = new int[m];
            }
            fillArray(arrMatrix, n, m);
            cout << "Сумма всех элементов двумерного массива: " << sumMatrix(arrMatrix, n, m) << endl;
            system("pause");
            system("cls");
            break;
        case 9: {
            cout << "Введите размер массива: ";
            cin >> size;

            // выделение памяти для массива
            int* arr = new int[size];

            // заполнение массива случайными числами от 1 до 100
            srand(time(nullptr));
            for (int i = 0; i < size; i++) {
                arr[i] = rand() % 100 + 1;
            }

            // поиск наименьшего элемента
            int min = arr[0];
            for (int i = 1; i < size; i++) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }

            cout << "Самым маленьким элементом массива является: " << min << std::endl;

            // освобождение памяти
            delete[] arr;
            system("pause");
            system("cls");
            break;
        }
        case 10:
            system("cls");
            exit(0);
        default:
            printf("Не правильный выбор, повтори ещё раз\n");
            goto input;
        }
    }

}