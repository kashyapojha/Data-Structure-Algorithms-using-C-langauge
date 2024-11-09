// #include<stdio.h>
// int main(){
//     int a=5;
//     switch(a){
//         case 4: printf("%d",5);
//         case 5: printf("%d",5);
//         case 6: printf("%d",6);

//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     switch (13/4.0){
//         case 4: printf("%d",4);
//         break;
//         case 3: printf("%d",2);
//         break;
//         case 5: printf("%d", 5);
//         break; 
//     }
//     return 0; 
// }

// duplicate cases are not allowed 
//break statement takes control out of switch block 
#include<stdio.h>
int main(){
    int a=4; 
    switch(4){
        case 2: printf("%d", 4); 
        break;
        case a : printf("%d", 2); // will give error as case label is not matched 
        break;
        default: printf("none"); 
    }
    return 0;
}