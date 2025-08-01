#include <iostream>

using namespace std;

char board[2200][2200];

void recur(int x, int y, int N){
  if(N==1){
    board[x][y] = '*';
    return;
  }

  int block = N / 3;
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      if(i==1 && j==1){
        continue;
      }
      recur(x + i * block, y + j * block, block);
    }
  }

}

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      board[i][j] = ' ';

  recur(0, 0, N);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      cout << board[i][j];
    cout << '\n';
  }

  return 0;
}