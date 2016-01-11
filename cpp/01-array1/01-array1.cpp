/*
 * Q: Read N numbers into an array
 * and print those which are larger than
 * the average
 */

#include <iostream>

using namespace std;

int main() {

  //Defining variables
  int array[100]; //to store umbers entered by user
  int N;          //how many items will be entered
  int avg;        //to store average of numbers in array

  cout<<"How many numbers would you like: ";
  cin>>N;
  cout<<"Enter the numbers:"<<endl;

  //Reading into array[0], array[1],
  //array[2]....., array[N-1]
  for(int i=0; i<N; i++) {
    cin>>array[i];
  }

  avg=0;

  //Average = Sum of all numbers / Total number of items

  //Step 1: Sum of all numbers
  //avg = array[0] + .... + array[N-1]
  for(int i=0; i<N; i++) {
    avg+=array[i];
  }

  //Step 2: Divide by total number of items
  avg/=N;

  cout<<endl<<"The average is: "<<avg<<endl;
  cout<<endl;
  cout<<"The numbers greater than average are:"<<endl;

  //if array[0]>avg, print array[0] ... array[N-1]>avg, print array[N-1]
  for(int i=0; i<N; i++) {
    if(array[i]>avg) cout<<array[i]<<endl;
  }
  cout<<endl;

  //Tell the operating system that everything is OK (exit code 0)
  //More info in higher classes
  return 0;
}
