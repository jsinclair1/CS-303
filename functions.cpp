#include "functions.h"

pair<int, int> values;

int int_is_present(int nums[] , int given){
  //Searches for the given value in the array
  try {
      for (int i = 0; i < 150; i++){
        if (nums[i] == given){
          return i;
          }
       }
  }
  catch(...){ //If the given value is not in the array, it returns -1
    cout << "Error: Integer not found" << endl;
  }
  return -1;
}

pair<int,int> modify_value(int nums[] , int index, int newNum){
  pair<int,int> values;
  try {
  values.first = nums[index];
  values.second = newNum;
  nums[index] = newNum;
  return values;
  }

  catch (...){
    cout << "Unable to modify value" << endl;
  }


  return values; //Returns pair of old value and new value
}

void add_value(int nums[] , int value, int currentsize){
  nums[currentsize+1] = value;
  //Adds new value to index 1 more than current size of array
}

void remove_value(int nums[], int index){
  nums[index] = 0;
  //Changes value at given index to 0
}