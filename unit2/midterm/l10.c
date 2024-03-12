 #include<stdio.h>
void ones_Seq( int num)
{
    int count=0, maxcount=0;
    while(num!=0) {
        if ((num & 1) == 1) 
        {
            count++;
            if (count > maxcount) 
            {
                maxcount = count;
            }
        } 
        else 
        {
            count = 0;
        }
        num=num >> 1;
    }
    printf("Output: %d ", maxcount);
}
void main()
{
    int num;
    
    printf("Input: ");
    fflush(stdout);
    scanf("%d",&num);
    ones_Seq(num);

    
}