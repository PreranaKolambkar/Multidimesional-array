#include<stdio.h>
int main(){
    int n,m;
printf("enter the values rows and coloumns\n");
scanf("%d,",&m);
scanf("%d,",&n);
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i%2==0 && j%2==0)
            printf("*\t");
        else printf("1\t");
    }
    printf("\n");
}
return 0;
}
