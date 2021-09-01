#include <iostream>

int main() {
  
  int year;
  std::cout << "Enter year: ";
  std::cin >> year;
  
  if (year < 1000){
    std::cout << "You must enter 4 digit number. Please try again. \n";
    return 0;
  }
  else{
    if(year % 4 == 0 && year % 400 == 0){
      std::cout << year << " is a leap year \n";
    }
    else if (year % 100 == 0 && year % 400 != 0){
      std::cout << year << " is a common year \n";
    }
    else{
      std::cout << year << " is a leap year \n";
    }
  }
}

// SOLUTION 2
/*
  else{
    if(year % 4 != 0){
      std::cout << year << " is a common year.";
    }
    else if(year % 100 != 0){
      std::cout << year << " is a leap year.";
    }
    else if(year % 400 != 0 ){
      std::cout << year << " is a common year.";
    }
    else{
      std::cout << year << " is a leap year.";
    }
  }
  */