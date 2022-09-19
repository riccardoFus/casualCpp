#include <iostream>
using namespace std;

void insert_array(int v[], int dim);
void print_array(int v[], int dim);
bool is_subarray(int v1[], int v2[], int dim1, int dim2);

int main(){

  int dim1, dim2;
  cout << "Inserire dimensione primo vettore: ";
  cin >> dim1;
  int v1[dim1];
  insert_array(v1, dim1);
  cout << "Inserire dimensione secondo vettore: ";
  cin >> dim2;
  int v2[dim2];
  insert_array(v2, dim2);
  print_array(v1, dim1);
  print_array(v2, dim2);
  if(is_subarray(v1, v2, dim1, dim2)){
    cout << "L'array v2 è un subarray di v1" << endl;
  }else{
    cout << "L'array v2 non è un subarray di v1" << endl;
  }
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

bool is_subarray(int v1[], int v2[], int dim1, int dim2){
  bool ritorno;
  for(int i = 0; i < dim1-dim2; i++){
    for(int j = 0, s = i; j < dim2; j++, s++){
      if(!(v2[j]==v1[s])){
	ritorno = false;
	j = dim2;
      }else{
	ritorno = true;
      }
    }
    if(ritorno == true){
      i = dim1 - dim2;
    }
  }
  return ritorno;
}
