
/* Program to input a number and find the sum of its digits */

#include<iostream>
using namespace std;

int main() {

  int number, sum_of_digits=0;

  cout<<"Enter a number:";
  cin>>number;

  // The content of the loop will be
  // executed as long as number > 0
  while(number>0) {
    //add the 1's digit of the number to sum_of_digits
    //trick: division by 10 and take reminder gives 1's digit
    sum_of_digits+=number%10;
    //divide number by 10 (ignore decimals. ie integer division)
    //so the 10's place will become 1's place
    //100's place -> 10's place and so on.
    number/=10;
  }

  cout<<"Sum of digits:"<<sum_of_digits<<endl;

  return 0;
}

