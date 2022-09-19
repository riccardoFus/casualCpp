#include <iostream>
#include <cstdlib>
using namespace std;

int * generate_numbers(int N);
void print_vector(int* v, int N);

int main(){

  srand(time(NULL));
  int * v;
  int N;
  cout << "Inserisci N: ";
  cin >> N;
  v = generate_numbers(N);
  cout << "Array generato: " << endl;
  print_vector(v, N);

  delete[] v;
  return 0;
}

int * generate_numbers(int N){
  int * v;
  v = new int[N];
  for(int i=0; i<N; i++){
    v[i] = rand()%100+1;
  }
  return v;
}

void print_vector(int* v, int N){
  for(int i=0; i<N; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}
