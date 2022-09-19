#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void print_vector(float *v, int N){
  for(int i=0; i<N; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(int argc, char * argv[]){

  fstream input;
  int N,M;
  if(argc!=4){
    cout << "Usage: ./temperatura <input.txt> <max number> <number temperatures>" << endl;
    return 0;
  }

  input.open(argv[1], ios::in);
  if(input.fail()){
    cout << "File inesistente !!";
    return 0;
  }
  N = atoi(argv[2]);
  M = atoi(argv[3]);

  float *v = new float[M];

  int i=0;
  char tmp[10];
  input >> tmp;
  while(!input.eof()){
    v[i] = atof(tmp);
    i++;
    input >> tmp;
  }

  print_vector(v, N);
  
  input.close();
  delete[] v;
  return 0;
}
