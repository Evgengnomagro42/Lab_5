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

struct Adress {
  wstring Country;
  wstring Region;
  wstring City;
  wstring Street;
  wstring Hous;
} adr_polz;

wstring Parse(wstring& line){
    setlocale(LC_ALL, "rus");
    wstring country_polz, region_polz, city_polz, street_polz, hous_polz;
    wcout<<L"Введите название страны"<<'\n';
    skip1:
    getline(wcin,country_polz);
    //удаление случайно введённых цифр в названии страны, региона, нас-го п-та
    for (unsigned i=0; i < country_polz.length()+1; i++) {
        if (isdigit(country_polz[i]) ) {
            wcout<<L"\nОшибка ввода, введите снова, без цифр"<<'\n';
            goto skip1;
            //country_polz.erase(country_polz[i]);//почему-то переполнение памяти
            /*если надо вывести сообщение об ошибке ввода вместо
            исправления ошибки и дальнейшей работы программы*/
            //wcout<<L"Ошибка ввода, ввели цифру";break;
        } else {
            wcout<<country_polz[i];
        }
    }
    wcout<<L"\nВведите название региона в формате \n"
        "тип (область, край и тд) название"<<'\n';
    skip2:
    getline(wcin,region_polz);
    for (unsigned i=0; i < region_polz.length()+1; i++) {
        if (isdigit(region_polz[i]) ) {
            wcout<<L"\nОшибка ввода, введите снова, без цифр"<<'\n';
            goto skip2;
            //region_polz.erase(region_polz[i]);
        } else {
            wcout<<region_polz[i]/*=region_polz[i]*/;
        }
    }
    wcout<<L"\nВведите название города в формате \n"
           "тип (пгт, село и тд) название"<<'\n';
    skip:
    getline(wcin,city_polz);
    for (unsigned i=0; i < city_polz.length()+1; i++) {
        if (isdigit(city_polz[i]) ) {
            wcout<<L"\nОшибка ввода, введите снова, без цифр"<<'\n';
            goto skip;
            //city_polz.erase(city_polz[i]);
        } else {
            wcout<<city_polz[i];
        }
    }
    wcout<<L"\nВведите название улицы в формате \n"
           "тип (проспект и тд) название"
        <<'\n';
    getline(wcin,street_polz);
    wcout<<L"Введите номер дома"<<'\n';
    getline(wcin,hous_polz);
    for (unsigned i=0; i < hous_polz.length()+1; i++) {
        if ((hous_polz==L"к.")||(hous_polz==L"\\")||(hous_polz==L"к")) {
            wcout<<L"корпус";
        } else {
            wcout<<hous_polz[i];
        }
    }

    ::adr_polz.Country=country_polz;
    ::adr_polz.Region=region_polz;
    ::adr_polz.City=city_polz;
    ::adr_polz.Street=street_polz;
    ::adr_polz.Hous=hous_polz;
    line = ::adr_polz.Country+L" "+::adr_polz.Region+L" "
            +::adr_polz.City+L" "+::adr_polz.Street+L" "+::adr_polz.Hous;
    return line;
}
//приведены некоторые варианты замены пользовательского ввода
//на стандартный вывод
wstring dlia_Country(wstring x){
    if (x.find(L"Р.Ф.")) {
        size_t start {x.find(L"Р.Ф.")};//size_t end
        x.replace(start, 4, L"Российская Федерация");
    } else if (x.find(L"Рос Фед")) {
        size_t start {x.find(L"Рос Фед")};
        x.replace(start, 7, L"Российская Федерация");
    } else if (x.find(L"Р Ф")) {
        size_t start {x.find(L"Р Ф")};
        x.replace(start, 3, L"Российская Федерация");
      } else {
        wcout<<L"Совпадений не найдено"<<'\n';
    }
    return x;
}

wstring dlia_Region(wstring x){
    if (x.find(L"о")) {
        size_t start {x.find(L"о")};
        x.replace(start, 1, L"область");
    } else if (x.find(L"обл")) {
        size_t start {x.find(L"обл")};
        x.replace(start, 3, L"область");
    } else if (x.find(L"рес.")) {
        size_t start {x.find(L"рес.")};
        x.replace(start, 4, L"республика");
    } else if (x.find(L"р.")) {
        size_t start {x.find(L"р.")};
        x.replace(start, 2, L"республика");
    } else if (x.find(L"к.")) {
        size_t start {x.find(L"к.")};
        x.replace(start, 2, L"край");
    } else if (x.find(L"авт окр")) {
        size_t start {x.find(L"авт окр")};
        x.replace(start, 7, L"автономный округ");
    } else if (x.find(L"а.о.")) {
        size_t start {x.find(L"а.о.")};
        x.replace(start, 4, L"автономный округ");
    } else {
        wcout<<L"Совпадений не найдено"<<'\n';
    }
return x;
}

