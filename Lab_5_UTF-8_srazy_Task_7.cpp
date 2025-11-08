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
using namespace std;
/*Реализовать самописные функции преобразования числа в строку и строки в число.*/

//числа в строку
/*void to_string_i(){
  int val;
  cin>>val;
  //1-й вариант обработки ввода
 if (cin.fail())
 cout << "fail" << endl;
 else
 cout << "Your value: " << val << endl;
  //2-й вариант обработки ввода
  try {
      std::string str{std::to_string(val)};
      std::cout << str+'\n';
  }
  //TODO почему-то при вводе букв выводит 0 вместо строки "Bad input"
  catch (std::invalid_argument const &e) {
    std::cout << "Bad input: std::invalid_argument thrown" << std::endl;
  }
  catch (std::out_of_range const &e) {
    std::cout << "Integer overflow: std::out_of_range thrown" << std::endl;
  }
}

void to_string_u(){
  unsigned val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_u_l(){
  unsigned long val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_l_l(){
  long long val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_u_l_l(){
  unsigned long long val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_f(){
  float val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_d(){
  double val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }
void to_string_l_d(){
  long double val;
  cin>>val;
  std::string str{std::to_string(val)};
  std::cout << str+'\n';
  }

//строки в число
int to_digit_i (){
    std::string s;
    getline(cin,s);
      try {
        int i = std::stoi(s);
        std::cout << i << std::endl;
      }
      catch (std::invalid_argument const &e) {
        std::cout << "Bad input: std::invalid_argument thrown" << std::endl;
      }
      catch (std::out_of_range const &e) {
        std::cout << "Integer overflow: std::out_of_range thrown" << std::endl;
      }
      return 0;
  }

double to_digit_d (){
    std::string s;
    getline(cin,s);
      try {
        double i = std::stoi(s);
        std::cout << i << std::endl;
      }
      catch (std::invalid_argument const &e) {
        std::cout << "Bad input: std::invalid_argument thrown" << std::endl;
      }
      catch (std::out_of_range const &e) {
        std::cout << "Integer overflow: std::out_of_range thrown" << std::endl;
      }
      return 0;
  }

// текст из слова и из числа в строку
void some_text(){
  setlocale(LC_ALL, "rus");
  wcout<<L"для выхода введите 00 00, нажмите Enter дважды\n";
    while(true){//столько раз, сколько нужно
      wstring text;
      wcin>>text;
      int age;//при необходимости любой тип данных
      cin>>age;*/
      /*TODO почему-то выводит кракозябры вместо русских букв
в файле .*pro настройки языка такие :
#ifdef Q_OS_WIN32
 QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF 8"));
#endif
инстр-ы - пар-ры - текст-й ред-р - поведение - код-ка файлов установлено:
по умолчанию UTF-8
UTF-8 BOM всегда удалять*/
   /*   std::wcout << text + L" " + std::to_wstring(age) << '\n';
        if(text == L"00"&& age == 00)break;
    }
  }*/
