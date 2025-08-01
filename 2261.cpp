#include <iostream>
#include <cmath>
using namespace std;

int point_distance(int point_a[], int point_b[]) {
  return sqrt(
    pow(point_a[0]-point_b[0], 2)
    + pow(point_a[1]-point_b[1], 2));
}

int main(){
  int point_one[2] = {10000, 10000};
  int point_one_temp[2];
  int point_two[2] = {-10000, 10000};
  int point_two_temp[2];
  int point_thr[2] = {-10000, -10000};
  int point_thr_temp[2];
  int point_fou[2] = {10000, -10000};
  int point_fou_temp[2];

  int one_min = 1000000;
  int two_min = 1000000;
  int thr_min = 1000000;
  int fou_min = 1000000;

  int testcase;
  cin >> testcase;

  for(int i = 0; i < testcase; i++){
    int point[2];
    cin >> point[0] >> point[1];

    if(point_distance(point_one, point) < one_min){
      point_one_temp[0] = point[0];
      point_one_temp[1] = point[1];
      one_min = point_distance(point_one, point);
    }
    if(point_distance(point_two, point) < two_min){
      point_two_temp[0] = point[0];
      point_two_temp[1] = point[1];
      two_min = point_distance(point_two, point);
    }
    if(point_distance(point_thr, point) < thr_min){
      point_thr_temp[0] = point[0];
      point_thr_temp[1] = point[1];
      thr_min = point_distance(point_thr, point);
    }
    if(point_distance(point_fou, point) < fou_min){
      point_fou_temp[0] = point[0];
      point_fou_temp[1] = point[1];
      fou_min = point_distance(point_fou, point);
    }
  }
  
  int resultA = point_distance(point_one_temp, point_thr_temp);
  cout << "resultA : " <<resultA << '\n';
  cout << "point_one_temp : " << point_one_temp[0] << ", " << point_one_temp[1] << '\n';
  cout << "point_thr_temp : " << point_thr_temp[0] << ", " << point_thr_temp[1] << '\n';
  int resultB = point_distance(point_two_temp, point_fou_temp);
  cout << "resultB : " <<resultA << '\n';
  cout << "point_two_temp : " << point_two_temp[0] << ", " << point_two_temp[1] << '\n';
  cout << "point_fou_temp : " << point_fou_temp[0] << ", " << point_fou_temp[1] << '\n';

  cout << max(resultA, resultB) << endl;

  return 0;
}