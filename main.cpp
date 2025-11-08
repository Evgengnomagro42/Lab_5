#include <QCoreApplication>
/* Лабораторная работа №5
* на тему: "Исследование строк, структур памяти С++ в IDE Qt Creator"
* Developer: Markov Evgeniy Sergeevich Group 318
* OS: Windows 10
* locale UTF-8  */
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
#include <cstdlib>
#include <ctime>
#include <type_traits>
#include <cstdint>
#include <initializer_list>
#include <random>
#include <chrono>
#include <cstring>
#include <utility>
#include <algorithm>
#include <cstddef>
#include <map>
#include <functional>
#include <typeinfo>
#include <clocale>
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
#include <optional>
#include <string_view>
#include <cassert>
#include "Lab_5_UTF-8_srazy.h"
using namespace std;
//const std::string separators {" ,;:.\"!\n\t\r\v?"};setlocale(LC_ALL, "rus");
/*TODO Qt почему-то выдавал ошибку main.cpp:53:2: error: no matching function for call to 'sort'
stl_algo.h:4856:5: note: candidate template ignored: couldn't infer template argument '_Compare'
stl_algo.h:4826:5: note: candidate function template not viable: requires 2 arguments, but 3 were provided*/
/*int main() {
 std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
 std::sort(strings.begin(), strings.end(), std::lexicographical_compare<std::vector<std::string>::iterator>);
 for (const auto& str : strings) {
 std::cout << str << " ";
 }
 std::cout << std::endl;
 return 0;
}*/

#define TASK 0
#if (TASK == 1)
#include "Lab_5_UTF-8_srazy_Task_1.cpp"
#elif (TASK == 2)
#include "Lab_5_UTF-8_srazy_Task_2.cpp"
#elif (TASK == 3)
#include "Lab_5_UTF-8_srazy_Task_3.cpp"
#elif (TASK == 4)
#include "Lab_5_UTF-8_srazy_Task_4.cpp"
#elif (TASK == 5)
#include "Lab_5_UTF-8_srazy_Task_5.cpp"
#elif (TASK == 6)
#include "Lab_5_UTF-8_srazy_Task_6.cpp"
#elif (TASK == 7)
#include "Lab_5_UTF-8_srazy_Task_7.cpp"
#elif (TASK == 8)
#include "Lab_5_UTF-8_srazy_Task_8.cpp"

#else
#endif
int main() {
#if (TASK == 1)
printArray();
#elif (TASK == 2)
sozd_pers();
#elif (TASK == 3)
poisk_goroda();
#elif (TASK == 4)
preobr_digit_letter();
#elif (TASK == 5)
zamena_simvola();    
#elif (TASK == 6)
vvod_strok1();
vvod_strok2();
sort_alfav(std::string& strings);
sort_vozr(std::string &strings);
#elif (TASK == 7)
to_string_i();
to_digit_d ();
to_digit_i ();
some_text();
#elif (TASK == 8)
Parse(wstring& x);
dlia_Country(wstring x);
dlia_Region(wstring x);
dlia_City(wstring x);
dlia_Street(wstring x);
dlia_Hous(wstring x);
Unify_print_struct(std::wstring x);
Unify_print_bez_struct(wstring x);
#endif
}
 
