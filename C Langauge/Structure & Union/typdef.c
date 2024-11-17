// #include <stdio.h>

// // Use typedef to define a new type name
// typedef struct {
//     int id;
//     char name[50];
//     float marks;
// } Student; // Alias 'Student' created for 'struct'

// // No need for the 'struct' keyword now
// int main() {
//     Student s1;  // Simpler declaration
//     s1.id = 101;
//     printf("Student ID: %d\n", s1.id);
//     return 0;
// }
// //Using typedef removes the need for repeatedly typing struct when declaring variables,
// // making the code shorter and more readable. In the typedef version, you can directly use Student as a type:

// #include <stdio.h>

// // Use typedef to define a new type name
// typedef union {
//     int id;
//     float marks;
//     char name[20];
// } Data; // Alias 'Data' created for 'union'

// // No need for the 'union' keyword now
// int main() {
//     Data d1;  // Simpler declaration
//     d1.id = 101;
//     printf("ID: %d\n", d1.id);
//     return 0;
// }



