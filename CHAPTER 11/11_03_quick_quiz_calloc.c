# include <stdio.h>
# include <stdlib.h>
int main (){
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of %d element\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("the value is %d \n",ptr[i]);
        
    }
    return 0;
}