########################################
#----此程式用於抽取不重複組別之同學----#
########################################

#### 抽樣 function #### 
DrawLots <- function(classmate, times){
  
  Team <- c(sample(5, size = times, replace = F)) #從樣本隨機抽出組別
  Person <- c(sample(8, size = times, replace = T)) #再從組別抽出組員
  
  for(i in 1:times){ #迴圈輸入的次數
    if(classmate[Team[i],Person[i]]!=""){ #組員不為空值才算正確抽出（有些組人較少）
      print(classmate[Team[i],Person[i]])
    }
    else{
      print(classmate[Team[i],sample(7, size=1)]) #將取樣欄為減-1，再抽一次
    }
  }
}

####

classmate <- t(read.csv("1_UTF8.csv")) #引入組別名單，並將資料行列互換
#教室路徑：C:\\Users\\E901\\Desktop\\1.csv
print("開始抽簽吧！")
print("請輸入欲抽取的人數:")
times <- readline() #讀取使用者輸入

print("這次被抽到的幸運兒是:")
DrawLots(classmate, times)