wstring dlia_City(wstring x){
    if (x.find(L"г")) {
        size_t start {x.find(L"г")};
        x.replace(start, 1, L"город");
    } else if (x.find(L"гор")) {
        size_t start {x.find(L"гор")};
        x.replace(start, 3, L"город");
    } else if (x.find(L"пос")) {
        size_t start {x.find(L"пос")};
        x.replace(start, 3, L"посёлок городского типа");
    } else if (x.find(L"пгт")) {
        size_t start {x.find(L"пгт")};
        x.replace(start, 3, L"посёлок городского типа");
    } else if (x.find(L"д")) {
        size_t start {x.find(L"д")};
        x.replace(start, 1, L"деревня");
    } else if (x.find(L"дер")) {
        size_t start {x.find(L"дер")};
        x.replace(start, 3, L"деревня");
    } else if (x.find(L"с")) {
        size_t start {x.find(L"с")};
        x.replace(start, 3, L"село");
    } else {
        wcout<<L"Совпадений не найдено"<<'\n';
    }
return x;
}

wstring dlia_Street(wstring x){
    if (x.find(L"пр")) {
        size_t start {x.find(L"пр")};
        x.replace(start, 2, L"проспект");
    } else if (x.find(L"пр-кт")) {
        size_t start {x.find(L"пр-кт")};
        x.replace(start, 5, L"проспект");
    } else if (x.find(L"у")) {
        size_t start {x.find(L"у")};
        x.replace(start, 1, L"улица");
    } else if (x.find(L"бул")) {
        size_t start {x.find(L"бул")};
        x.replace(start, 3, L"бульвар");
    } else if (x.find(L"пр-зд")) {
        size_t start {x.find(L"пр-зд")};
        x.replace(start, 5, L"проезд");
    } else {
        wcout<<L"Совпадений не найдено"<<'\n';
    }
return x;
}

wstring dlia_Hous(wstring x){
    if (x.find(L"д")) {
        size_t start {x.find(L"д")};
        x.replace(start, 1, L"дом");
    } else if (x.find(L"с")) {
        size_t start {x.find(L"с")};
        x.replace(start, 1, L"строение");
    } else if (x.find(L"вл.")) {
        const std::wstring separators {L" ,;:.\"!\n"};
        size_t start {x.find(L"вл.")};
        x.replace(start, 2, L"владение");
    } else {
        wcout<<L"Совпадений не найдено"<<'\n';
    }
return x;
}
//для вывода отредактированной строки с применением полей структуры
void Unify_print_struct(wstring line){
  wcout<<L"\nUnify3 "<<'\n';
  std::wstringstream os;
   os << line;
   os >>  adr_polz.Country;
   os >> adr_polz.Region;
   os >> adr_polz.City;
   os >> adr_polz.Street;
   os >> adr_polz.Hous;

   std::wcout << dlia_Country(adr_polz.Country) << " - "
              << dlia_Region(adr_polz.Region) << " - "
              << dlia_City(adr_polz.City) << " - "
              << dlia_Street(adr_polz.Street) << " - "
              << dlia_Hous(adr_polz.Hous) << '\n';
}
//для вывода отредактированной строки без применения полей структуры
void Unify_print_bez_struct(wstring line){
  wcout<<L"\nUnify4 "<<'\n';
  std::wstringstream os;
   os << line;
   std::wstring strValue1;
   os >> strValue1;
   std::wstring strValue2;
   os >> strValue2;
   std::wstring strValue3;
   os >> strValue3;
   std::wstring strValue4;
   os >> strValue4;
   std::wstring strValue5;
   os >> strValue5;

   std::wcout << dlia_Country(strValue1) << " - "
              << dlia_Region(strValue2) << " - "
              << dlia_City(strValue3) << " - "
              << dlia_Street(strValue4) << " - "
              << dlia_Hous(strValue5) << '\n';
}

int main() {
    setlocale(LC_ALL, "rus");
    wstring line;
    Parse(line);
    Unify_print_struct(line);
    //Unify_print_bez_struct(line);
    return 0;
}

Функция Parse принимает на вход текстовую строчку и пытается выделить из неё
компоненты адреса.
Функция Unify пытается привести компоненты адреса к каноническому виду
(например, вместо ?пр-д Кочновского15? записать ?проезд Кочновского 15?).
Функция Format возвращает текстовое представление адреса.
Функции Parse и Unify, в духе C++ style guide, принимают на вход изменяемые
параметры через указатели. Предполагается, что соотвествующие объекты типа
Address уже созданы. В случае ошибок обработки адреса функции Parse и Unify
могут сгенерировать сообщение ошибки.
Алексей написал код обработки, но он почему-то не работает:
#include "address.h"
#include <iostream>
#include <string>
int main() {
 std::string line;
 Address* address;
 while (getline(std::cin, line)) {
 Parse(line, address);
 Unify(address);
 std::cout << Format(*address) << "\n";
 }
}
Предполагалось, что эта программа будет читать поступающие на вход строки,
извлекать из них адреса и печатать их обработанные текстовые представления.
В случае исключений при обработке строки программа должна напечатать просто
?exception? (с переводом строки) и перейти к обработке следующих строк.*/

