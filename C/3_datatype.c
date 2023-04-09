#include <stdio.h>

// int --> 4 byte | 8 byte --> %d
// unsigned int --> 4 byte | 8 byte --> %u
// signed int --> 4 byte | 8 byte --> %d , %i
// short int --> 4 byte  --> %hd
// unsigned short int --> 4 byte --> %hu
// long int --> 8 byte --> %ld , %li
// long long int --> 16 byte --> %lld , %lli
// signed long int --> 8 byte --> %lu
// unsigned long long int --> 16 byte  --> %llu

// float --> 8 byte --> %f
// double --> 16 byte --> %lf
// long double --> 20 byte --> %lf

// char --> 2 byte --> %c
// signed char --> 2 byte --> %c
// unsigned char --> 2 byte --> %c

// void --> 0 byte

#define SIZE(x) sizeof(x)*8

void signed_one(int);

void unsigned_one(int);

int main(int argc, char const *argv[])
{
    printf("range of int");
    signed_one(SIZE(int));
 
    printf("\nrange of unsigned int");
    unsigned_one(SIZE(unsigned int));
 
    printf("\n\nrange of char");
    signed_one(SIZE(char));
 
    printf("\nrange of unsigned char");
    unsigned_one(SIZE(unsigned char));
 
    printf("\n\nrange of short");
    signed_one(SIZE(short));
 
    printf("\nrange of unsigned short");
    unsigned_one(SIZE(unsigned short));

    return 0 ;
}
 
// return range signed
void signed_one(int count)
{
    int min, max, pro;
    pro = 1;
    while (count != 1)
    {
        pro = pro << 1;
        count--;
    }
    min = ~pro;
    min = min + 1;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}
 
// return range unsigned
void unsigned_one(int count)
{
    unsigned int min, max, pro = 1;
 
    while (count != 0)
    {
        pro = pro << 1;
        count--;
    }
    min = 0;
    max = pro - 1;
    printf("\n%d to %d", min, max);
}


// Data Type	            Format Specifier
// int	                        %d
// char	                        %c
// float	                    %f
// double	                    %lf
// short int	                %hd
// unsigned int	                %u
// long int	                    %li
// long long int	            %lli
// unsigned long int	        %lu
// unsigned long long int	    %llu
// signed char	                %c
// unsigned char	            %c
// long double	                %Lf