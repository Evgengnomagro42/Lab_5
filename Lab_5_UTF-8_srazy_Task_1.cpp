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
#include "Lab_5_UTF-8_srazy.h"
//using namespace std;
/*const int LEN_BUFFER{25}; // .data
int ig_Value(5); // .data
float fg_Value=2.5; // .bss
static int s_Value(10); // .data
void printArray(){
  short array  [5] {6,7,8,9,10};
for(short i=0;i<5;++i){
    cout<<"["<<i<<"]"<<' '<<&array[i]<<' '<<array[i]<<'\n';
  }
}
*/
/*int main() {
    std::cout << "addr - main()"
    << reinterpret_cast<void*>(main) << "\n";
    std::cout << "addr - printArray()"
    << reinterpret_cast<void*>(printArray) << "\n";
    int i_Value(5); //stack
    std::cout << "\nstack\n\n";
    std::cout << "&i_Value: "<< &i_Value << "\n"; //stack
    cout<<"\narray stack memory\n\n";
    short arr [5]{1,2,3,4,5};
    for(short i=0;i<5;++i){
        cout<<"["<<i<<"]"<<' '<<&arr[i]<<' '<<arr[i]<<'\n';
    }
    std::cout << "\nbss\n\n";
    std::cout << "&fg_Value: "<< &fg_Value << "\n"; //bss
    std::cout << "\ndata\n\n";
    std::cout << "&LEN_BUFFER: " << &LEN_BUFFER << "\n"; // ro-data
    std::cout << "&ig_Value: "<< &ig_Value << "\n"; // rw-data
    std::cout << "&s_Value: "<< &s_Value << "\n"; // rw-data
    cout<<"\narray static memory\n\n";
    printArray ();
    std::cout << "\nheap\n\n";
    int *pi = new int;
    *pi=5;
    std::cout << "pi: "<< &pi << "\n"; //heap
    cout<<"\narray heap memory\n\n";
    unsigned count{5};
    int *parray = new (std::nothrow) int[count]; // используем форму оператора new для массива.
      if (parray) {
        parray[0] = 9;
        parray[1] = 7;
        parray[2] = 5;
        parray[3] = 3;
        parray[4] = 1;
     for(int i = 0; i < 5; i++)
       std::cout<<"["<<i<<"]"<<' '<<&parray[i]<<' '<<parray[i]<<'\n';
       }
     }
*/
