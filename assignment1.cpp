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
  /*while (!inFile.eof()) {
    
   
    getline(inFile, line, ' ');
     
    inSS >> number;
    nums[i] = number;
    i++;
    
   // Keeps track of the index of the array
    }*/
  string line, numstring;
  
  //getline(inFile,line);
  while (inFile.good()){
    int number = 0;
    getline(inFile, line);
    istringstream inSS(line);
    while (getline(inSS, numstring, ' ')){
      inSS >> number;
      nums[i] = number;
      cout << nums[i] << endl;
      i++;
    }
  }
    i--;
  
  inFile.close();
   

  int testnum = 15;
  int index = int_is_present(nums, testnum);
  if (index != -1) {
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
  cout << "Added value: " << nums[i] << " at index " << i << endl;
  i++;
  
  /*for (int j = 0; j < i; j++){
    cout << nums[j] << endl;
  }*/
  
}