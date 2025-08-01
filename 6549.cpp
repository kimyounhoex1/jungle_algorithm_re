#include <iostream>

using namespace std;

int devide_conquer(int histogram[], int start_idx, int end_idx){
  if(start_idx == end_idx){
    return histogram[start_idx];
  } 
  else if(){
    
  }



  else{
    return
    max(devide_conquer(histogram, start_idx, (start_idx+end_idx)/2),
    devide_conquer(histogram, ((start_idx+end_idx)/2)+1, end_idx));
  }


}

int main(){
  while(true){
    int testcase;
    cin >> testcase;

    int histogram[testcase];

    if(testcase == 0){
      return 0;
    }

    for(int i = 0; i<testcase; i++){
      cin >> histogram[i];
    }
    devide_conquer(histogram);

  }
}