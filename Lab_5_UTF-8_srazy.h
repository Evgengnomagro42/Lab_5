#include <iostream>
#ifndef LAB_5_UTF8_SRAZY_H
#define LAB_5_UTF8_SRAZY_H
using namespace std;
//1
void printArray();
//2
void sozd_pers();
//3
void poisk_goroda();
//4
void preobr_digit_letter();
//5 TODO ни в одной функции не получился нужный вывод
void zamena_simvola();
//6
void vvod_strok1();
void vvod_strok2();
void sort_alfav(std::string& strings);
void sort_vozr(std::string &strings);
//7
//для остальных типов данных перевод в строку по этому же образцу
void to_string_i();
double to_digit_d ();
int to_digit_i ();
void some_text();
//8
wstring Parse(wstring& x);
wstring dlia_Country(wstring x);
wstring dlia_Region(wstring x);
wstring dlia_City(wstring x);
wstring dlia_Street(wstring x);
wstring dlia_Hous(wstring x);
void Unify_print_struct(std::wstring x);
void Unify_print_bez_struct(wstring x);

#endif // LAB_5_UTF8_SRAZY_H
