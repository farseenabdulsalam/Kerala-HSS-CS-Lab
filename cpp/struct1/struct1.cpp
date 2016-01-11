
/*
 * Program to find the net salary of an employee
 * by defining a struct with the details:
 *  employee code,name,basic pay,DA,HRA,PF.
 */

#include <iostream>
using namespace std;

struct employee {
  int emp_code;
  char name[25];
  int basic_pay;
  int da;
  int hra;
  int pf;
  int net_salary;
};

int main() {
  employee emp;

  cout<<"Enter the details of the employee:"<<endl;
  cout<<"\tEmployee code:";
  cin>>emp.emp_code;
  cout<<"\tName:";
  cin>>emp.name;
  cout<<"\tBasic Pay:";
  cin>>emp.basic_pay;
  cout<<"\tDA:";
  cin>>emp.da;
  cout<<"\tHRA:";
  cin>>emp.hra;
  cout<<"\tPF:";
  cin>>emp.pf;

  emp.net_salary = (emp.basic_pay + emp.da + emp.hra) - emp.pf;

  cout<<"Net salary:"<<emp.net_salary<<endl;
  return 0;
}

