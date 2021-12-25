
// In this file i have included those 7 C programs which are really
// important and the concept of these programs should be on your fingertips if you are a fresher.

// // C program for reverse a number
#include <stdio.h>
int main(){
    int r, n, sum = 0;
    printf("enter a number:");
    scanf("%d", &n);
    while (n > 0){
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    printf("reverse no. is: %d", sum);
    return 0;
}

// // C program for checking palindrome number
// #include <stdio.h>
// int main(){
//     int r, n, sum = 0;
//     printf("enter a number:");
//     scanf("%d", &n);
//     int temp=n;
//     while (n > 0){
//         r = n % 10;
//         sum = (sum * 10) + r;
//         n = n / 10;
//     }
//     if (temp==sum){
//         printf("number is palindrome");
//     }else
//         printf("not palindrome");
//     return 0;
// }

// // C program for checking prime number
// #include <stdio.h>
// int main() {
//   int n, i, flag = 0;
//   printf("enter a number: ");
//   scanf("%d", &n);
//   for (i = 2; i <= n / 2; i++) {
//     if (n % i == 0) {
//       flag = 1;
//       break;
//     }}
//   if (n == 1) {
//     printf("1 is neither prime nor composite.");
//   }
//   else {
//     if (flag == 0)
//       printf("prime number");
//     else
//       printf("not a prime number");
//   }
//   return 0;
// }


// // C program to calculate factorial of a number
// #include <stdio.h>
// int main(){
//     int r, n, fact=1;
//     printf("enter a number:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         fact= fact*i;
//     }
//     printf("the factorial of %d is %d" ,n,fact);
//     return 0;
// }


// C program to calculate factorial of a number by recursive approach
// #include <stdio.h>
// int fact(int n){
// if (n==1)
//     return n;
//  else
//     return (n * fact(n-1));
// }
// int main(){
//     int num
//     scanf("%d" ,&num);
//     printf("%d" ,fact(num));
//     return 0;
// }


// // C program for printing fibonacci series
// #include <stdio.h>
// int main(){
//     int n1=0, n2=1,n3, n;
//     printf("enter a number:");
//     scanf("%d", &n);
//     printf("%d %d" ,n1,n2);
//     for (int i = 2; i < n; i++){
//         n3=n1 + n2;
//         printf(" %d", n3);
//         n1=n2;
//         n2=n3;
//     }
//     return 0;
// }


// C program for printing fibonacci series by recursive method
// #include <stdio.h>
// int fibonacci(int n)
// {
//     if (n == 0 || n == 1)
//         return n;
//     else
//         return (fibonacci(n - 1) + fibonacci(n - 2));
// }

// int main()
// {
//     int n, m = 0, i;
//     printf("Enter Total terms:");
//     scanf("%d", &n);
//     printf("Fibonacci series terms are:");
//     for (i = 1; i <= n; i++){
//         printf(" %d", fibonacci(m));
//         m++;
//     }
//     return 0;
// }


// // C program to find a Armstrong number
// #include <stdio.h>
// int main(){
//     int r, n, sum = 0;
//     printf("enter a number:");
//     scanf("%d", &n);
//     int temp=n;
//     while (n > 0){
//         r = n % 10;
//         sum = sum + (r*r*r);
//         n = n / 10;
//     }
//     if (temp==sum){
//         printf("Armstrong number");
//     }else
//         printf("Not an Armstrong number");
//     return 0;
// }