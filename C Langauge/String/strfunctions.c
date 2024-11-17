//strlen -> length of string
// strcmp -> string comparison 
// strcpy -> string copy 
// strcat -> string concatenation 

// #include<stdio.h>
// int main (){
//     char a[4]= "string" ;
//     printf("%lu", strlen(a));
//     return 0;
// }


// strcmp 
// s1>s2 -> +ve value return 1
// s1==s2  -> 0 value
// s1<s2 -> negative value return -1

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char * s1= "abc";   
//     char * s2= "abc";
//     printf("%d",strcmp(s1,s2));   // 0 returns 
//     return 0;
// }

//strcpy 

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[20]="parakram";
//     strcpy(ch,"vijay");
//     printf("%s",ch);   vijay
//     return 0;
// };

// //strcmp 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char * s1= "abc";
//     char * s2= "abc";
//     printf("%d",strcmp (s1,s2)); 0
//     return 0;

// }

//strcat

#include<stdio.h>
#include<string.h>
int main(){
    char ch[20]="parakram";
    char *ch1= "vijay";
    printf("%s",strcat(ch,ch1));  //parakramvijay
}