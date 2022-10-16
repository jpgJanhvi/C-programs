// UNION operation on two sets

#include<stdio.h>
void main()
{
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // checking for repeated element
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repeated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }

   // copy element of set B in set C
   for(i=0;i<n2;i++){
       // check for repeated element
      for(j=0;j<k;j++){
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if not repeated then store value in set C
     {
       c[k]=b[i];
       k++;
     }
   }
   int temp;
   // sorting the final array
   for(i=0;i<k;i++){
      for(j=i+1;j<k;j++){
         if(c[i]>c[j]){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
         }
      }
   }
   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
   printf("\nJANHVI PANDEY ");
}
