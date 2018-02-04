/* Guess Number from 1 to 100*/

#include<stdio.h>

int main()
{
    float first=0,middle=50,last=100;
    char c;

    while(first<=last)
    {
        if(first==last || (last-first)<1)
        {
            printf("The number is %d\n",(int)last);
            break;
        }

        printf("Is the number less than %f?\n",middle);
        scanf("%c",&c);



        if(c=='y')
        {
            last=middle;
            middle=(first+last)/2;
        }
        else if(c=='n')
        {
            first=middle;
            middle=(first+last)/2;
        }

    }
    return 0;
 
}
