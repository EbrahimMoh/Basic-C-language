#include <stdio.h>
#include <stdlib.h>
void score(int*,int*,int*,int*,int*,int);
void calc(int*,int*,int*,int*,int*,int*,int);
int totalclac(int*,int);
void print(char*,int*,int*,int*,int*,int*,int*,int,int);
int main()
{
   char Gname[50];
   char name[3][30];
   int i,j,k;
   int total[3];
   int totaly;
   int bloing_1[3],bloing_2[3],bloing_3[3],bloing_4[3],bloing_5[3];
   printf("enter your group name\n");
   scanf("%s",&Gname);
   printf("enter all member by order\n");

    for( i = 0; i < 3; i++)
{
   printf(" member %i :",i+1);
   scanf("%s",&name[i]);

}


for( i = 0; i < 3; i++)
{
 printf("name : %s\n",name[i]);
 score(&bloing_1[i],&bloing_2[i],&bloing_3[i],&bloing_4[i],&bloing_5[i],i);
calc(&total[i],&bloing_1[i],&bloing_2[i],&bloing_3[i],&bloing_4[i],&bloing_5[i],i);
}

totaly=totalclac(&total[i],i);
for( i = 0; i < 3; i++)
{
print(&name[i],&bloing_1[i],&bloing_2[i],&bloing_3[i],&bloing_4[i],&bloing_5[i],&total[i],totaly,i);
}
printf("total score of team is %d\n",totaly);



}
void score(int *bloin_1,int *bloin_2,int *bloin_3,int *bloin_4,int *bloin_5,int i)
{




    printf("(1) : ");
    scanf("%d",&bloin_1[i]);
    printf("(2) : ");
    scanf("%d",&bloin_2[i]);
    printf("(3) : ");
    scanf("%d",&bloin_3[i]);
    printf("(4) : ");
    scanf("%d",&bloin_4[i]);
    printf("(5) : ");
    scanf("%d",&bloin_5[i]);
}
void calc(int * tota,int *bloin_1,int  *bloin_2,int *bloin_3,int* bloin_4,int  *bloin_5,int i)
{


tota[i]=bloin_1[i]+bloin_2[i]+bloin_3[i]+bloin_4[i]+bloin_5[i];
}

int totalclac(int *tota,int i)
{
  int tool[3];
  tool[i]=*tota;

  int too1=tool[0],too2=tool[1],too3=tool[2];
  int totaly;
  totaly= too1+too2+too3;
  return totaly;
}

void print(char *name,int *bloing_1,int *bloing_2,int *bloing_3,int *bloing_4,int *bloing_5,int *total,int totaly,int i)
{


 char nemo [3][20];
int bloi1[3],bloi2[3],bloi3[3],bloi4[3],bloi5[3],totl[3];
bloi1[i]=*bloing_1;
bloi2[i]=*bloing_2;
bloi3[i]=*bloing_3;
bloi4[i]=*bloing_4;
bloi5[i]=*bloing_5;

totl[i]=*total;


 printf("Name = %s\n",name);
 printf("Trail (1) - %d\n", bloi1[i]);
 printf("Trail (2) - %d\n", bloi2[i]);
 printf("Trail (3) - %d\n", bloi3[i]);
 printf("Trail (4) - %d\n", bloi4[i]);
 printf("Trail (5) - %d\n", bloi5[i]);
 printf("score : %d\n",totl[i]);
 printf("=====================================================\n");


}


