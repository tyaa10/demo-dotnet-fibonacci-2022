// FibConsoleApp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

/* string foo0();
string foo1(int a, int b);
void foo2(); */

/* Вычитает x из y и возвращает рузкльтат */
/* double sub(double x, double y);
double sum(double x, double y);
double mul(double x, double y); */
/* Принимает числа a, b, c и печатает их в формате: b - a = c */
// void actionPrint(double a, double b, double c, char op);

/* int x = 10;
int y = 200;
int z = 300;

// плохо
void foo() {
    cout << y * y << endl;
}
// хорошо
void foo(int a) {
    cout << a * a << endl;
}

float foo(float z) {
    cout << ::z * ::z * ::z << endl;
    return z * z;
} */

// пользовательская функция с параметром по умолчанию
/* void greeting(string name = "Guest") {
    cout << "Hello " << name << endl;
} */

// ТО ЖЕ САМОЕ

// первая перегрузка функции  - без параметра
/* void greeting() {
    string name = "Guest";
    cout << "Hello " << name << endl;
}
// вторая перегрузка функции  - с одним параметром (без значения по умолчанию)
void greeting(string name) {
    cout << "Hello " << name << endl;
} */

// int fooCallsCount = 0;

void foo() {
    static int fooCallsCount = 0;
    int b = 0;
    b++;
    cout << b << endl;
    cout << "Foo calls count: " << ++fooCallsCount << endl;
    if (fooCallsCount > 3)
    {
        fooCallsCount = 0;
    }
}

int main()
{
    foo();
    foo();
    foo();
    foo();
    foo();
    // cout << x << endl;
    // foo();
    // cout << foo(10.99f) << endl;
    // cout << "Your name:" << endl;
    // string name = "";
    // cin >> name;
    /* if (name.size() == 0)
    {
        greeting();
    }
    else {
        greeting(name);
    } */
    
    /* const int ARRAY_SIZE = 10;
    cout << "Fibonacci Numbers\n";
    int x[ARRAY_SIZE] = {0,1,1,2,3,5,8,13,21,34};
    cout << x << "\n";
    cout << "{";
    // TODO вычислять количество шагов циикла автоматически
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << x[i] << ((i < ARRAY_SIZE - 1) ? ", " : "");
    }
    cout << "}"; */
    /* cout << foo0() << " World!" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << foo1(2, i) << endl;
    }
    foo2();
    cout << foo1(2, 2) << endl; */
    /* cout << "*** Calculator ***" << endl;
    cout << "Sample:" << endl;
    double a = 1.0;
    double b = 7.0;
    actionPrint(a, b, sub(a, b), '-');
    cout << "Input a: " << endl;
    cin >> a;
    cout << "Input b: " << endl;
    cin >> b;
    double subResult = sub(a, b);
    double sumResult = sum(a, b);
    double mulResult = mul(a, b);
    actionPrint(a, b, subResult, '-');
    actionPrint(a, b, sumResult, '+');
    actionPrint(a, b, mulResult, '*');
    cout << "(b - a) + b * a = " << sum(subResult, mulResult) << endl; */
}

/* double sub(double x, double y) {
    return y - x;
}

double sum(double x, double y) {
    return x + y;
}

double mul(double x, double y) {
    return x * y;
}

void actionPrint(double a, double b, double c, char op)
{
    cout << b << " " << op << " " << a << " = " << c << endl;
} */

/* string foo0() {
    // cout << "Hello World!" << endl;
    return "Hello";
}

string foo1(int a, int b) {
    // cout << a << " * " << b << " = " << a * b << endl;
    return to_string(a) + " * " + to_string(b) + " = " + to_string(a * b);
} */

/* double fooD(double a, double b) {
    return a * b;
} */

/* void foo2() {
    cout << "The End!" << endl;
} */

/*
Задача по написанию пользовательских функций:
1. объявите и реализуйте функцию, которая принимает два дробных числа (double) и возвращает результат вычитания первого числа из второго;
2. объявите и реализуйте функцию, которая принимает три дробных числа, ничего не возвращает,
и выводит в консоль строку вида a - b = с, где вместо a, b и c будут подставлены значения параметров,
например, вызов функции
subPrint(5, 4, 1);
выведет в консоль текст:
5 - 4 = 1
3. Вызовите эти две функции последовательно так, чтобы в консоли вывелась строка:
7.0 - 1.0 = 6.0
*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
