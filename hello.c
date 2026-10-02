#include <stdio.h>
#include<math.h>

int main() {
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if(marks >=90){
        printf("A++");
    }
    else if (marks >=80)
    {
       printf("A") ;/* code */
    }
   else if (marks>=50)
   {
    printf("PASS");
   }
   else {
    printf("fail");   }
   

   



    return 0;
}
