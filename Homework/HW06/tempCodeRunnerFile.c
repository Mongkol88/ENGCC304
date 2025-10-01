    int i = num;
    while (i >= 2)
    {
        isPrime = 1;
        int j = 2;
        while (j < i)
        {
             if (i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }
        if (isPrime == 1)
        {
            printf("%d ", i);
        }
        i--;
    }