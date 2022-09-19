#include <iostream>
using namespace std;

void create_matrix(int **m, int *r, int *c){
  for(int i = 0; i < *r; i++){
    for(int j = 0; j < *c; j++){
      cin >> m[i][j];
    }
  }
}

void print_matrix(int **m, int *r, int *c){
  for(int i = 0; i < *r; i++){
    for(int j = 0; j < *c; j++){
      cout << m[i][j] << " " ;
    }
    cout << endl;
  }
}

int main(){

  int* rows;
  rows = new int;
  int* cols;
  cols = new int;

  cout << "Number of rows: ";
  cin >> *rows;
  cout << "Number of cols: ";
  cin >> *cols;
  int **m = new int *[*rows];
  for(int i=0; i<*rows; i++){
    m[i] = new int [*cols];
  }
  cout << "Insert values: ";
  create_matrix(m, rows, cols);
  print_matrix(m, rows, cols);
  

  for(int i=0; i<*rows; i++){
    delete [] m[i];
  }
  delete []m;
  delete rows;
  delete cols;
  return 0;
}
