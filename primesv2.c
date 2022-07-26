    #include <stdio.h> 
    #include <stdbool.h> 
    #include <math.h> 
     
    int main () {
        int i = 0;
        int j = 0;
        int ctr = 0;
        printf("These are prime and composite numbers with factors from 1-100:");

        for(i=1;i<=100;i++)
        {
            ctr=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                    ctr++;
                
            }
            if(ctr==2){
                printf("%d is a prime number.\n", i);
        }
            else
            {
            printf("%d is a composite number.\n", i);
            }
    }
    return 0;
    }