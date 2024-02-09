#include <iostream>
#include <fstream>
#include <sstream>
#include "functions.h"
using namespace std;

int main() {

  ifstream inFile;
  inFile.open("A1input.txt");

  if (!inFile){
    cout << "Unable to open file";
  }
  int nums[150];
  int i = 0;
//Inputs the numbers from the file into an array
  while (!inFile.eof()) {
    i++;
    int number = 0;
    string line;
    getline(inFile, line, ' ');
    istringstream inSS(line); {
    inSS >> number;
    nums[i] = number;
    cout << nums[i] <<"-" << i << endl;
   // Keeps track of the index of the array
    }
     
  }
  inFile.close();
   

  int testnum = 10;
  int index = int_is_present(nums, testnum);
  if (index != -1){
    cout << testnum << " is at index " << index << endl;
  }
  else {
    cout << testnum << " is not in the array" << endl;
  }

  pair<int,int> moddednums = modify_value(nums, 0 , 777);
  cout << "Old value: " << moddednums.first << endl;
  cout << "New value: " << moddednums.second << endl;

  add_value(nums, 888, i);
  i++;
  cout << "Added value: " << nums[i] << " at index" << i << endl;
  i++;
  
  /*for (int j = 0; j < i; j++){
    cout << nums[j] << endl;
  }*/
  
}