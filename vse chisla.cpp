//Вывести на экран все 
// числа от нуля до введенного 
// пользователем числа..cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()

{
  setlocale(LC_ALL, "ru");
    int n; 
    int i = 0;
    int num;

    
    cout << ("Введите число ");
    cin >> n;
    
    for (int i = 0; i <= n; i++)
    { 
    cout << " ";
    cout << i << endl;
    }
    return 0;
}