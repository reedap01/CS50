#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main (void) {
    
    float userinput;
    int cn;
    
    do {
        printf("How much change are you owed?:\n");
        userinput = GetFloat();
    }
    while (userinput < 0);
    
    cn = roundf(userinput*100);
    
    int count = 0;
    int q = 25;
    int d = 10;
    int n = 5;
    int p = 1;
    int i = cn;
    
    do {
    

    for (; i >= q; i = i-q) {
        count ++; }
        
    for (; i >= d; i = i-d) {
        count ++; }

    for (; i >= n; i = i-n) {
        count ++; }  

    for (; i >= p; i = i-p) {
        count ++; }   
        
    } while (i != 0);
    
    
    printf("%d\n", count);
}
