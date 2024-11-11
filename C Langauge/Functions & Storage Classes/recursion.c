// #include<stdio.h>                 // factorial of n number 
// int factorial(int n){
//     if (n==0 || n==1){
//     return 1;
//     }
//     else{
//     return n * factorial(n-1);
//     };
// };
// int main (){
//       printf("%d",factorial(5));
// }

// #include<stdio.h>           // fibonacci
// int fib(int n){
//     if(n==0 || n==1){  
//         return 1;
//     }
//     else{
//     return fib(n-1) + fib(n-2);
//     }
// }

// int main(){
//     printf("%d",fib(8));
// return 0; 
// };

// #include<stdio.h>
// void print(int n){
//     if(n<=0) return ;
//     print(--n);
//     printf("%d",n);
// }

// int main(){
//     print(5);
//     return 0;
// }

// #include<stdio.h>
// int foo(int x, int n){
//     int val=1;
//     if(n>0){
//         if(n%2==1) val = val * x;
//         val=val*foo(x*x, n/2);
//     }
//     return val;
// };

// int main(){
//     printf("%d", foo(4,3));
// }

// #include<Stdio.h>                  //nested recursion 
// int fun(int x){
//     if(x>100){
//     return x-10;
//     }
// else{
//     return fun(fun(x+11));
// }
// };

// int main(){
//     int x;
//     printf("Enter the value of x", x);
//     scanf("%d",&x);
//     printf("%d",fun(fun(x+11)));
// return 0;
// }


#include<stdio.h>

void fun1(int n){
    if(n == 0) return;
    printf("%d ", n);
    fun2(n - 2);
}

void fun2(int n){
    if(n == 0) return;
    printf("%d ", n);
    fun1(++n);
}

int main(){
    fun1(3);
    return 0;
}
