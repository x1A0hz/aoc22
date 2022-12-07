#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;


int main() {
  // Create a variable to store the total calories for 1 elf
  int totalfor1elf;
  // Create a variable to store integer calories (each line) 
  int mostCal;
  // Create a text string, which is used to output the text file
  string calories;
  
  // Open the inputfile
  ifstream file("caloriesinput.txt");
  // Use a while loop together with the getline() function to read the file line by line
  while (getline (file, calories)) {
    if (calories.empty()) {
      totalfor1elf = 0;  //to reset & calculate total calories for next elf
    } else { 
      // stoi(calories) to convert string data type to int
      totalfor1elf += stoi(calories); 
      }
    
  string eachtotal[] = {to_string(totalfor1elf)};
  if (stoi(eachtotal[0]) > mostCal) {
    mostCal = stoi(eachtotal[0]) ; 
    }
  }  
  
  cout << mostCal << endl;
  
  // Close the file
  file.close();
}
