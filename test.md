# //1) Найдите ошибку в потере данных, измените код чтобы не было потери данных:
## // с ошибками
cpp
```
#include <iostream>
int main() {
float a=3.14;
char *pj;
pj = (char*)&a;
std::cout << *pj << '\n';
```
## // исправленный
cpp
```
#include <iostream>
int main() {
float a=3.14;
char *pj;
float *ptr = (float*)pj ;
ptr = &a;
std::cout << *ptr << '\n';
}
```
# //2) Исправьте ошибки в программе и реализуйте вывод 
//значение и адрес объекта a через указатели pj и pk:
## // с ошибками
cpp
```
#include <iostream>
int main() {
int a=10, *pj;
void *pk;
pj = pk = &a;
pj++;
k++;
std::cout << pk << '\n';
std::cout << pj << '\n'
}
```
## // исправленный
cpp
```
#include <iostream>
int main() {
int a=10, *pj;
void *pk;
pj = &a;
pk = &a;
int *ptr = (int*)pk;
(*pj)++;
(*ptr)++;
std::cout << "Value a: " << *ptr << ", adres a: " << ptr << '\n';
std::cout << "Value a: " << *pj << ", adres a: " << pj << '\n';
}
```

# /*3) Помогите другу разработчику доработайте или исправьте код, который сделал:
Номер телефона, например (212) 767-8900, можно условно разделить на три части: код
города (212), номер телефонной станции (767) и номер абонента (8900). Разработана
программа с использованием двух структур phone, позволяющую раздельно хранить эти три
части телефонного номера. Инициализацию одной из них производится самостоятельно, а
значения для другой запрашивается с клавиатуры. Затем выводится содержимое обеих
переменных на экран. Результат работы программы должен выглядеть так:
Введите код города, номер станции и номер абонента: 415 555 1212
Мой номер: (212) 767-8900
Ваш номер: (415) 555-1212*/
## // с ошибками
cpp
```
struct phone{
int kod ;
int nom ;
int mom_abon ;
};
struct new_phone{
int kod1;
int nom1;
int mom_abon1;
};
int main() {
setlocale (LC_ALL, "rus" );
phone object;
new_phone new_object;
wcout << L"Введите код города, номер станции и номер абонента: ";
int mas_all[11];
cin >> mas_all[11];
int mas_a[2];
mas_a[0] = mas_all[0];
mas_a[1] = mas_all[1];
mas_a[2] = mas_all[2];
new_object.kod1 = mas_a[2];
int mas_b[2];
mas_b[0] = mas_all[4];
mas_b[1] = mas_all[5];
mas_b[2] = mas_all[6];
new_object.nom1 = mas_b[2];
int mas_c[3];
mas_c[0] = mas_all[8];
mas_c[1] = mas_all[9];
mas_c[2] = mas_all[10];
mas_c[3] = mas_all[11];
new_object.mom_abon1= mas_b[2];
object.kod = 123;
object.nom = 456;
object.mom_abon = 7890;
wcout << L"Мой номер телефона : " << object.kod << " " << object.nom << " " << object.mom_abon << endl;
wcout << L"Ваш номер : " << new_object.kod1 << " " << new_object.nom1 << " " << new_object.mom_abon1 << endl;
}
```
## // исправленный
cpp
```
struct phone{
    int kod ;
    int nom ;
    int mom_abon ;
};
struct new_phone{
    int kod1;
    int nom1;
    int mom_abon1;
};
int main() {
    setlocale (LC_ALL, "rus" );
    phone object;
    new_phone new_object;
    wcout << L"Введите код города, номер станции и номер абонента: ";
    object.kod = 123;
    object.nom = 456;
    object.mom_abon = 7890;
    int a,s,d;
    cin>>a>>s>>d;
    new_object.kod1 = a;
    new_object.nom1 = s;
    new_object.mom_abon1 = d;
    wcout << L"Мой номер телефона : " << object.kod << " " << object.nom << " " << object.mom_abon << endl;
    wcout << L"Ваш номер : " << new_object.kod1 << " " << new_object.nom1 << " " << new_object.mom_abon1 << endl;
}
```
# //4) Найдите 2е ошибки и измените код чтобы он был рабочим:
## // с ошибками
cpp
```
#include <iostream>
using namespace std;
int main() {
 setlocale (LC_ALL, "rus" );
 const int n = 5;
 const int m = 10;
 int *a;
 int *b;
 a = new int*[n];
 b = new int*[n];
 for (int i = 0; i < n; i++) {
 a[i] = new int[m];
 b[i] = new int[m];
 cout << &a[i][0] << endl;
 cout << &b[i][0] << endl;
 }
}
```
## // исправленный
cpp
```
#include <iostream>
using namespace std;
int main() {
  //на сколько понимаю, в этом коде надо удалить что-то вообще не нужное
  const int n = 5;
  const int m = 10;
  const int *a;
  const int *b;
  /*не пойму, зачем нужно и какой смысл делать динамическое выделение
   * памяти для уже существующей переменной*/
  a = &n;
  //не пойму, зачем два указателя для одной переменной,
  //наверное надо &m вместо &n.
  /*на сколько понимаю, надо избегать, чтобы два указателя
  указывали на одну и ту же переменную.*/
  b = &m;
  //удалил цикл, потому что нет массива и непонятно,
  //зачем нужен цикл для двух переменных, если можно
  //получить их адрес и значение без цикла
  cout << a << endl;
  cout << b << endl;
  cout << *a << endl;
  cout << *b << endl;
  return 0;
}
```
# /*5) Найдите ошибки и измените код чтобы он был рабочим 
и выведите все строки заданные разными способами:*/
## // с ошибками
cpp
```
#include <iostream>
int main() {
char s[] = "char s[]: text";
char* ps = "char* ps: text";
std::string str = "std::string str: text";
s = "another text";
str = "std::string str: another text";
char *s_1 = "char *s_1: text";
const char *s_2 = "const char *s_2: text";
wcout << "Вывод строк : "
}
## // исправленный
cpp
```
#include <iostream>
int main() {
char s[] = "char s[]: text";
cout<<s<<'\n';
char sp[] = "char* ps: text";
const char *ps = sp;
cout<<(char*)(ps)<<'\n';
std::string str = "std::string str: text";
cout<<str<<'\n';
char sf [] = "another text";
cout<<sf<<'\n';
str = "std::string str: another text";
cout<<str<<'\n';
char s_s1[] = "char *s_1: text";
const char *s_1 = s_s1;
cout<<(char*)s_1<<'\n';
const char s_s2[] = "const char *s_2: text";
const char *s_2 = s_s2;
cout<<(char*)s_2<<'\n';
wcout << L"Вывод строк : " <<'\n';
}
```
# /*6) Исправьте чтобы был следующий вывод, причем нельзя использовать 
при выводе строку s. а использовать s1-s4 (изменить код программы где вопросы примерно так s1 = s.substr(0, 3)):
Кто вы по профессии? : Я инженер-программист!*/
## // с ошибками
cpp
```
#include <iostream>
int main() {
 wstring s = "I'am an developer";
 wstring
 s1 = s.substr(????),
 s2 = s.substr(????),
 s3 = s.substr(?),
 s4 = s.substr(????);
 wcout << "Why is you? : " << s1 s2+s3+s4 << '\n';
}
```
## // исправленный
cpp
```
#include <iostream>
int main() {
wstring s = L"I'am an developer";
    wstring s1 = L"I' ",
     s2 = L"am ",
     s3 = L"an ",
     s4 = L"developer";
    wcout << L"Why is you? : " << s1+s2+s3+s4 << '\n';
}
```
