#ifndef _Ideas_H 

#define _Ideas_H

#include <stdio.h> 


int max (int x, int y)
{
    if (x <= y)
        return y; 
    else   
        return x; 
}

int min (int x, int y)
{ 
    if (x <= y)
        return x; 
    else
        return y; 
} 

/* Euclidean algorithm */ 

int gcd (int x, int y)
{
    int r1 = max(x, y), r2 = min (x, y), r3; 
    
    do { 
        r3 = r1 % r2; 
        r1 = r2; 
        r2 = r3; 
         
    } while (r3 != 0); 

    return r1; 
}

/*  Calculate array size 
    Note: Do not use this macro when using 
          array as arguments or parameters */
    
#define ArraySize(x) ((sizeof(x))/(sizeof(x[0])))



int power(int n, int m)
{
    int r = 1; 
    if (m > 0) {
       for (int i = 0; i < m ; i++)
            r *= n;  
        
        
        return r; 
    } 
    else if (m == 0) 
        return 1; 
    else 
        fprintf(stderr, " M must m a postive integer!\n"); 
        return 0; 
    
}   

/* Convert number string to integer type */ 
int number(const char *s, int size)
{ 
    int snumber [size]; 
    for (int i = 0; i < size; i++) 
       snumber[i] = (int)s[i] - (int)'0'; 
    
     
    int sum; 
    for (int i = 0; i < size; i++) 
        sum += snumber[(size - 1) - i]*power(10,i);
    
    return sum; 
}; 


#endif /* Ideas_H */
