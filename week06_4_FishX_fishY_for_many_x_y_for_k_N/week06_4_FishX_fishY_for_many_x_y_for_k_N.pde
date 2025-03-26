///week06_4_FishX_fishY
_for_many_x_y_for_k_N
///城市模仿自week04_5及week03_4
void setup(){
  size(600, 400);
}
float fishX = 300, fishY = 200; //魚座標
float[]x = new float[100];//Java的陣列
float[]y = new float[100];//最多有100個飼料
int N = 0;//目前0科飼料
void draw(){
   background(#c0ffee);
   for(int i=0; i<N; i++){
     ellipse(x[i],y[i],8 ,8);
     y[i]++;
     if(y[i]>400){
       for(int k=i; k<N-1; k++){
         x[k] = x[k+1];
         y[k] = y[k+1];
       }
       N--;
     }
   }
   println(N);
   ellipse(fishX, fishY, 30, 10);
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
