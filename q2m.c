#include<stdio.h>
#include<math.h>
int isprime(int n, int *opcount){
    int i, count=0;
    for(i=2; i<sqrt(n); i++){
        *opcount+=1;
        if(n%i==0)
            return 0;
    }
    return 1;
}

void main(){
    int gcd = 1, n1, n2, i=2, x, y, opcount=0;
    printf("Enter the two numbers whose GCD has to be calculated");
    scanf("%d", &n1);
    scanf("%d", &n2);
    x = n1<n2? n1:n2;
    y = n1>n2? n1:n2;
    do{
        opcount++;
        if((x%i==0)&&(y%i==0)){
            if(isprime(i,&opcount)){
                x = x/i;
                y =y/i;
                gcd*=i;
                i--;

            }
        }
        i++;
    }
    while(i<=x);
    printf("GCD of two numbers using middle school method is %d , and opcount is %d", gcd, opcount);

}