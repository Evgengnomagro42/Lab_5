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
#include "Lab_5_UTF-8_srazy.h"
//using namespace std;
/*struct Geografia {
  string materik;
  string strana;
  string stolica;
  string region;
  string gorod;
  };
Geografia Tomsk ={"Asia", "Russia", "Moskva", "Sibir", "Tomsk"};
Geografia Kirov ={"Asia", "Russia", "Moskva", "Volgo_Vyatskiy", "Kirov"};
Geografia Voroneg ={"Asia", "Russia", "Moskva", "Centr_Chernozem", "Voroneg"};
Geografia SpB ={"Asia", "Russia", "Moskva", "Sev_Zap", "SpB"};
Geografia Brest ={"Europa", "Belorussia", "MinsK", "Brestskiy", "Brest"};
Geografia Vitebsk ={"Europa", "Belorussia", "MinsK", "Vitebskskiy", "Vitebsk"};
Geografia Grodno ={"Europa", "Belorussia", "MinsK", "Grodnoskiy", "Grodno"};
Geografia Polock ={"Europa", "Belorussia", "MinsK", "Polockskiy", "Polock"};
Geografia *Minsk =new Geografia{"Europa", "Belorussia", "MinsK",
                                  "Minskskiy", "Minsk"};
Geografia *Msk =new Geografia{"Asia", "Russia", "Moskva", "Centr", "Msk"};

void poisk_goroda(){
  cout << "Vvedite nazvanie goroda. Esli net nyjnogo goroda,\n"
       <<"dlia novogo poiska vvedite nazvanie snova, dlya vyhoda - exit\n";
  string gorod_polzovatelia;
  skip:
    cin>> gorod_polzovatelia;
      if((gorod_polzovatelia != "Tomsk")&&(gorod_polzovatelia!="Kirov")
        &&(gorod_polzovatelia != "Voroneg")&&(gorod_polzovatelia!="SpB")
        &&(gorod_polzovatelia!="Msk")&&(gorod_polzovatelia!="Brest")
        &&(gorod_polzovatelia!="Vitebsk")&&(gorod_polzovatelia!="Grodno")
        &&(gorod_polzovatelia!="Polock")&&(gorod_polzovatelia!="Minsk")) {
          cout<<"ochibka vvoda, vvedite snova\n";
      if(gorod_polzovatelia=="exit")return;
  goto skip;
          }
  Geografia &ref_gor_polz1 = Tomsk;
  Geografia &ref_gor_polz2 = Kirov;
  Geografia &ref_gor_polz3 = Voroneg;
  Geografia &ref_gor_polz4 = SpB;
  Geografia &ref_gor_polz5 = *Msk;
  Geografia &ref_gor_polz6 = Brest;
  Geografia &ref_gor_polz7 = Vitebsk;
  Geografia &ref_gor_polz8 = Grodno;
  Geografia &ref_gor_polz9 = Polock;
  Geografia &ref_gor_polz10 = *Minsk;
  cout<<"Vach vybor: "<<gorod_polzovatelia<<'\n';
    if (gorod_polzovatelia==ref_gor_polz1.gorod){
      cout<<"materik "<<Tomsk.materik<<' ';
      cout<<"strana "<<Tomsk.strana<<' ';
      cout<<"stolica "<<Tomsk.stolica<<' ';
      cout<<"region "<<Tomsk.region<<' ';
      cout<<"gorod "<<Tomsk.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz2.gorod){
      cout<<"materik "<<Kirov.materik<<' ';
      cout<<"strana "<<Kirov.strana<<' ';
      cout<<"stolica "<<Kirov.stolica<<' ';
      cout<<"region "<<Kirov.region<<' ';
      cout<<"gorod "<<Kirov.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz3.gorod){
      cout<<"materik "<<Voroneg.materik<<' ';
      cout<<"strana "<<Voroneg.strana<<' ';
      cout<<"stolica "<<Voroneg.stolica<<' ';
      cout<<"region "<<Voroneg.region<<' ';
      cout<<"gorod "<<Voroneg.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz4.gorod){
      cout<<"materik "<<SpB.materik<<' ';
      cout<<"strana "<<SpB.strana<<' ';
      cout<<"stolica "<<SpB.stolica<<' ';
      cout<<"region "<<SpB.region<<' ';
      cout<<"gorod "<<SpB.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz5.gorod){
      cout<<"materik "<<(*Msk).materik<<' ';
      cout<<"strana "<<(*Msk).strana<<' ';
      cout<<"stolica "<<(*Msk).stolica<<' ';
      cout<<"region "<<(*Msk).region<<' ';
      cout<<"gorod "<<(*Msk).gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz6.gorod){
      cout<<"materik "<<Brest.materik<<' ';
      cout<<"strana "<<Brest.strana<<' ';
      cout<<"stolica "<<Brest.stolica<<' ';
      cout<<"region "<<Brest.region<<' ';
      cout<<"gorod "<<Brest.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz7.gorod){
      cout<<"materik "<<Vitebsk.materik<<' ';
      cout<<"strana "<<Vitebsk.strana<<' ';
      cout<<"stolica "<<Vitebsk.stolica<<' ';
      cout<<"region "<<Vitebsk.region<<' ';
      cout<<"gorod "<<Vitebsk.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz8.gorod){
      cout<<"materik "<<Grodno.materik<<' ';
      cout<<"strana "<<Grodno.strana<<' ';
      cout<<"stolica "<<Grodno.stolica<<' ';
      cout<<"region "<<Grodno.region<<' ';
      cout<<"gorod "<<Grodno.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz9.gorod){
      cout<<"materik "<<Polock.materik<<' ';
      cout<<"strana "<<Polock.strana<<' ';
      cout<<"stolica "<<Polock.stolica<<' ';
      cout<<"region "<<Polock.region<<' ';
      cout<<"gorod "<<Polock.gorod<<' ';
    } else if (gorod_polzovatelia==ref_gor_polz10.gorod){
      cout<<"materik "<<(*Minsk).materik<<' ';
      cout<<"strana "<<(*Minsk).strana<<' ';
      cout<<"stolica "<<(*Minsk).stolica<<' ';
      cout<<"region "<<(*Minsk).region<<' ';
      cout<<"gorod "<<(*Minsk).gorod<<' ';
    }
  }

int main() {
  poisk_goroda();
return 0;
}
*/
