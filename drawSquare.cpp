#include<iostream>
using namespace std;

void square(int side, char fillCharacter) {
  for(int i=0; i<side; i++){
    cout << fillCharacter;
  }
  cout << "\n";
  for(int i=0; i<side-2; i++){
    cout << fillCharacter;
    for(int i=0; i<side-2; i++){
      cout<<" ";
    }
    cout << fillCharacter;
    cout<<"\n";
  }
  for(int i=0; i<side; i++){
    cout << fillCharacter;
  }
  cout << "\n";
}

int main(){
  int side_long;
  cout << "輸入正方形邊長：";
  cin >> side_long;

  char fillCharacter;
  cout << "輸入喜歡的字元，用來排正方形：";
  cin >> fillCharacter;

  square(side_long,fillCharacter);

  return 0;
}
