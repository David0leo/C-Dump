#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]){
    int i, k, temp;
    char* s;
    
    s = argv[1];
    sscanf( argv[2], "%d", &k );
    for ( i = 0 ; i < strlen(s) ; i++ ){
        if ( isalpha(s[i]) ){
            s[i] = ( ( ( s[i] - 65 ) + k ) % 58 ) + 65;
            temp = s[i];
            if ( temp < 97 && temp > 90 ) {
                s[i] += 6;
            }
        }
    }
    printf( "%s\n", s );
    return 0;
}   
