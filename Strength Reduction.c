#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char operator,equal,op1[5],op2[5],op[2],res[10];
    int i,opr2;
    
    // printf("\nInput in the form example: a 7 * 7 otherwise gives an error \nEnter the algebric expression:\n");
    scanf("%s",&res);
    scanf("%s",&op1);
    scanf("%s",&op);
    scanf("%s",&op2);

    operator=op[0];
    opr2=atoi(op2);//atoi- String to int
    
    switch(operator)
    {
    	case '*':
        	printf("%s ->",res);

        	for(i=0;i<opr2-1;i++)
        	    printf("%s + ",op1);
        	printf("%s",op1);
        	
            break;

    	case '^':
        	printf("%s ->",res);

        	for(i=0;i<opr2-1;i++)
        	    printf("%s * ",op1);
        	printf("%s",op1);
        	
            break;
    }
}
