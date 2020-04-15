#include <stdio.h>
#include <stdlib.h>

void WELCOME();
void MATRIX();
void matrix();
void index(char *);
void INPUT(char [],char []);
void MODIFY(char *,int,int);
void line()
{
   printf("__________________________________________________________________________________________\n");
}
char a[3][3];
int b[3][3],c[9];
int main()
{
char x[10],y[10];
int k;
for(int i=0;i<9;i++)
    c[i]=-1;
WELCOME();
 while(1){
   printf("Enter player 1 name: ");
   scanf("%s",x);
   printf("Enter player 2 name: ");
   scanf("%s",y);
   printf("\nPLAYER %s SYMBOL: *\n",x);
   printf("PLAYER %s SYMBOL: 0\n",y);
  line();
   printf("\n\n\t\t\t\t\t HIT ENTER\n");
   printf("\t\t\t\t\t-----------");
   fflush(stdin);
   getchar();
   system("cls");
   INPUT(x,y);
   printf("DO YOU WANTS TO PLAY AGAIN\n1.Y for yes \n2.N for no\n");

   while(1){
        fflush(stdin);
   char t=getchar();
   if(t=='Y'||t=='y')
   {
    k=0;
    system("cls");
    index(a);
    for(int i=0;i<9;i++)
    c[i]=-1;
    break;
   }
   else if(t=='N'||t=='n')
   {
     k=1;
      break;
   }
   else
    printf("\nPlease enter valid input:");
   }
   if(k==0)
    continue;
   if(k==1)
    break;
 }

    return 0;
}
void WELCOME()
{

   printf("\n\n\n\n");
   line();
   printf("\n\t\t\t\tWELCOME TO TIK TOC TOE GAME\n");
   printf("\t\t\t\t---------------------------");
   printf("\n\n");
   printf("\t\t\t\t\t  __|__|__\n");
   printf("\t\t\t\t\t  __|__|__ \n");
   printf("\t\t\t\t\t    |  |   \n\n\n");
   line();
   printf("\n\n\t\t\t\t\t HIT ENTER\n");
   printf("\t\t\t\t\t-----------");
   getchar();
   system("cls");
   printf("\n");
   line();
   printf("\n\n\t\t\t\t\tHOW TO PLAY:\n");
   printf("\t\t\t\t---------------------------");
   printf("\nENTER THE INDEX YOU WANTS TO CHOOSE AND HIT ENTER\n");
   printf("PLAYER 1 SYMBOL IS * \n");
   printf("PLAYER 2 SYMBOL IS 0 \n");
index((char *)a);
matrix();
   line();
}
void MATRIX()
{
  int i,j;
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(j==0)
            printf("\t\t\t\t\t");
          if(i<2)
          {
          if(j==0||j==2)
            printf("_%c_",a[i][j]);
          else if(j==1)
            printf("|_%c_|",a[i][j]);
          }
          else
          {
            if(j==0||j==2)
            printf(" %c ",a[i][j]);
           else if(j==1)
            printf("| %c |",a[i][j]);
          }
        }
        printf("\n");
    }
}
void matrix()
{
  int i,j,k=1;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     b[i][j]=k++;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          if(j==0)
            printf("\t\t\t\t\t");
          if(i<2)
          {
          if(j==0||j==2)
            printf("_%d_",b[i][j]);
          else if(j==1)
            printf("|_%d_|",b[i][j]);
          }
          else
          {
            if(j==0||j==2)
            printf(" %d ",b[i][j]);
           else if(j==1)
            printf("| %d |",b[i][j]);
          }
        }
        printf("\n");
    }
}
void INPUT(char x[],char y[])
{  int k=1,n;
    line();
    printf("\n");
    matrix();
    printf("\n");
    line();

    while(k<=9)
  {
      int i;
      MATRIX();
      if(k%2!=0)
     {
         printf("%s enter your choice of index:",x);
         scanf("%d",&n);
        for(i=0;i<9;i++)
         {
          if(c[i]==n)
          {
             system("cls");
         line();
         printf("\n");
         matrix();
         printf("\n");
         line();
            printf("the index is already taken\n");
            break;
          }
         }
         if(i<9)
            continue;

         if(n>9)
         {    system("cls");
              line();
              printf("\n");
              matrix();
              printf("\n");
              line();
              printf("PLEASE ENTER VALID INPUT\n");
             continue;
         }

        MODIFY(a,n,k);
        system("cls");
         line();
         printf("\n");
         matrix();
         printf("\n");
         line();

     }
     else
     {
     printf("%s enter your choice of index:",y);
     scanf("%d",&n);
     for(i=0;i<9;i++)
         {
          if(c[i]==n)
          {    system("cls");
         line();
         printf("\n");
         matrix();
         printf("\n");
         line();
            printf("the index is already taken\n");
            break;
          }
         }
         if(i<9)
            continue;
         if(n>9)
         {
              system("cls");
              line();
              printf("\n");
              matrix();
              printf("\n");
              line();
              printf("PLEASE ENTER VALID INPUT\n");
             continue;
         }
           MODIFY(a,n,k);
         system("cls");
         line();
         printf("\n");
         matrix();
         printf("\n");
         line();
        }


      if(k>4)
      {
          if(k%2!=0)
         if((a[0][0]=='*'&&a[0][1]=='*'&&a[0][2]=='*')||
            (a[0][0]=='*'&&a[1][0]=='*'&&a[2][0]=='*')||
            (a[2][0]=='*'&&a[2][1]=='*'&&a[2][2]=='*')||
            (a[2][2]=='*'&&a[1][2]=='*'&&a[0][2]=='*')||
            (a[0][2]=='*'&&a[1][1]=='*'&&a[2][0]=='*')||
            (a[0][0]=='*'&&a[1][1]=='*'&&a[2][2]=='*')||
            (a[0][1]=='*'&&a[1][1]=='*'&&a[2][1]=='*'))
          {
              printf("%s WON THE GAME",x);
              break;
          }
          if(k%2==0){
          if((a[0][0]=='0'&&a[0][1]=='0'&&a[0][2]=='0')||
            (a[0][0]=='0'&&a[1][0]=='0'&&a[2][0]=='0')||
            (a[2][0]=='0'&&a[2][1]=='0'&&a[2][2]=='0')||
            (a[2][2]=='0'&&a[1][2]=='0'&&a[0][2]=='0')||
            (a[0][2]=='0'&&a[1][1]=='0'&&a[2][0]=='0')||
            (a[0][0]=='0'&&a[1][1]=='0'&&a[2][2]=='0')||
            (a[0][1]=='0'&&a[1][1]=='0'&&a[2][1]=='0'))
          {
              printf("%s WON THE GAME",y);
              break;
          }
          }
      }
    if(i==9)
    { c[k-1]=n;
      k++;
    }


}
if(k==10)
printf("THE MATCH IS DRAWN");
MATRIX();
printf("\n");
line();
printf("\t\t\t\t     THANKS FOR PLAYING\n");
line();

}
void MODIFY(char *a,int n,int k)
{
  if(k%2!=0)
  {
    if(n==1)
    *((a+0*3) + 0)='*';
    if(n==2)
    *((a+0*3) + 1)='*';
    if(n==3)
    *((a+0*3) + 2)='*';
    if(n==4)
    *((a+1*3) + 0)='*';
    if(n==5)
    *((a+1*3) + 1)='*';
    if(n==6)
    *((a+1*3) + 2)='*';
    if(n==7)
    *((a+2*3) + 0)='*';
    if(n==8)
    *((a+2*3) + 1)='*';
    if(n==9)
    *((a+2*3) + 2)='*';
  }
else
  {
    if(n==1)
    *((a+0*3) + 0)='0';
    if(n==2)
    *((a+0*3) + 1)='0';
    if(n==3)
    *((a+0*3) + 2)='0';
    if(n==4)
    *((a+1*3) + 0)='0';
    if(n==5)
    *((a+1*3) + 1)='0';
    if(n==6)
    *((a+1*3) + 2)='0';
    if(n==7)
    *((a+2*3) + 0)='0';
    if(n==8)
    *((a+2*3) + 1)='0';
    if(n==9)
    *((a+2*3) + 2)='0';
  }

}
void index(char *a)
{

 int i, j,k=0;
    for (i = 0; i < 3; i++)
      {for (j = 0; j < 3; j++)
        *((a+i*3) + j)=' ';
      }
}
