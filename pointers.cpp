#include <iostream>

using namespace std;

void sqr(int x, int& result) {
    result = x * x;
}

void math(double x, double y, double ext, double root) {
    double* pointer_ext;
    pointer_ext = &ext;
    double* pointer_root;
    pointer_root = &root;
    cout << "ext before = " << ext << endl;
    *pointer_ext = x * y;
    cout << "ext after = " << ext << endl << endl;

    cout << "root before = " << root << endl;
    *pointer_root = pow(x, 1 / y);
    cout << "root after = " << root << endl << endl;

}

int main()
{
    double x = 4;
    double y = 2;
    double ext = 11;
    double root = 22;
    math(x, y, ext, root); 
    cout << "x = " << x << endl
         << "y = " << y << endl
         << "ext = " << ext << endl
         << "root = " << root << endl;
     


    /*
    int x = 2;

    // пустой указатель
    int* px;

    // &x - получить адрес переменной x
    // px = &x - присвоение адреса переменной x в переменную px
    px = &x;

    // вывод в консоль адреса, который хранится в переменной-указателе px
    cout << px << endl;

    // вывод в консоль значения, к которому приводит адрес, который хранится в переменной-указателе px
    cout << *px << endl;

    // *px - переход по адресу к данным (число 10)
    // ++ - цувеличение данных на 1 (получается 11)
    (*px)++;
    // px++;
    cout << px << endl;
    cout << *px << endl;

    // переменная для приёма результата из функции
    int y;

    // вызов функции с передачей ей двух параметров
    sqr(x, y);
    cout << y << endl;
    */
}
