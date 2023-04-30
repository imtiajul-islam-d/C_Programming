or (int j = 1; j <= s; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
        printf("*");
    }
    printf("\n");
    if(i <= n - 1){
        n --;
        k += 2;
    }else{
        n ++;
        k -=2;
    }