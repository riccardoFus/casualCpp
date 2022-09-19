#include <iostream>
#include <cstdlib>

using namespace std;

int ** generate_matrix(int R, int C);
void print_matrix(int **m, int R, int C);

int main(){

  srand(time(NULL));
  int R, C;
  cout << "Inserisci numero righe e colonne: ";
  cin >> R >> C;
  int **m;
  m = generate_matrix(R, C);
  print_matrix(m, R, C);
  
  for(int i=0; i<R; i++){
    delete[] m[i];
  }
  delete[] m;
  return 0;
}

int ** generate_matrix(int R, int C){
  int **m = new int*[R];
  for(int i = 0; i<R; i++){
    m[i] = new int[C];
  }
  for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){
      m[i][j] = rand()%10;
    }
  }
  return m;
}

void print_matrix(int** m, int R, int C){
  for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){
      cout << m[i][j] << " " ;
    }
    cout << endl;
  }
}
