/*
    จงเติมโค้ดโปรแกรมตามที่แสดงในส่วนของ Placeholder เพื่อแสดงผลลัพธ์ของ Operator ด้านซ้ายมือ พร้อมทั้งแก้ไขโค้ดโปรแกรมให้ถูกต้อง
*/
#include <stdio.h>

int main() {
    int a, b ;
    printf( "Please enter value (a b) : " ) ;
    scanf( "%d %d", &a, &b ) ; //TODO: #11 Input variable 'a' and 'b'

    //TODO: #12 Complete operator, and display all operator output. (and fix all bugs.)
    printf( "a = %d , b = %d \n", a, b ) ;
    printf( "a + b = %d \n", a + b ) ;
    printf( "a - b = %d \n", a - b ) ;
    printf( "a * b = %d \n", a * b ) ;
    printf( "a / b = %d (b must greater than 0)\n", b > 0 ? a : 0 ) ;
    printf( "a % b = %d \n", a % b ) ;
    printf( "++a = %d \n", a++ ) ;
    printf( "a-- = %d \n", a-- ) ;
    printf( "a += 1 %d \n", a += 1 ) ;
    printf( "a += b %d \n", a += b ) ;
    printf( "a -= 1 %d \n",  a -= 1 ) ;
    printf( "a -= b %d \n", a -= b ) ;
    printf( "a *= 1 %d \n", a *= 1 ) ;
    printf ( "a *= b %d \n", a *= b ) ;
    printf( "a %= 1 %d \n", a %= 1 ) ;
    printf( "a %= b %d \n", a %= b ) ;
    printf( "a && b %d \n", a && b ) ;
    printf( "a || b %d \n", a || b ) ;
    return 0 ;
}