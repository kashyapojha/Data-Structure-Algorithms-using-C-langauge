// Stack is a LIFO data Structure 
// Last In First Out - > Means the insertion and deletion can be done on one end only. Stack is one ended data structure 

// Inserting element is a PUSH operation 
// Deleting element is a POP operation 
// to identify in which position or location push and pop will be done , one variable is maintained called TOP .
 

// Applications of Stack 

// 1. ) Stack as a permutation generator 
// suppose we consider letter a,b,c in the given order stack can use to generated different permutation of a,b,c 
// abc - push(a), push(b), push(c), pop(), pop(), pop()   -> done
// cab - push(a), push(b), push(c), pop(), pop()-> gives b but not a -> not allowed , violate stack property 

//  2. ) Expressions:-
  //Infix  -> a+b 
  //Prefix  -> +ab
  //Postfix   -> ab+

  //  Highest order precedence 
   //   -             (unary minus)                   -> Highest
   //    ^             (exponent)   ( R to L)
//      * or /          (product -> Divide) (L to R )
//    + or -         (add -> subtract) (L to R)
//     =             (Assignment)       ( R to L)      -> Lowest 