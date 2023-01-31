a = 1;
b = 2;
c = a & b;
/*
# Bitwise AND
1 & 2 to process this c converts the number to binary so,

01
10
00 = 0


and performs and operation on the binary
same goes to bitwise OR, XOR

# Bitwise complement

        35 = 00100011 (In Binary)

        Bitwise complement Operation of 35
        ~ 00100011 
        ________
        11011100  = 220 (In decimal)


# Shift left
        212 = 11010100 (In binary)
        212<<1 = 110101000 (In binary) [Left shift by one bit]
        212<<0 = 11010100 (Shift by 0)
        212<<4 = 110101000000 (In binary) =3392(In decimal)

# Shift right

        212 = 11010100 (In binary)
        212 >> 2 = 00110101 (In binary) [Right shift by two bits]
        212 >> 7 = 00000001 (In binary)
        212 >> 8 = 00000000 
        212 >> 0 = 11010100 (No Shift)
*/

console.log(a & b);
console.log(a | b);
console.log(a ^ b);
console.log(~b);
console.log(a << b);
console.log(a >> b);


/*

   Bitwise operators:
        &   Bitwise AND
        |   Bitwise OR
        ^   Bitwise XOR
        ~   Bitwise complement
        <<  Shift left
        >>  Shift right

*/