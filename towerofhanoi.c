#include <stdio.h>
void tower(int n,char beg,char aux,char end) {
    if (n<=0){
        printf("Illegal entry");
    }
    else if (n==1){
        printf("\nmove %c to %c\n",beg,end);
    }

   else{
       tower(n-1,beg,aux,end);
       tower(1,beg,end,aux);
       tower(n-1,aux,beg,end);
   }
}   
int main()
{
    int n;
    char a,b,c;
    printf("Enter the no. of disc: ");
    scanf("%d",&n);
    printf("The no. of disc is %d",n);
    tower(n,'a','b','c');
    return 0;
}
