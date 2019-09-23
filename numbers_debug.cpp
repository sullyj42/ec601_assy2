#include <vector>
#include <string>
using std::vector;
using std::string;
#include <iostream>

bool is_happy(int x) {
  bool happy    = false;
  int  happysum = 0;
  int  iter     = 0;
  int  remain   = 0;
  int  digit; 

  if (x == 1){
    happy = true;
  } else {
    while ((! happy) && (iter < 1000)){

      if (x < 10) { 
        happysum = x*x; 
      }
    
      while (x > 10){
        remain   = x / 10; 
        digit    = x - remain * 10; 
        happysum = happysum + digit*digit;
        x        = x / 10; 
      }
      if(happysum == 1){
        happy = true; 
      } else {
        x = happysum;
        happysum = 0; 
        iter = iter + 1; 
      }
    }
  }
  return happy;
}

double product_of_positives(vector<double> x) {
   double prod    = 1.0;
   int    vecLen = x.size();

   for(int i = 0; i < vecLen; i ++){
    prod = prod * x.at(i); 
   }

   return prod; 
 }

int product_of_positives(vector<int> x) {
   int prod    = 1;
   int    vecLen = x.size();

   for(int i = 0; i < vecLen; i ++){
    prod = prod * x.at(i); 
   }

   return prod; 
 }
 vector<int> proper_divisors(int n) {
  vector<int> divs;
  int         remain; 
  int         num; 

    for( int j = 1; j < n; j ++){
      remain = n % j;
      if (remain == 0){
        divs.push_back(j); 
      }
    }
  return divs; 
}


  string add(const string& num1, const string& num2) {
    string num11 = num1; // Allows me to manipulate the string
    string num22 = num2; // which is exactly what the prof does not want
    string sumstr = "";

    num11.insert(0, "0"); // Makes iterating slightly easier
    num22.insert(0, "0");

    int n1 = num11.size(); 
    int n2 = num22.size(); 
    int N, N1, N2; 
    int dig1;
    int dig2; 
    int dig3; 
    int iter= 1; 

    int i1; 

    string temp1;
    string temp2;
    string temp3;
    int sum1; 

    if (n1 > n2){
      N = n1; 
    } else {
      N = n2; 
    }
    std::cout << std::to_string(N) << std::endl; 

    for (int i = 0; i < N; i ++){
      std::cout << "i: " << std::to_string(i) << std::endl; 

      if (i > n1){
        N1 = 0 ; // Push to ther zero'd value
      } else {
        N1 = n1 - i - 1; // Allow to sit
      }
      if (i > n2){
        N2 = 0; 
      } else {
        N2 = n2 - i - 1; 
      }
      if (N1 < 0){ 
        N1 = 0;
      }
      if (N2 < 0){ 
        N2 = 0;
      };

      std::cout << std::to_string(N1) << std::endl; 
      std::cout << std::to_string(N2) << std::endl; 
      std::cout << std::endl; 

      std::cout << std::endl; 

      string digS1 = string(1, num11.at(N1)); 
      string digS2 = string(1, num22.at(N2));

      dig1 = stoi(digS1); 
      dig2 = stoi(digS2); 
      if (sumstr.size() == iter){
        string digS3 = string(1, sumstr.at(0)); // I'm iterating backwards so this is confusing
        dig3 = stoi(digS3);
        sumstr.erase(0, 1); // So dodgy lol
      } else{
        dig3 = 0; 
      }
      
      int sum1 = dig1 + dig2 + dig3; 
      std::cout << "Digit 1: " << dig1 << std::endl; //string(1, num11.at(i)) << std::endl;
      std::cout << "Digit 2: " << dig2 << std::endl; //string(1, num22.at(i)) << std::endl;
      std::cout << "Digit 3: " << dig3 << std::endl; //string(1, digit3) << std::endl;

      string tempsum = std::to_string(sum1); 
      std::cout << "Sum: " << tempsum << std::endl << std::endl;

      sumstr.insert(0, tempsum);
      std::cout << "Sumstr: " << sumstr << std::endl << std::endl;
      std::cout << "--------" << std::endl;
      iter ++ ;
    }
  while (sumstr.at(0) == '0'){
    sumstr.erase(0,1);
  }
  return sumstr;
}
