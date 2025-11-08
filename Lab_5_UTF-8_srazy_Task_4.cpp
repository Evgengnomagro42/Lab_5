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
/*Будем рассматривать символы состоящие из заглавных английских букв. Например,
рассмотрим строку AAAABCCCCCDDDD. Длина этой строки равна 14. Поскольку строка
состоит только из английских букв, повторяющиеся символы могут быть удалены и
заменены числами, определяющими количество повторений. Таким образом, данная
строка может быть представлена как 4AB5C4D. Длина такой строки Описанный метод
мы назовем упаковкой строки. Разработайте программу, которая берет упакованную
строчку с буквами в нижнем регистре и восстанавливает по ней исходную строку с
буквами в верхнем регистре.*/
/*
//TODO почему-то строчкой ниже пишет лишнее
void preobr_digit_letter(){
     string inp {"4AB5C4D"};
      for(size_t i=0;i<(sizeof (inp)/sizeof (inp[0]))-1;++i) {
        if((isdigit(inp[i]))&&(isalpha(inp[i+1]))) {
          int res = atoi(&inp[i]);
            while(--res>0) {
              std::cout << inp[i+1];
            }
         } else {
             std::cout << inp[i];
         }
       }
    }

int main() {
  preobr_digit_letter();
return 0;
}
*/
