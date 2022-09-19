#include <iostream>
using namespace std;

void insert_array(int v[], int dim);
void print_array(int v[], int dim);
void rotate_array(int v[], int dim);

int main(){

  int dim;
  cout << "Inserire dimensione vettore: ";
  cin >> dim;
  int v[dim];
  insert_array(v, dim);
  print_array(v, dim);
  rotate_array(v, dim);
  print_array(v, dim);
  return 0;
}

void insert_array(int v[], int dim){
  cout << "Inserire valori vettore: ";
  for(int i = 0; i < dim; i++){
    cin >> v[i];
  }
}

void print_array(int v[], int dim){
  cout << "Vettore stampato: ";
  for(int i = 0; i < dim; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

void rotate_array(int v[], int dim){
  for(int i = 0; i < dim; i++){
    int t = v[i];
    v[i] = v[(i+1)%dim];
    v[(i+1)%dim] = t;
  }
}
