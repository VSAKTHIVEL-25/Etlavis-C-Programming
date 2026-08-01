y=x%10;
        if(y%2==1)
        {
                z++;
        }
        x=x/10;
    }
    printf("\nTotal number of single digit Odd numbers = %d",z);