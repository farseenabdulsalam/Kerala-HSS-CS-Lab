/*
 * Program to display the sum of squares of N natural numbers
 * without using equations
 */

#include <iostream>
using namespace std;

int main() {

  int n, sum_of_sqrs = 0;

  cout<<"Enter the number:";
  cin>>n;

  //the following code will be executed for all values of i
  //from 1 to n
  //ie, sum_of_sqrs+=1*1; sum_of_sqrs+=2*2; ... sum_of_sqrs+=n*n;
  for(int i=1;i<=n;i++) {
    sum_of_sqrs+=i*i;
  }

  cout<<"Sum of squares of "<<n<<" natural numbers:"<<sum_of_sqrs<<endl;

  return 0;

}
