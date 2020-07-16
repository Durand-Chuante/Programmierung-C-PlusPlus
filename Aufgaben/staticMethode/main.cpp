#include <stdio.h>

class Test
{
      static int Anzahl;
   public:
      Test();
      ~Test();
      static int GetAnzahl() { return Anzahl; };
};

int Test::Anzahl = 0; // am Anfang gibt es 0 Objekte

Test::Test()
{  Test::Anzahl++; }  // Anzahl der Objekte um eins erhoehen

Test::~Test()
{  Test::Anzahl--; }  // Anzahl der Objekte um eins verringern

int main()
{
   Test T1, T2, T3;

   printf("Anzahl der Objekte: %i\n", Test::GetAnzahl());

   return 0;
}
