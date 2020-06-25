//键盘的音调随着输入电路的变化而变化
//三个模拟从5v到0-3v的按钮
//从0到3接地3个10k的电阻
//数字引脚8是8欧姆的扬声器
int pos = 0;    //因为 这个循环判断中bai 有可能出现对所有的dui, 条件 max<*(s+i) 都不成立，那么 pos 就没有值了,所以 一开始给 pos=0。

void setup()
{
  pinMode(A0, INPUT);    //设定A0引脚为数字输入
  pinMode(8, OUTPUT);    //设定8引脚为数字输出
  pinMode(A1, INPUT);    //设定A1引脚为数字输入
  pinMode(A2, INPUT);    //设定A2引脚为数字输入
}

void loop()
{
  
  if (digitalRead(A0) == HIGH){
    tone(8, 440, 100); 
  }    
          //如果检测到按A0按钮，播放编号为57的音调（A4=440 hz）
  
  if (digitalRead(A1) == HIGH) {
    tone(8, 494, 100); 
  }    
          //如果检测到按A1按钮，播放编号为59的音调（B4=494 hz）
  
  if (digitalRead(A2) == HIGH) {
    tone(8, 523, 100); 
  }   
          //如果检测到按A2按钮，播放编号为60的音调（C5=523 hz） 
  delay(10);     //稍微延迟10ms，以提高模拟性能
}