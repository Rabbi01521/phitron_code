#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10;                        // variable declaration and initialization
    char b = 'RABBI';                  // variable declaration and initialization
    float c = 3.14;                    // variable declaration and initialization
    double d = 3.14159265358979323846; // variable declaration and initialization
    long e = 100000;                   // variable declaration and initialization
    _Bool f = 1;                       // variable declaration and initialization
    bool g = false;

    int r = 1000000000; // r --> 1000000000 --> 1 billion --> 10^9 --> 4 bytes --> 32 bits(8*4) --> range: -2,147,483,648 to 2,147,483,647

    printf("Integer: %d\n", a);
    printf("Integer2: %d\n", r);
    printf("Character: %c\n", b);
    printf("Float: %.2f\n", c);                    // %.2f --> 2 decimal places
    printf("Double: %.20lf\n", d);                 // %.20lf --> 20 decimal places, lf --> long float (double)
    printf("Long: %ld\n", e);                      // %ld --> long decimal
    printf("Boolean: %s\n", f ? "true" : "false"); // ternary operator --> if f is true, print "true", else print "false"

    printf("%d", g); // if g is false then it will print 0, if g is true then it will print 1

    return 0;
}

// 1024 GB = 1TB
// 1024 MB = 1GB
// 1024 KB = 1MB
// 1024 bytes = 1KB
//  8bits = 1byte

// int --> -100, 0, 100 ---> 4 bytes --> 32 bits(8*4)
// char --> 'a', 'b', 'c' --> 1 byte --> 8 bits(8*1)
// float --> 3.14, 2.71 --> 4 bytes --> 32 bits(8*4)
// bool --> true, false --> 1 byte --> 8 bits(8*1)
// double --> 3.14159265358979323846 --> 8 bytes --> 64 bits(8*8)
// long --> -100000, 0, 100000 --> 8 bytes --> 64 bits(8*8)
// long long --> -10000000000, 0, 10000000000 --> 8 bytes --> 64 bits(8*8)

// bits --> 0 and 1 --> 2^n --> n --> number of bits
// 1 bit --> 2^1 --> 2 values (0 and 1)
// 2 bits --> 2^2 --> 4 values (00, 01, 10, 11)
// 3 bits --> 2^3 --> 8 values (000, 001, 010, 011, 100, 101, 110, 111)
// 4 bits --> 2^4 --> 16 values (0000, 0001, 0010, 0011, 0100, 0101, 0110, 0111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111)
// 8 bits --> 2^8 --> 256 values (00000000, 00000001, 00000010, 00000011, 00000100, 00000101, 00000110, 00000111, 00001000, 00001001, 00001010, 00001011, 00001100, 00001101, 00001110, 00001111, 00010000, 00010001, 00010010, 00010011, 00010100, 00010101, 00010110, 00010111, 00011000, 00011001, 00011010, 00011011, 00011100, 00011101, 00011110, 00011111, 00100000, 00100001, 00100010, 00100011, 00100100, 00100101, 00100110, 00100111, 00101000, 00101001, 00101010, 00101011, 00101100, 00101101, 00101110, 00101111, 00110000, 00110001, 00110010, 00110011, 00110100, 00110101, 00110110, 00110111, 00111000, 00111001, 00111010, 00111011, 00111100, 00111101, 00111110, 00111111, 01000000, ..., 11111111)
// 16 bits --> 2^16 --> 65536 values (0000000000000000, 0000000000000001, 0000000000000010, ..., 1111111111111111)
// 32 bits --> 2^32 --> 4294967296 values (00000000000000000000000000000000, 00000000000000000000000000000001, 00000000000000000000000000000010, ..., 11111111111111111111111111111111)
// 64 bits --> 2^64 --> 18446744073709551616 values (00000000000000000000000000000000000000000000000000000000₀₀₀₀₀₀₀₀₀₀₀₀₀₀, ..., 111111111111111111111111111111111111₁₁₁₁₁₁₁₁₁₁₁₁₁₁)
