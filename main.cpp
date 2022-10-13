//Title: HW7 Problem 4, License to Launch Kattis
//Programmer: Jackson McKay
//Course: CSCI 130-001 Dr. Mellenthin
//    Cititions used on the pdf

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  
  //define n and ask for kattis input
  int n;
  cin >> n;

  //set up array for space junk
  int sj[n];
  
  //for loop to ask for space junk info based on n
  for (int i = 0; i < n; i++) {
    cin >> sj[i];
  }

  //int for minimum
  int min;
 //for loop to go through ints to find minimum
  min = sj[0];
  for (int i = 0; i < n; i++) {
    if(sj[i] < min) {
      min = sj[i];
    }
  }
  //temporary cout for min
  //cout << "This is the lowest val: " << min << endl;
  
  //int to find the location of min in sj array
  int d = distance(sj, find(sj, sj + n, min));
  cout << d;
}