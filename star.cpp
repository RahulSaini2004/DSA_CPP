// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;     
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0  )
//     }

//     }
       
//     return 0;
// }



#include <stdio.h>  
int main()  
{  
    int n,m;  
    printf("Enter the number of rows => ");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}  