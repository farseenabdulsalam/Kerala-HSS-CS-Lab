/*
 * Write a program to swap two variables with the help
 * of a user defined function
 */

#include <iostream>
using namespace std;

/*
 * swap is a function which accepts two variables
 * passed by reference
 */
void swap(int& var1, int& var2) {
  int temp = var1;
  var1 = var2;
  var2 = temp;
}

int main() {

  //define two variables
  int var1,var2;

  //read values from user
  cout<<"Enter the values of variables:"<<endl;
  cout<<"var1=";
  cin>>var1;
  cout<<"var2=";
  cin>>var2;

  //call the swap function
  swap(var1,var2);

  //output the new values
  cout<<"New values:"<<endl;
  cout<<"var1="<<var1<<endl;
  cout<<"var2="<<var2<<endl;

  //Tell OS that everything is ok
  return 0;

}

