#include  <iostream>
#include <vector>
using namespace std;

int main() {
  string input;
  cin >> input;

  int result = -1;
  int count = 1;
  
  for(int i = 1; i<input.size(); i++){
    int temp = input.at(i-1);
    if(input.at(i) == temp) {
      count++; 
      if(count == 3 && result < int(input.at(i) - '0') * 111)
        result = int(input.at(i) - '0') * 111;
    } else {
      count = 1;
    }
  }

  cout << result;
}