/*
 * Program to find string length without
 * using strlen function
 */

#include <iostream>
using namespace std;

int main() {

  char str[100];
  int length = 0;

  cout<<"Enter the string: ";
  cin>>str;

  // Example string="Hello" = {'H','e','l','l','o','\0'}
  // length is initially zero
  // str[0] = 'H' != '\0'; so length+=1 and continue loop
  // ...
  // str[5] = '\0' == '\0' stop looping
  // print 5
  while(str[length]!='\0') {
   length++;
  }
  cout<<"The length of given string: "<<length<<endl;
  return 0;
}

