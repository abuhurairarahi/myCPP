#ifndef HEADERONE_H
#define HEADERONE_H

     /*
     
     #ifndef HEADERFILENAME_H   ---> it's called pre-processor directive
     #define HEADERFILENAME_H   ---> it's macro

     #enfif

     this upper structure is known as header-guard. 
     
     "#ifndef" means if-not-define, e.g. #ifndef HEADERFILENAME_H --> by declaring this compiler checks is any macro
     named "HEADERFILENAME_H" available or not.

     "#enfif" --> header-guard ends here.

     
     */

int sum(int varOne, int varTwo);

#endif