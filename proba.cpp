#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
   int a;
   int n = 10;

   cout << "Upisi bazu: ";
   cin >> a;

   int suma = 0;

   for (int i = 0; i < n; i++) {
      suma = suma + pow(a, i);
   }

   cout << suma << endl;

   return 0;
}