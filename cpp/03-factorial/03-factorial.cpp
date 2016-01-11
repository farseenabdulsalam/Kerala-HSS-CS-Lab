/*
 * Write a program to find the factorial
 * of a number using a user defined function
 * and recursion
 */

#include <iostream>
using namespace std;

/* this is the recursive factorial function
 * which repeatedly calls itself 
 * until n is not greater than 1
 */
int factorial(int n) {
  if(n>1) return n*factorial(n-1);
  else return n;
}

int main() {

  int num;

  cout<<"Enter the number to find factorial:";
  cin>>num;

  int fact=factorial(num);

  cout<<num<<"! = "<<fact<<endl;

  //Tell OS everything's OK
  return 0;
}



