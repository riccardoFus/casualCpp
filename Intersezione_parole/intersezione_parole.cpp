#include <iostream>
#include <cstring>
#include <cstdlib>
#include <fstream>

using namespace std;

const int N_PAROLE = 1000, LUNGHEZZA = 100;

int main(int argc, char * argv[]){

  fstream myin1, myin2, myout;
  if(argc!=4){
    cout << "Usage: ./intersezione_parole <input1.txt> <input2.txt> <output.txt>" << endl;
    return 0;
  }

  myin1.open(argv[1], ios::in);
  myin2.open(argv[2], ios::in);
  myout.open(argv[3], ios::out);

  if(myin1.fail()||myin2.fail()){
    cout << "File inesistenti!!!" << endl;
  }

  char stringa1[N_PAROLE][LUNGHEZZA];

  int i=0;
  while(myin1>>stringa1[i]){
    i = i+1;
  }
  
  dim = i;

  i = 0;
  char stringa2[LUNGHEZZA];

  while(myin2>>stringa2){
    int conta = 0;
    if(strcmp(stringa1[i], stringa2)==0||conta!=0){
      myout << stringa2 << endl;
      conta = conta+1;
    }
    i = i+1;
  }

   
  myin1.close();
  myin2.close();
  myout.close();
  
  return 0;
}
