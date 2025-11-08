#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <string>
#include <iterator>
#include <vector>
#include <array>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()
#include <type_traits>
#include <cstdint>
#include <initializer_list>
#include <random>
#include <chrono>
#include <cstring>
#include <utility>
#include <algorithm>
#include <cstddef> // для std::nullptr_t
#include <map>
#include <functional>
#include <clocale>
#include <typeinfo>
#include <locale>
#include <cctype>
#include <cfloat>
#include <system_error>
#include <stdexcept>
#include <utility>
#include <cstdlib>
#include <stack>
#include <new>
#include <memory>
#include <tuple>

#include "Lab_5_UTF-8_srazy.h"
//using namespace std;
/*Дан массив строк (максимально 25 строк, каждая строка не более 80 символов).
 * Строки вводятся пользователем, признак завершения ввода ? ввод пустой строки.
 *  Упорядочить строки по длине или по алфавиту (по выбору пользователя).
*/
/* constexpr unsigned SIZE_WORD=80;
 wchar_t word[SIZE_WORD];
 short i=0;
 std::wcout << L"Enter a word: ";
     std::wcin.getline(word, SIZE_WORD-1);
     wcout << L"word = " << word << endl;*/
/*
void vvod_strok1() {
    constexpr size_t STR{25};
    wstring text ; // массив для считывания строки
    wstring array[STR]{};
    for (size_t i = 0; i < STR; i++) {//цикл по переменной i, в котором перебираем элементы внутри строки
    std::wcout << "\nInput string " << i << "\t"; //вывод очередного элемента матрицы
    getline(wcin,text);
    wstring *ptr=&(text);
    (array[i])=*ptr;
    *(array+i)=*ptr;
    wcout<<*ptr<<' '<<*(array+i)<<' '<<(array[i])<<'\n';
    wstring &ref=(text);
    array[i]=ref;
    *(array+i)=ref;
    wcout<<ref<<' '<<*(array+i)<<' '<<array[i]<<'\n';
    wstring value=text;
    array[i]=value;
    *(array+i)=value;
    wcout<<value<<' '<<*(array+i)<<' '<<array[i]<<'\n';
    }

void vvod_strok2() {
    constexpr int max_length {80}; // максимальное количиство считываемых символов
    constexpr size_t STR{25};
    wchar_t text[max_length] ; // массив для считывания строки
    wchar_t array[STR]{};
    for (size_t i = 0; i < STR; i++) {//цикл по переменной i, в котором перебираем элементы внутри строки
    std::wcout << "\nInput string " << i << "\t"; //вывод очередного элемента матрицы
    wcin.getline(text,max_length);
    wchar_t *ptr=&(text[i]);
    (array[i])=*ptr;
    *(array+i)=*ptr;
    wcout<<*ptr<<' '<<*array+i<<' '<<(array[i])<<'\n';
    wchar_t &ref=(text[i]);
    array[i]=ref;
    *(array+i)=ref;
    wcout<<ref<<' '<<*array+i<<' '<<array[i]<<'\n';
    wchar_t value=text[i];
    array[i]=value;
    *(array+i)=value;
    wcout<<value<<' '<<*array+i<<' '<<array[i]<<'\n';
    array[i]=text[i];
    *(array+i)=text[i];
    wcout<<text<<' '<<*array+i<<' '<<array[i]<<'\n';
        }
      }
    }
    */

//sort po alf i vozr
/*
bool compare_length(const std::string&, const std::string&) ;
void sort_alfav();
void sort_vozr();
void(*metod_sort(unsigned))();
int main() {
cout<<"vyberite metod sortirovki. 1 Po alfavity, 2 po vozrastaniy\n";
 void(*action)()(metod_sort(1));
 action();
 action = metod_sort(2);
 action();
}
void(*metod_sort1(unsigned metod))() {
 switch (metod) {
     skip:
 case(1):
     return sort_alfav;
     break;
 case 2:
     return sort_vozr;
     break;
 default:
     cout<<"vvedite 1 ili 2"<<'n';
     goto skip;
     break;
 }
}

void(*metod_sort2(unsigned metod,std::string & strings))() {
 switch (metod) {
     skip:
 case 1:
     return sort_alfav(strings);
     break;
 case 2:
     return sort_vozr(strings);
     break;
 default:
     cout<<"vvedite 1 ili 2"<<'n';
     goto skip;
     break; }}

void sort_alfav(std::string& strings){
    std::sort(strings.begin(), strings.end()); // По умолчанию сортирует в алфавитном порядке
    for (const auto& str : strings) {
        std::cout << str << "\n";    }
    std::cout << std::endl;    }

bool compare_length(const std::string& a, const std::string& b) {
 return a.length() < b.length(); // Возвращает true, если a короче b
 }

void sort_vozr(std::string &strings){
    std::sort(strings.begin(), strings.end(), compare_length);
for (const auto& str : strings) {
    std::cout << str << "\n";}
std::cout << std::endl;}

void vvod_string_polz(void(*op(string&)),string&){
    constexpr unsigned N{5};
    string data[N];
    string text;
 for (size_t count=0; count < N; ++count) {
     getline(cin, text);
 std::cout << (data[count] = (text))<< "\n";  }
 op(*data);
}
*/

// Эта функция выводит значения массива
/*
 * void printArray(int *array, int size) {
 for (int index=0; index < size; ++index)
 std::cout << array[index] << " ";
 std::cout << '\n';
}
*/

/*
void vvod_string_polz2(string *array, void (*comparisonFcn)(string&)) {
    constexpr unsigned N{25};
    string text;
 for (size_t count=0; count < N; ++count) {
     getline(cin, text);
 std::cout << (array[count] = (text))<< "\n";}
 comparisonFcn(*array);
 }

void sort_alfav(std::string& strings){
    std::sort(strings.begin(), strings.end()); // По умолчанию сортирует в алфавитном порядке
    for (const auto& str : strings) {
        std::cout << str << "\n";    }
    std::cout << std::endl;    }
bool compare_length(const std::string& a, const std::string& b) {
 return a.length() < b.length();  }

void sort_vozr(std::string &strings) {
    std::sort(strings.begin(), strings.end(), compare_length);
for (const auto& str : strings) {
    std::cout << str << "\n";}
std::cout << std::endl;}
void printArray(string *array) {
 for (size_t index=0; index < sizeof (array)/sizeof (array[0]); ++index)
 std::cout << array[index] << " ";
 std::cout << '\n';
}
int main() {
 string array[] = { };
 vvod_string_polz2(array, sort_alfav);
 vvod_string_polz2(array, sort_vozr);
 return 0;
}
*/
