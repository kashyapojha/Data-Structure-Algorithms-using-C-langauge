// #include<stdio.h>
// int main(){
//     char ch;
//     for (ch=1; ch; ch++){
//         printf("%c",ch);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int i ;
//     for ( ; ; ){
//         printf("Hello");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i;
//     for(i=1; i<=4; printf("%d",i)){
//         printf("%d",i);
//         i++;
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1; i<=3 ; i++){    // 
//         for(j=1; j<=3;  j++){
//             printf("Product", i*j);
//         }
//     };
//     return 0;
//     // total number of times loop execute m*n = 3*3 = 9 times loop will run 
// }

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1; i<=10; i++){
//         for(j=1; j<=i; j++){
//             printf("Product: %d\n", i*j);
//         }
//     }
//     return 0;
// };

// while loop 

// #include<stdio.h>
// int main(){
//     int i=2+4%6+9/10;
//     while (i<10){
//         printf("I am good student");
//         i++;
//     }
//     return 0;

// };

// do while loop 

// #include<stdio.h>
// int main(){
//     int num=65, count = 0;
//     do{
//         count++;
//         num>>=1;
//     }while(num);
//     printf("%d",count);
//     return 0; 
// };

#include<stdio.h>
int main(){
    for( int i =1; i<=10; i++){
        if(i==5 || i==6){
            continue;
        }
        printf("%d", i);
    }

}