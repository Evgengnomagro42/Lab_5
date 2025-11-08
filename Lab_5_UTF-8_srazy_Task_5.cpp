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
/*Задание 5.
Дана строка (максимально 100 символов), содержащая слова, разделенные одним или
несколькими пробелами, или знаками табуляции. Заменить все знаки табуляции знаком
пробела, удалить двойные пробелы из строки.*/
//TODO в некоторых вариантах попытку задать длину строки блокировал компилятор
/*
void zamena_simvola(){
     string inp {"Message.;, \"?to\n\t Tom:  \rHello,\v Tom!"};
      for(size_t i=0;i<(sizeof (inp)/sizeof (inp[0]))-1;++i) {
        if((isspace(inp[i]))||(ispunct(inp[i]))) {
              std::cout << " " ;
            } else {
             std::cout << inp[i];
         }
       }
    }

int main() {
zamena_simvola();
return 0;
}
*/
