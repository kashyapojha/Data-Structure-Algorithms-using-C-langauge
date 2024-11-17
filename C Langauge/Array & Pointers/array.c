// declaration of array:-        int a[4];
// initialization of array:-      int a[4]= {1,2,3,4};


// int a[4]= {1,2,3,4,5,6,7};     -----> Warning excess element

// int a[4]={1,3};     -------> rest position not assigned .. it will be filled with zero

// base address:-   address of first element of array is called base address

// if we take name of array variable then it represents address of first element 

//a=[1,2,3,4,5]; 
//a[2]=>*[a+2]-> *[base address + 2*size of data type(here int)] -> *(100+2*4)  -> 108        
//value --> 3

//index starts from 0

// #include<stdio.h>
// int main(){
//     int a[]={1,2,3,4,5};
//     int *b=a+3;     -> points to 4 
//     printf("%d", b[-2]);         // b[-2]-> *(b-2) which moves pointer two positions backward , now value will be 2
// };


//   Arithmetic operation with pointer 

// #include<stdio.h>
// int main(){
//     int a[]={10,20,30,40,50};
//     int i, *b;
//     b=&a[4]-4;
//     for(i=0;i<=4;i++){
//         printf("%d", *b);
//         b++;
//     }
//     return 0;
// };


                         // 2-D Array  

//  declaration:-  int array[3][4];  // A 2D array with 3 rows and 4 columns

// initialization :- int matrix[3][4] = {
    //{1, 2, 3, 4},
  //  {5, 6, 7, 8},
//    {9, 10, 11, 12}
//};

// int a[2][2]= {{1,2},{3,4}};

// a-> Address of first element of array that is 1-D array
// *a-> Address of first element of 1-D array that is integer 
// **a-> Value of integer



#include<stdio.h>
int main(){
    int a[][3]={11,12,13,14,15,16,17};
    for(int i=0;i<3;i++){
        for(int j=0 ;j<3;j++){
            printf("%d\t",a[i][j]);
           
        }
         printf("\n");
       
    }
     return 0;

}