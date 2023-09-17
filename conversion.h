#include<stdio.h>

int dectobin();

int dectobin(int num)
{
    int rem, bin=0, base=1;
   
    while (num>0)
    {
        rem=num%2;
        bin += rem*base;
        num/=2;
        base*=10;
    }

    return bin;
    

}




void hextobin();

void hextobin(char hex[100])
{
    for (int i = 0; hex[i] != '\0'; i++) 
    {
        switch (hex[i]) 
        {
            case '0':
                printf("0000");
                break;
            case '1':
                printf("0001");
                break;
            case '2':
                printf("0010");
                break;
            case '3':
                printf("0011");
                break;
            case '4':
                printf("0100");
                break;
            case '5':
                printf("0101");
                break;
            case '6':
                printf("0110");
                break;
            case '7':
                printf("0111");
                break;
            case '8':
                printf("1000");
                break;
            case '9':
                printf("1001");
                break;
            case 'A':
            case 'a':
                printf("1010");
                break;
            case 'B':
            case 'b':
                printf("1011");
                break;
            case 'C':
            case 'c':
                printf("1100");
                break;
            case 'D':
            case 'd':
                printf("1101");
                break;
            case 'E':
            case 'e':
                printf("1110");
                break;
            case 'F':
            case 'f':
                printf("1111");
                break;
            default:
                printf("\nInvalid hexadecimal digit %c", hex[i]);
                //return 1;
        }
    }

}





int todec();

int todec(int num, int r)
{
    int rem,dec=0,base=1;
    while(num>0)
    {
        rem = num%10;
        num/=10;
        dec+=rem*base;
        base*= r;
    }
   
    return dec;
}