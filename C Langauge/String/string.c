// string is a array of character 
// declaration of string :-
//char str[50]; 
//char *str;
//initialization of string:- 
// char ch1[]="parakram";
// char str[] = "Hello, World!";

// #include<stdio.h>
// int main(){
//     char abc[]="Hello"; 
//     abc[2]='a';     // it is not a string but characters
//     printf("%s",abc);
// }
//When a string is defined as a character array, the contents of the array can be modified.

// #include<stdio.h>
// int main(){
// char *str = "Hello";  // Stored in read-only memory
// str[0] = 'J';         // Undefined behavior (likely causes a segmentation fault)  
// printf("%s", str);
// };

// //string is immutable 
#include<stdio.h>
int main(){
    char ch1[] = "abc";
    char ch2[] = "abc";
    char *ch3 = "def";
    char *ch4 = "def";

    if(ch1 == ch2){
        printf("%d", 1);
    }
    else{
        printf("%d", 2);
    }
    if(ch3 == ch4){
        printf("%d", 3);
    }
    else{
        printf("%d", 4);
    }

    return 0;
}
//ch1 and ch2 are character arrays, and their contents ("abc") are stored in different memory locations.
//When you compare ch1 and ch2 using ==, you are comparing their base addresses, not the string contents.
//Since the arrays are stored in different memory locations, ch1 == ch2 evaluates to false, so 2 is printed.

//ch3 and ch4 are pointers to string literals. String literals in C are stored in a read-only section of memory, 
//and the compiler typically points both ch3 and ch4 to the same memory location for identical literals to save 
//memory (this is known as string pooling).
//Since ch3 and ch4 point to the same memory address, ch3 == ch4 evaluates to true, so 3 is printed.