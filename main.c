//Make a tool using c to calculate in any number system
//simple arithmetic calculations can be done using this such as 
//sqrt, power,  summation, subtraction, division, multiplication, remainder, factorial and percentage.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include "conversion.h"

int main()
{
    int a,b,c,d,fact,nbto,ndtb,ndtc,ndth,nbth,notd,nbtd,notb,noth,nhtd,nhto,rndtb,rnbtdc,rnbtdh,rnotd,rnbtd,rotbvd,rotb,rnothvd;
    char hextb[100];
    char ch;
    printf("What operation do you want to perform\n Press 1 for calculation\n Press 2 for conversion:");
    scanf("%d", &a);
    
    if(a==1)
    {
        // calculation
        int choise;
        printf("In which number system do you want to calculate:\n");
        printf("Press 1 for decimal:\nPress 2 for binary:\nPress 3 for octal:\nPress 4 for Hexa decimal:");
        scanf("%d",&choise);

        printf("What operation do you want to perform:\n Press + for Addition\nPress - for Subtraction\nPress * for Multiplication\nPress / for Division\nPress ! for factorial\nPress %%  for Percentage\nPress ^ for Power\nPress r for Remainder\nPress s for sqrt:");
        scanf("%c",&ch);
        ch = getchar();

        switch (choise)
        {
            case 1:
                //decimal calculation
                switch (ch)
                {
                    case '+':
                        //Addition
                        int dnum1,dnum2,rdadd;
                        printf("Enter the first number you want to add");
                        scanf("%d",&dnum1);
                        printf("Enter the second number you want to add");
                        scanf("%d",&dnum2);
                        rdadd = dnum1 + dnum2;
                        printf("The sum is %d",rdadd);
                        
                    break;

                    case '-':
                        //Subtraction
                        int dnum3,dnum4,rdsub;
                        printf("Enter the first number you want to subtract");
                        scanf("%d",&dnum3);
                        printf("Enter the second number you want to subtract");
                        scanf("%d",&dnum4);
                        rdsub = dnum3 - dnum4;
                        printf("The difference is %d",rdsub); 
                    break;

                    case '*':
                        //Multiplication
                        int dnum5,dnum6,rdmul;
                        printf("Enter the first number you want to multiply");
                        scanf("%d",&dnum5);
                        printf("Enter the second number you want to multiply");
                        scanf("%d",&dnum6);
                        rdmul = dnum5 * dnum6;
                        printf("The product is %d",rdmul);
                    break;

                    case '/':
                        //Division
                        int dnum7,dnum8,rddiv;
                        printf("Enter the first number you want to divide");
                        scanf("%d",&dnum7);
                        printf("Enter the second number you want to divide");
                        scanf("%d",&dnum8);
                        rddiv = dnum7 / dnum8;
                        printf("The quotient is %d",rddiv);
                    break;

                    case '!':
                        //factorial
                        int f;
                        printf("Enter the number:");
                        scanf("%d",&f);
                        for(int i=a;i>0;i--)
                        fact=fact*i;
                        printf("The factorial is %d",fact);    
                    break;

                    case '%':
                        //Percentage
                        int pernum,percent,rpercent;
                        printf("Enter the number:");
                        scanf("%d",&pernum);
                        printf("Enter the number:");
                        scanf("%d",&percent);
                        rpercent=(pernum/percent)*100;
                        printf("The percentage is %d",rpercent);
                    break;

                    case '^':
                        //Power
                        int number,exponent,power;
                        printf("Enter the number:");
                        scanf("%d",&number);
                        printf("Enter the exponent:");
                        scanf("%d",&exponent);
                        power = pow(number,exponent);
                        printf("The power is %d",power);
                    break;

                    case 'r':
                        //Remainder
                       int dnum9,dnum10,rdrem;
                        printf("Enter the first number you want to divide");
                        scanf("%d",&dnum9);
                        printf("Enter the second number you want to divide");
                        scanf("%d",&dnum10);
                        rdrem = dnum9 % dnum10;
                        printf("The remainder is %d",rdrem);
                    break;

                    case 's':
                        //sqrt
                        int dnumsq,rdsq;
                        printf("Enter the number you want to find square root:");
                        scanf("%d",&dnumsq);
                        rdsq=sqrt(dnumsq);
                        printf("The square root is %d",rdsq);
                    break;


                    default:
                        //Wrong Input
                        printf("Wrong Input!!");
                }
                    
            break;


        
            case 2:
                //binary calculation
                switch (ch)
                {
                    case '+':
                        //Binary Addition
                        int bnum1,bnum2,rdadd,rbadd,btodnum1,btodnum2;
                        printf("Enter the first number you want to add:");
                        scanf("%d",&bnum1);
                        printf("Enter the second number you want to add:");
                        scanf("%d",&bnum2);
                        btodnum1 = todec(bnum1,2);
                        btodnum2 = todec(bnum2,2);
                        rdadd= btodnum1 + btodnum2;
                        rbadd= dectobin(rdadd);
                        printf("The result is %d",rbadd);
                    break;

                    case '-':
                        //Binary Subtraction
                        int bnum3,bnum4,rdsub,rbsub,btodnum3,btodnum4;
                        printf("Enter the first number you want to subtract:");
                        scanf("%d",&bnum3);
                        printf("Enter the second number you want to subtract:");
                        scanf("%d",&bnum4);
                        btodnum3 = todec(bnum3,2);
                        btodnum4 = todec(bnum4,2);
                        rdsub= btodnum3 - btodnum4;
                        rbsub= dectobin(rdsub);
                        printf("The result is %d",rbsub);
                    break;

                    case '*':
                        //Binary Multiplication
                        int bnum5,bnum6,rdmul,rbmul,btodnum5,btodnum6;
                        printf("Enter the first number you want to multiply:");
                        scanf("%d",&bnum5);
                        printf("Enter the second number you want to multiply:");
                        scanf("%d",&bnum6);
                        btodnum5 = todec(bnum5,2);
                        btodnum6 = todec(bnum6,2);
                        rdmul= btodnum5 * btodnum6;
                        rbmul= dectobin(rdmul);
                        printf("The result is %d",rbmul);
                    break;

                    case '/':
                        //Binary Division
                        int bnum7,bnum8,rddiv,rbdiv,btodnum7,btodnum8;
                        printf("Enter the first number you want to divide:");
                        scanf("%d",&bnum7);
                        printf("Enter the second number you want to divide:");
                        scanf("%d",&bnum8);
                        btodnum7 = todec(bnum7,2);
                        btodnum8 = todec(bnum8,2);
                        rddiv= btodnum7 / btodnum8;
                        rbdiv= dectobin(rddiv);
                        printf("The result is %d",rbdiv);
                    break;

                    case '!':
                    case '%':
                    case '^':
                    case 'r':
                    case 's':
                        printf("Only for decimal number system\n");
                    break;

                    default:
                        printf("Wrong Input!!");
                }
            break;



            case 3:
                //octal calculation
                switch (ch)
                {
                    case '+':
                        //octal addition
                        int onum1,onum2,roctadd;
                        printf("Enter the first octal number:");
                        scanf("%o",&onum1);
                        printf("Enter the second octal number:");
                        scanf("%o",&onum2);
                        roctadd= onum1 + onum2;
                        printf("The result is:%o",roctadd);
                        
                    break;

                    case '-':
                        //Octal subtraction
                        int onum3,onum4,roctsub;
                        printf("Enter the first octal number:");
                        scanf("%o",&onum3);
                        printf("Enter the second octal number:");
                        scanf("%o",&onum4);
                        roctsub= onum3 - onum4;
                        printf("The result is:%o",roctsub);
                    break;

                    case '*':
                        //Octal Multiplication
                        int onum5,onum6,roctmul;
                        printf("Enter the first octal number:");
                        scanf("%o",&onum5);
                        printf("Enter the second octal number:");
                        scanf("%o",&onum6);
                        roctmul= onum5 * onum6;
                        printf("The result is:%o",roctmul);
                    break;

                    case '/':
                        //Octal Division
                        int onum7,onum8,roctdiv;
                        printf("Enter the first octal number:");
                        scanf("%o",&onum7);
                        printf("Enter the second octal number:");
                        scanf("%o",&onum8);
                        roctdiv= onum7 / onum8;
                        printf("The result is:%o",roctdiv);
                    break;

                    case '!':
                    case '%':
                    case '^':
                    case 'r':
                    case 's':
                        printf("Only for decimal number system\n");
                    break;

                    default:
                        printf("Wrong Input!!");
                }
            break;

            case 4:
                //hexa decimal calculation
                switch (ch)
                {
                    case '+':
                        //hexa decimal addition
                        int hexnum1,hexnum2,rhexadd;
                        printf("Enter the first octal number:");
                        scanf("%x",&hexnum1);
                        printf("Enter the second octal number:");
                        scanf("%x",&hexnum2);
                        rhexadd= hexnum1 + hexnum2;
                        printf("The result is:%o",rhexadd);
                    break;

                    case '-':
                        //hexa decimal subtraction
                        int hexnum3,hexnum4,rhexsub;
                        printf("Enter the first octal number:");
                        scanf("%x",&hexnum3);
                        printf("Enter the second octal number:");
                        scanf("%x",&hexnum4);
                        rhexsub= hexnum3 - hexnum4;
                        printf("The result is:%o",rhexsub);
                    break;

                    case '*':
                        //hexa decimal multiplication
                        int hexnum5,hexnum6,rhexmul;
                        printf("Enter the first octal number:");
                        scanf("%x",&hexnum5);
                        printf("Enter the second octal number:");
                        scanf("%x",&hexnum6);
                        rhexmul= hexnum5 * hexnum6;
                        printf("The result is:%o",rhexmul);
                    break;

                    case '/':
                        //hexa decimal division
                        int hexnum7,hexnum8,rhexdiv;
                        printf("Enter the first octal number:");
                        scanf("%x",&hexnum7);
                        printf("Enter the second octal number:");
                        scanf("%x",&hexnum8);
                        rhexdiv= hexnum7 / hexnum8;
                        printf("The result is:%o",rhexdiv);
                    break;

                    case '!':
                    case '%':
                    case '^':
                    case 'r':
                    case 's':
                        printf("Only for decimal number system\n");
                    break;

                    default:
                        printf("Wrong Input!!");
                }
            break;

            default:
                //Wrong input
                printf("Wrong Input!!");
        }
        
        
        

    }

    else if(a==2)
    {
        //conversion
        printf("From which number system do you want to convert?\nPress 1 for decimal:\nPress 2 for binary:\nPress 3 for octal:\nPress 4 for Hexa decimal:");
        scanf("%d", &b);

        printf("To which number system do you want to convert?\nPress 1 for decimal:\nPress 2 for binary:\nPress 3 for octal:\nPress 4 for Hexa decimal:");
        scanf("%d", &c);

        d = (10*b)+c;

        switch (d)
        {
            case 11:
            case 22:
            case 33:
            case 44:
                //same number system
                printf("You chosen two same number system\nPlease try again with two different number system ");
    
                break;


            case 12:
                //decimal to binary
                 printf("Enter the decimal number you want to convert:");
                scanf("%d",&ndtb);
                rndtb=dectobin(ndtb);
                printf("The binary number of thr given decimal number is %d", rndtb);
     

            break;


            case 13:
                //decimal to octal
                printf("Enter the decimal number you want to convert to octal ");
                scanf("%d",&ndtc);
                printf("The octal equivalent  is %o",ndtc);
            break;

                
            case 14:
                //decimal to hexa decimal
                printf("Enter the decimal number you want to convert to hexa decimal ");
                scanf("%d",&ndth);
                printf("The hexa decimal equivalent is %X",ndth);
            break;


            case 21:
                //binary to decimal
                printf("Enter the binary number you want to convert:");
                scanf("%d",&nbtd);
                rnbtd= todec(nbto, 2);
                printf("The decimal number of the given binary number is %d",rnbtd);
      

            break;


            case 23:
                //binary to octal
                printf("Enter the binary number you want to convert:");
                scanf("%d",&nbto);
                rnbtdc=todec(nbto, 2);
                printf("The octal equivalent of the number is %o",rnbtdc);
                
           
            break;


            case 24:
                //binary to hexa decimal
                printf("Enter the binary number yoy-u want to convert:");
                scanf("%d",&nbth);
                rnbtdh= todec(nbth, 2);
                printf("The hexa decimal equivalent of the number is %x",rnbtdh);
                

            break;


            case 31:
                //octal to decimal
                printf("Enter the octal number you want to convert:");
                scanf("%o",&notd);
                rnotd=todec(notd, 8);
                printf("The Decimal equivalent of thr given number is %d",rnotd);
    
            break;


            case 32:
                //octal to binary
                printf("Enter the octal number you want to convert:");
                scanf("%o",&notb);
                rotbvd=todec(notb, 8);
                rotb=dectobin(rotbvd);
                printf("The Binary equivalent of thr givrn number is %d",rotb);
    
            break;


            case 34:
                //octal to hexa
                printf("Enter the octal number you want to convert:");
                scanf("%o",&noth);
                rnothvd=todec(noth, 8);
                printf("The hexa decimal equivalent of the number is %x",rnothvd);
                
            break;


            case 41:
                //hexa to decimal
                printf("Enter the hexa decimal number you want to convert:");
                scanf("%x",&nhtd);
                printf("The decimal equivalent of thr number is %d",nhtd);
            break;


            case 42:
                //hexa to binary
                printf("Enter the hexa decimal number you want to convert:");
                scanf("%s",hextb);
                hextobin(hextb);

            break;


            case 43:
                //hexa to octal
                printf("Enter the hexa decimal number you want to convert:");
                scanf("%x",&nhto);
                printf("The octal equivalent of thr number is %o",nhto);
            break;


            default:
                //default
                printf("Wrong Input!!");
                

        }
        
        
    }

    else
    {
        printf("You have choosen wrong input!!!\n Please try again :)");
    }
    printf("\n_______________________________________________________________________________________________________________________\n");
    main();
    return 0;
}
