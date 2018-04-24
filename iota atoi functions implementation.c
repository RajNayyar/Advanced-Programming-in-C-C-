#include <stdio.h>

#include <math.h>

void itoa(int num, char* result)
{	
  static int i;
  i=0;
 	if(num/10!=0)
    {
    itoa(num/10, result);
    }
 	
    result[i] = num%10+'0';
  	i++;
 	  result[i]='\0';
    	return;
}


int atoi(char *str)
{
  int num=0,j=0,t=1,count=0;
  while(str[j]!='\0')
  {
    count++;
    j++;
  }
  j=0;
  while(str[j]!='\0')
  {
    if((count-1)==0)
    {
    t=10*1;

    }
    else
    {

      t=pow(10,(count));
      count--;
    }
    num=num + (str[j] - '0') * t;
    j++;
  }
	return num/10;
}

int main()
{
  char result[100], str[100]="12345";
  int j=20001;
  int num;
  num = atoi(&str[0]);
  itoa(j, &result[0]);
  printf(" result for atoi %d\n",num);
  printf(" result for itoa %s\n\n",result);

}