#include "main.h"

/**
 *print_alphabet -function entry point
 *A fuction that prints all alphabets in small letter
 *Return: void (Success)
 */

void print_alphabet()                                                                                                                              
{                                                                                                                                                   
    char a = 'a';                                                                                                                                   
    char n = '\n';                                                                                                                                   
                                                                                                                                                    
    for (; a <= 'z'; a++)                                                                                                                           
    {                                                                                                                                               
        write(1,&a,1);                                                                                                                              
    }                                                                                                                                               
    write(1,&n,1);                                                                                                                                  
    return;                                                                                                                                        
}
