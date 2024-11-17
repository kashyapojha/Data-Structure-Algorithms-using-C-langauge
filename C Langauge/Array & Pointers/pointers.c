//  int *ptr;  // A pointer to an integer // declaration of pointer
// int *ptr= &a   // initialization of pointer
//ptr = &a;  It is an initialization or assignment statement

//*ptr = &a;
//This statement is incorrect, 
//and would cause a compilation error. The reason is that *ptr is trying to dereference the pointer
//(i.e., access the value at the address stored in ptr), but you're trying to assign it a memory address (&a), which is not valid.




//  #include<stdio.h>


// int main(){
//     int * ptr;
//     int a= 10;
//     ptr = &a;
//     printf("address of a= %p",ptr); // Print the address stored in ptr
    
// };

// #include<stdio.h>
// int main(){
//     int a=10;
//     int * ptr = &a;
//     printf("%d", a);  //10
//     printf("\n%u", ptr);   // address of a 
//     printf("\n%d", *ptr);   // 10
//     printf("\n%u",&a);   //address of a 
//     printf("\n%u", &ptr);   //address of ptr which  is storing address of a 

// };


// #include<stdio.h>
// int main(){
//     int a= 20;
//     int * ptr;
//     ptr=&a;   // ptr storing address of a 
//     a=a+40;   // int value of a , a=20+40= 60
//     *ptr=*ptr+20;      // *ptr is value at address that is 60. 60+20 = 80 
//     printf("%d",a);    //80 
//     return 0;    
// }

// // ptr=&a -> address of a in ptr
// // *ptr -> value at address a 

// #include<stdio.h>
//     int a=10;
//     int main(){
//         int * ptr1, ** ptr2;
//         int b=20;
//         ptr1= &b;   // address of b in ptr1
//         ptr2= &ptr1;   // address of ptr1 in ptr2
//         a=a+10;     //a=20
//         b=b+40;     // b=60
//         *ptr1= *ptr1 - b;     // value at address of b  - value of b   = 0 
//         **ptr2= a+20;     // value of ptr1 20+20 = 40
//         printf("%d",b);
//         return 0;
// //     };

// #include<stdio.h>
// int main(){
//     int a , *b , **c;
//     a=10;
//     b=&a;   //b stores address of a
//     c=&b;    // c stores address of b
//     a=a+10;    //a=20
//     *b=*b+20;   // a = 40 , b has address of a and *b is value at &a, so a=40
//     **c=**c + 20;   // a= 60
//     printf("%d", a);  //60
//     return 0;
// }

//  a -> b -> c
  //* -> pointing to b from c
  //** -> pointing to a from c

 // CALL BY REFRENCE 
// #include<stdio.h>
// void fun(int *ptr1, int *ptr2){
//     *ptr1= *ptr1 + *ptr2;  //  value at ptr1 = 30
//     *ptr2= *ptr2 + 5;   //     value at ptr2 = 25
// };
// int main(){
//     int a=10, b=20;
//     fun(&a, &b);
//     printf("%d %d",a,b);  // 30 25
//     return 0;
// };


// #include<stdio.h>
// void f(int *p, int *q){
//     p=q;      // address of p and q same .. p points to q 
//     *p=2;                // value at q updated to 2 i.e j's value ,while value of i being 0 only  
// }

// int i=0; j=1;
// int main(){
//     f(&i, &j);            
//     printf("%d %d\n", i, j);     // 0,2
//     return 0;
// };

// // THREE TYPES OF SWAP  

//                           PASS BY VALUE
// #include<stdio.h>

// void swap(int a, int b) {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("Inside swap: a = %d, b = %d\n", a, b); //swapped values inside swap
// }

// int main() {
//     int a, b;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);
    
//     printf("Before swapping: a = %d, b = %d\n", a, b);
    
//     swap(a, b);  // Swap without affecting main
    
//     printf("After swapping: a = %d, b = %d\n", a, b); // Values won't be swapped here
//     return 0;
// }

                               //      <<<<<<<<<<<<<<<<<<<

// #include<stdio.h>

// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;  // Dereference a to get the value of a
//     *a = *b;    // Dereference b to get the value of b and assign it to a
//     *b = temp;  // Assign the value of temp to b
// }

// int main() {
//     int a, b;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);
//     printf("Enter the value of b: ");
//     scanf("%d", &b);
    
//     printf("Value before swap: a = %d, b = %d\n", a, b);
    
//     swap(&a, &b);
    
//     printf("Value after swap: a = %d, b = %d\n", a, b);

//     return 0;
// }

    // SIZE OF POINTER 

// #include<stdio.h>
// int main (){
//     int *p;
//     char * p1;
//     float * p2;

//     printf("%lu", sizeof(p));
//     printf("%lu", sizeof(p1));
//     printf("%lu", sizeof(p2));
//     return 0;
// }

// DANGLING POINTER

// #include<stdio.h>
// int * fun(){
//     int a;               // local variable a 
//     return &a;              // returning address of a
// }

// int main(){
//     int * ptr;            
//     ptr= fun();                //   'ptr' now holds a pointer to the local variable 'a'
//     printf("%d", *ptr);          // Dereferencing 'ptr' (accessing the value it points to)
//     return 0;
// };

//However, after the fun() function finishes execution, the local variable a goes out of scope.
//This means that the memory location where a was stored is no longer valid because a is destroyed once fun() exits.

      //   Pointer Arithmetic


// #include <stdio.h>
// int main() {
//     int arr[5] = {1, 2, 3, 4, 5}; // Array of integers
//     int *ptr = arr;              // Initialize pointer to the start of the array
    
//     ptr = ptr + 4;               // Move the pointer to the 5th element of the array
//     printf("Address of ptr: %p\n", (void *)ptr);
//     printf("Value at ptr: %d\n", *ptr); // Dereference to get the value (5)

//     return 0;
// }




