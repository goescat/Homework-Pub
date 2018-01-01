#include<iostream>
using namespace std;

int main(){
  int how_many;
  cout << "輸入你要相加的數字個數？";
  cin >> how_many;

  int arr[how_many];
  for(int i=0;i<how_many;i++){
    cout << "輸入數字" << i+1 << "：";
    cin >> arr[i];
  }

  int sumcount=0;
  for(int i=0;i<how_many;i++){
    sumcount = sumcount+arr[i];
  }
  cout << "全部加起來等於：" << sumcount;

  return 0;
}

/*
無提示輸入序列版：
#include<iostream>
using namespace std;

int main(){
  int how_many;
  cin >> how_many;

  int arr[how_many];
  for(int i=0;i<how_many;i++){
    cin >> arr[i];
  }

  int sumcount=0;
  for(int i=0;i<how_many;i++){
    sumcount = sumcount+arr[i];
  }
  cout << sumcount;

  return 0;
}
*/
