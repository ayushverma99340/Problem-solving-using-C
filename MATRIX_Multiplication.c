#include<stdio.h>
#include<conio.h>
void main(){
int i,j,k;
 int s[3][3],t[3][3],u[3][3];
 clrscr();
 printf("enter a no.");
 for (i=0;i<=2;i++){
 for(j=0;j<=2;j++){
 scanf("%d",&s[i][j]);
 }
 }
 for (i=0;i<=2;i++){
 for(j=0;j<=2;j++){
 scanf("%d",&t[i][j]);
 }
 }
   for (i=0;i<=2;i++){
 for(j=0;j<=2;j++){
 u[i][j] =0;
for(k=0;k<=2;k++){
u[i][j] = u[i][j]+ s[i][k]*t[k][j];
}
 }
 }
 for(i=0;i<=2;i++){
 for(j=0;j<=2;j++){
 printf("%d",u[i][j]);

 }
 printf("\n");
 }
 getch();
}
