// #include<stdio.h>
// int fun(int x, int y ){    // function declaration 
//     return x+y;
// }

// int main(){
//     int i=10, j=20, k;
//     k= fun(i,j);                    // function call 
//     printf("%d",k);
//     return 0;
// };

// #include<stdio.h>
// void foo(int, int);
// int main(){
//     int a=10, b=20;
//     foo(a,b);
//     printf("\n%d%d",a,b);
//     return 0;
// };
// void foo(int a , int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d%d",a,b);
// };

// #include<stdio.h>
// void a(){
//     printf("a"); b();
// }
// void b(){
//     printf("a"); c();
// }
// void c(){
//     printf("a");
// }
// int main(){
//     a();
//     b();
//     return 0;
// };

// #include<stdio.h>
// int g(int p){
//     printf("%d",p); return p;
// }
// int h(int q){
//     printf("%d",q); return q;
// }
// void f(int x, int y){
//     g(x);
//     h(y);
// }
// int main(){
//     f(g(10),h(20));    //evaluating right to left 
// }
// #include<stdio.h>
// int f(int n){
//     static int i=1;
//     if(n>=5)
//     return n;
// n=n+i;
// i++;
// return f(n);
// };
// int main(){
//     printf("%d", f(1));
// }