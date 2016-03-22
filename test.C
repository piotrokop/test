/*
  Celem zadania jest napisanie minimalnej klasy Complex (liczba zespolona) 
  wystepujacej w odpowiedniej hierarchii gdzie klasa bazowa jest klasa Number.
  


  Przypomnienie n.t. liczb zespolopnych: Liczba zespolona to para liczb.
  Jedna z tych liczb nazwyamy czescia rzeczywiosta a druga czescia urojona. 
  T.j. 2 + i7 to liczba zespolona o czesci rzeczywistej 2 i czesci urojonej 7. 
  W tym zadaniu mozna o liczbie zespolonej myslec jak o wspolzednych punktu w R2(2D).
  Regula dodawania jest nastepujaca: (x1 +iy1) + (x2 +iy2) = x1+y1 +i(y1+y2).

  Liczbe zespolona mozna skonstruowac na dwa sposoby. Poprzez podanie czesci rzeczywistej i urojonej (konstructor ReIm).
  A druga mozliwosc to podanie promienia i kata fi (konstrucktor RFi). 
  Czesc rzeczywista otrzymujemyL r*cos(fi) a urojana r*sin(fi);
  
  Kompilowac do pliku test z opcjami -Wall -g
 */


#include "Number.h"
#include "Number.h"
#include "Complex.h"

#include <iostream>
int main() {
  using namespace std;
  Complex c1 = Complex::ReIm(1, 2);
  const Complex c2 = Complex::ReIm(23, 0.2);
  cout << c1 << endl;
  cout << c2 << endl;
  
  /*Number &n1 = c1;
  cout << n1 << endl;
  const Number &n2 = c2;
  cout << n2 << endl;*/
  
  cout <<  c1 << " + " << c2 << " = " << c1+c2 << endl;
  cout << endl;
  
}
/* wynik
1 + i2
22.5415 + i4.56939
1 + i2
22.5415 + i4.56939
1 + i2 + 22.5415 + i4.56939 = 23.5415 + i6.56939
Destruktor objektu Complex: 23.5415 + i6.56939
Destruktor objektu Number

Destruktor objektu Complex: 22.5415 + i4.56939
Destruktor objektu Number
Destruktor objektu Complex: 1 + i2
Destruktor objektu Number

 */
