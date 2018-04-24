#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char str[]="   how   are   you  ";
    char substr[]=" ";
    char *ptr[100];
    int inword=0, count=0;
    int i=0,j=0,k=0;
    while(1)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(inword==1)
            {substr[j]='\0';
            ptr[k]=(char*)malloc((count+1)*sizeof(char));
            strcpy(ptr[k],substr);
            j=0; k++; inword=0; count=0;
            }
            if(str[i]=='\0')
            {break;}
            i++;
        }
        else
        {
            substr[j]=str[i];
            j++;
            i++;
            inword=1;
            count++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%s ",ptr[i]);
    }
    
    return 0;
}
