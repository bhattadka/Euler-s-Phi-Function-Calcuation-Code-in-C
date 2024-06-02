#include <stdio.h>
#include<math.h>
int p[100],e[100],k=0,l=0,power=0;

void factorization(int n){
    printf("\nPrime factors of %d are: ", n);

    int i;
    // Check for 2 as a prime factor
    while (n % 2 == 0) {
        power++;
        n /= 2;
    }
    if (power > 0){
        p[k++]=2;
        e[l++]=power;
        printf("2^%d ", power);
    }

    // Check for other odd prime factors
    for(i = 3; i * i <= n; i += 2) {
        power = 0;
        while (n % i == 0) {
            power++;
            n /= i;
        }
        if (power > 0){
            p[k++]=i;
            e[l++]=power;
            printf("%d^%d ", i, power);
        }
    }

    // If n is still greater than 2, it is a prime factor
    if (n > 2){
        p[k++]=n;
        e[l++]=1;
        printf("%d^1 ", n);
    }

    printf("\n");


}


int gcd(int a, int b){
    int i,gcd;
    for(i=1; i <= a && i <= b; ++i){
       if(a%i==0 && b%i==0)
            gcd = i;
    }

    if(gcd==1)
      return 1;
    else
      return 0;

}


int prime_no(int n){
    int i,k;

    if(n == 0 || n == 1)
       k = 1;

    for(i = 2; i <= n / 2; ++i) {
      if(n % i == 0) {
        k = 1;
        break;
      }
    }


    if (k == 0)
      return 1;
    else
      return 0;
}


int main() {
    int i,n,phi_n=1;

    printf("Enter a number for Euler's phi function: ");
    scanf("%d", &n);

    //Prime factorization of n
    factorization(n);

    //Calculation of Euler's Phi Function for different types of input values of n
    if(n==1){
        phi_n=0;
    }

    else if(prime_no(n)){
        if(power>0)
            phi_n=pow(n,power) - pow(n,power-1);
        else
            phi_n=n-1;
    }

    else{
        for(i=0;i<k;i++){
            phi_n=phi_n * (pow(p[i],e[i]) - pow(p[i],e[i]-1));
        }
    }
    printf("\nValue of Euler's Phi Function of %d is: %d\n",n,phi_n);

    //All relatively prime numbers to n
    printf("\nThe numbers that are relatively prime to %d are: ",n);
    for(i=1;i<n;i++){
        if(gcd(i,n)==1){
            printf("%d  ",i);
        }

    }

    printf("\n");

    return 0;
}
