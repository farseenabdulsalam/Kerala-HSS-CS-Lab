/*
 * Program to read the admission numbers of N
 * students in a class and search given admission
 * no. from the list using linear search
 */

#include<iostream>
using namespace std;

int main() {

  int adm_nos[100];
  int N, to_search;

  cout<<"Enter the number of students:";
  cin>>N;

  cout<<"Enter admission numbers:"<<endl;

  //Read n numbers into array
  for(int i=0;i<N;i++) {
    cout<<"["<<i<<"]"<<":"; //Display [0]:, [1]:, ..[n-]:
    cin>>adm_nos[i];
  }

  cout<<endl;
  cout<<"Enter the admission no. to search:";
  cin>>to_search;

  bool found=false; //to test whether an item is found

  for(int i=0;i<N;i++) {
    if(adm_nos[i]==to_search) {
      cout<<"Found "<<to_search<<" at index "<<i<<endl;
      found=true; //set to true, so that error message is not shown
      break;
    }
  }

  if(!found) //show the error message if not found
    cout<<to_search<<" was not found"<<endl;

  return 0;
}

