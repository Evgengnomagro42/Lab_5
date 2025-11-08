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
/* Создайте программу ?Новый вид?, есть структура количество и типы голов
 * существа, количество лап существа, покров тела существа(красная шерсть,
 * черная чешуя и тд), типы хвостов, типы и количество глаз. Пользователю
 * выводится сообщение побыть создателем и ввести рандомную последовательность
 * которую от него просят, после чего выводится  ?Новый вид?
 * существа который вы создали. Использовать структуры данных.  */
/*
struct NewVid {
  short kolich_golov;
  string tip_golov;
  short kolich_glaz;
  string tip_glaz;
  short kolich_ycheii;
  string tip_ycheii;
  short kolich_lap;
  string tip_lap;
  short kolich_hvostos;
  string tip_hvostov;
  short kolich_kriliev;
  string tip_kriliev;
  string tsvet_pokrova;
  string tip_pokrova;
  } personag ;

void sozd_pers(){
    cout << "sozdaite personagag, vvedia sluchainie chisla ot 0 do 5\n"
         <<"chicla oboznachaut skoloko golov, skoloko glaz, skolko ycheii,\n"
         <<" skolko lap, skoloko hvostov, skoloko kriliev\n";
    short a=personag.kolich_golov,s=personag.kolich_glaz,d=personag.kolich_ycheii,
          f=personag.kolich_lap,g=personag.kolich_hvostos,h=personag.kolich_kriliev;

    skip:
        cin>> a>>s>>d>>f>>g>>h;
        if((a<0||a>5)||(s<0||s>5)||(d<0||d>5)||(f<0||f>5)||(g<0||g>5)||(h<0||h>5))
           { cout<<"ochibka vvoda, vvedite snova\n";
        goto skip;
    }
    cout<<"vvedite, kakie budut golova, glaza, ychi, lapi, hvosti, krilia, pokrov, "
          "tsvet_pokrova. esli net, vvedite now\n";
    string q=personag.tip_golov,w=personag.tip_glaz,e=personag.tip_ycheii,
           r=personag.tip_lap,t=personag.tip_hvostov,y=personag.tip_kriliev,
            u=personag.tip_pokrova,i=personag.tsvet_pokrova;
    string line;
    getline(cin, line);
    cin>>q>>w>>e>>r>>t>>y>>u>>i;
    cout<<" Y Vachego personaga "<<a<<" golova, kak y "<<q<<", "<<s<<" glaz, kak y "
        <<w<<", "<<d<<" ycheii, kak y "<<e<<", "<<f<<" lap, kak y "<<r
        <<", "<<g<<" hvostov, kak y "<<t<<", "<<h<<" kriliev, kak y "<<y
        <<", pokrov, kak y "<<u<<' '<<e<<" tsveta \n";
    }

int main() {
    sozd_pers();
 return 0;
}
*/
