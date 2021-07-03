#include <iostream>
using namespace std;

double middle(int* array, int size) 
{
    double s = 0;
    for (int i = 0; i < size; i++)
        s += array[i];
    s /= size;
    return s;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int arr[5];
    int n;
        cout << "Введите число: ";
        cin >> n;
        for (int i = 0; i < 5; i++) // заполнение массива 
        {
            arr[i] = n % 10;
            n /= 10;
        }

        for (int i = 4; i >= 0; i--)  //вывод цифр
            cout << arr[i] << endl;
   




        ////////////////////////

        char ch;
        
        cout << "Введите букву: ";
        cin >> ch;  // ввод буквы
        ch = toupper(ch);   // перевод буквы в верхний регистр
        cout << "Верхний регистр:  " << ch << endl; // вывод

           //////////////////////////////
        int s;
        cout << "Введите размер массива: "; // размер массива ввод
        cin >> s;
        int* arr2 = new int[s]; // создание массива
        cout << "Заполните массив: " << endl;
        for (int i = 0; i < s; i++)
            cin >> arr2[i];

        cout << "Среднее арифметическое: " << middle(arr2, s) << endl;    //вывод результата


        return -0;
   
}
