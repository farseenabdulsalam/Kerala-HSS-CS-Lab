/*
 * Program to input a group code and
 * output corresponding group name based
 * on the following:
 * |-----------------------------------|
 * | Code no. | Subject                |
 * |----------|------------------------|
 * |  5       | computer science       |
 * |  33      | computer application   |
 * |  39      | science                |
 * |  other   | invalid option         |
 * |-----------------------------------|
 */

#include<iostream>
using namespace std;

int main() {

  int group_code;
  cout<<"Enter the group code:";
  cin>>group_code;

  cout<<"Group name:";

  switch(group_code) {
    case 5:
      cout<<"Computer Science";
      break;
    case 33:
      cout<<"Computer Application";
      break;
    case 39:
      cout<<"Science";
      break;
    default:
      cout<<"Invalid Option";
  }
  cout<<endl;

  return 0;
}

