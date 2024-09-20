// In cpp, bitwise operators are the ones which works on bits. there are 4 bitwise operators.
// AND &, OR |, NOT ~, XOR ^
#include <iostream>
using namespace std;

int main () {
int a = 4;
int b = 6;

/* AND operator and in that operator only when all the bits are 1 then it will gave us 1 and otherwise 
gave 0 
*/

cout <<"a & b is "<< (a&b) << endl;

/* it gave us 4 output 4 in binary is 100 and 6 is 110 and the first column gave us 1 and rest 0 which
means 100 which in decimal is 4.
*/

/* OR operator and in that operator only when one of the bits are 1 or all bits are 1 then it will gave 
us 1 and otherwise gave 0 
*/

cout <<"a | b is "<< (a|b) << endl;

/* it gave us 6 output 4 in binary is 100 and 6 is 110 and the first and second column gave us 1 and 
rest 0 which means 110 which in decimal is 6.
*/

/* NOT operator and in that operator only it inverts the bit means if the bit is 0 it will change it to
1 and if it is 1 then it will invert it into 0. 
*/

cout <<"~a is "<< (~a) << endl;

/* it gave us -5 output 4 in binary is 100 and if we want it to invert so as we know there must be 32 bits 
so we put zeros before it untill 32 bits are not complete then we inverts all bit from 0 to 1 and 1 to 0 
and then to print that we have to first take two's complement and to take two's complement we first 
have to take one's complement which is to invert all the bits and after that take two's complemetn by
add one into it then after taking that we came to know that first bit is one which means number is 
negative and the last bits are 101 which means in decimal 5 and first bit is one then the output is -5
*/

/* XOR operator and in that operator when all the bits are 1 and 0 then it will gave us 0 and otherwise 
gave 1
*/

cout <<"a ^ b is "<< (a^b) << endl;

/* it gave us 2 output 4 in binary is 100 and 6 is 110 and the first and third column gave us 0 and 
second column gave us 1 which becomes 010 which in decimal after ignoring left bit is 2.
means 100 which in decimal is 4.
*/
}