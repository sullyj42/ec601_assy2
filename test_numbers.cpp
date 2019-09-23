#include "numbers.cpp"
#include <vector>
#include <iostream>
#include <string>     // std::string, std::to_string

using std::vector;
using std::string;

using namespace std;

int main(int argc, char **argv)
{ int x = 7; 
  std::cout << "testing is_happy\n";
  cout << endl << "Is " << to_string(x) << " happy: " << is_happy(int(x)) << endl; 


  vector<double> v = {7, 5, 16, 8};
  cout << "testing product_of_positives\n";
  cout << endl << "The product of the vector is " << to_string(product_of_positives(v)) << endl; 

  vector<int> v1 = {7, 5, 16, 8};
  cout << "testing product_of_positives\n";
  cout << endl << "The product of the vector is " << to_string(product_of_positives(v1)) << endl; 

  int num2div = 12;
  vector<int> divs; 
  cout << "testing proper_divisors\n";
  cout << endl << "Dividing: " << to_string(num2div) << endl;
  divs = proper_divisors(num2div);
  for(int i = 0; i < divs.size(); i++){
     cout << "A proper divisor is: " << to_string(divs.at(i)) << endl; 
  }

  cout << endl; 
  string a = "1233832981281098218310";
  string b = "1234567893908981781";
  cout << "testing string add" << endl;
  cout << "adding " << a << endl; 
  cout << "with   " << b << endl; 
  string addOut = add(a, b);
  cout << "The sum is " << addOut << endl; 
  return 0;
}