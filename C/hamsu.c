#include<stdio.h>
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x - y;
}
int multi(int x, int y){
    return x * y;
}
int div(int x, int y){
    return x / y;
}
int main(void){
    int x =20, y =10;
    printf("합: %d 차: %d 곱: %d 몫: %d", add(x,y), sub(x,y), multi(x,y), div(x,y));
    return 0;
}