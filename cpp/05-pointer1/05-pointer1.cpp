/*
 * Program to create two pointers initialised with
 * two numbers and find their average.
 */

#include <iostream>
using namespace std;

int main() {
  int* m = new int(24);
  int* n = new int(32);

  int* avg = new int(0);
  cout<<"value of m:"<<*m<<endl;
  cout<<"value of n:"<<*n<<endl;

  *avg = (*m+*n)/2;
  cout<<"average:"<<*avg<<endl;

  return 0;

}

