#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(void)
{
        char str[]="Deleting Feelings...";
        int len=strlen(str);
        for(int i=0;i<len;i++)
        {
                printf("%c",str[i]);
                sleep(1);
        }
        printf("\n");
        for(int i=1;i<=7;i++)
        {
                printf("[");
                for(int k=1;k<=i;k++)
                {
                        printf("+");
                        sleep(0.5);
                }
                printf("]%10d%\n",i*10);
        }
        printf("Failed!!\nError File too large!!\n");
        return 0;
}
