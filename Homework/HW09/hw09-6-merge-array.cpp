/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    
    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] : 
            9
        --| Array1 [1] : 
            7
        --| Array1 [2] : 
            6
        --| Array1 [3] : 
            3
        Enter element of Array2 :
            5
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            3
        --| Array2 [2] : 
            5
        --| Array2 [3] : 
            8
        --| Array2 [4] : 
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
    
    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] : 
            7
        --| Array1 [1] : 
            8
        --| Array1 [2] : 
            9
        --| Array1 [3] : 
            6
        --| Array1 [4] : 
            1
        --| Array1 [5] : 
            2
        --| Array1 [6] : 
            8
        --| Array1 [7] : 
            3
            
        Enter element of Array2 :
            6
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            1
        --| Array2 [2] : 
            3
        --| Array2 [3] : 
            5
        --| Array2 [4] : 
            3
        --| Array2 [5] : 
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/

#include <stdio.h>

int main() {
    int n1, n2 ;

    // รับขนาดของอาเรย์ Array1
    printf( "Enter the size of Array1: " ) ;
    scanf( "%d" , &n1 ) ;

    // รับข้อมูลสมาชิกในอาเรย์ Array1
    int Array1[n1] ;
    printf( "Enter elements of Array1: " ) ;
    for ( int i = 0 ; i < n1;  i++ ) {
        scanf( "%d" , &Array1[i] ) ;
    }

    // รับขนาดของอาเรย์ Array2
    printf( "Enter the size of Array2: " ) ;
    scanf( "%d", &n2) ;

    // รับข้อมูลสมาชิกในอาเรย์ Array2
    int Array2[n2] ;
    printf( "Enter elements of Array2: " ) ;
    for ( int i = 0; i < n2; i++ ) {
        scanf( "%d" , &Array2[i] ) ;
    }

    // สร้างอาเรย์ใหม่ Array3 โดยรวม Array1 และ Array2
    int n3 = n1 + n2 ;
    int Array3[n3] ;
    for ( int i = 0; i < n1; i++ ) {
        Array3[i] = Array1[i];
    }
    for ( int i = 0; i < n2; i++ ) {
        Array3[n1 + i] = Array2[i] ;
    }

    // เรียงลำดับอาเรย์ Array3 จากมากไปน้อย
    for ( int i = 0 ; i < n3 - 1 ; i++ ) {
        for ( int j = i + 1 ; j < n3 ; j++ ) {
            if ( Array3[i] < Array3[j] ) {
                int temp = Array3[i] ;
                Array3[i] = Array3[j] ;
                Array3[j] = temp ;
            }
        }
    }

    // แสดงผลลัพธ์อาเรย์ Array3
    printf( "Merged Array (Array3) in descending order: " ) ;
    for ( int i = 0 ; i < n3 ; i++ ) {
        printf( "%d " , Array3[i] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}
