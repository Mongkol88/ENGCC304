#include <stdio.h>

int main() {
    char Name[1] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ;
    scanf( "%s", Name ) ;
    printf( "Enter your age:  " ) ;
    scanf( "%d", &Age ) ;
    printf( "- - - - - -\n" ) ;
    printf( "Hello %s\n", Name ) ; 
    printf( "age = %d\n", Age ) ; 
    return 0 ;
}//end main function