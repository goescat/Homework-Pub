//用於產生隨機500位學生資料，並為成績評級
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){

  int studentScore[500][2]={0}; //建立500位學生，包含ID、成績、成績評級資料

  srand( time(NULL) ); //亂樹種子
  int randMax=(101-35); //最高分減去最低分，考綠到從0開始，最高分要加1

  for(int i=1; i<=500; i++){ //迴圈500次
    studentScore[i][0] = i; //學生ID

    studentScore[i][1] = (rand()%randMax)+35; //學生成績隨機產生

    //學生成績評級
    if(studentScore[i][1]>=90){ //90分（含）以上
      studentScore[i][2]=65; //A(ascii)
    }
    else if(studentScore[i][1]<90 && studentScore[i][1]>=80){
      studentScore[i][2]=66; //B(ascii)
    }
    else if(studentScore[i][1]<80 && studentScore[i][1]>=70){
      studentScore[i][2]=67; //C(ascii)
    }
    else if(studentScore[i][1]<70 && studentScore[i][1]>=60){
      studentScore[i][2]=68; //D(ascii)
    }
    else if(studentScore[i][1]<60){
      studentScore[i][2]=70; //F(ascii)
    }
    //輸出
    cout << "ID" << studentScore[i][0] <<" " <<studentScore[i][1]<<" " <<char(studentScore[i][2]) <<"\n";
  }

}
