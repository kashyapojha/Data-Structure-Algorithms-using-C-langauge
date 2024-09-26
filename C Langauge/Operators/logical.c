// ! , && , ||
// #include<stdio.h>
// int main(){
//     int a=20;
//     int b=30;
//     printf("%d",a>10 && b>10);
// }

#include<stdio.h>
void main(){
    int x=1, y=0, z=5;
    int a=x&&y && ++z;
    printf("%d",z);
}
