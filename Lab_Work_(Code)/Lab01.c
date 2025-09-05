//Un-Commment Code to Run it.


// // Question # 1

// #include <stdio.h>
// int main(){
//     short employee_ID;
//     float hours, total_pay;
//     int ammount_per_hour;
//     printf("Enter Employee ID: ");
//     scanf("%hd",&employee_ID);
//     printf("Enter Total worked hours: ");
//     scanf("%f",&hours);
//     printf("Enter Ammount recieved per Hour: ");
//     scanf("%d",&ammount_per_hour);
//     total_pay = hours * ammount_per_hour;
//     printf("Employee with ID %hd worked for %.2f hours, Total Pay is: %.2f", employee_ID,hours,ammount_per_hour*hours);
//     return 0;
// }

// // Question #2

// #include <stdio.h>
// int main(){
//     float heingt, width, area;
//     printf("Enter Height of Rectangle: ");
//     scanf("%f", &heingt);
//     printf("Enter width of Rectangle: ");
//     scanf("%f", &width);
//     area = width*heingt;
//     printf("Area of Rectangle is: %.2f", area);
//     return 0;
// }

// // Question # 3

// #include <stdio.h>
// int main(){
//     float height=0;
//     printf("Enter Height: ");
//     scanf("%f",&height);
//     if (height<150) printf("Drawf");

//     else if (height>=150 && height<165)
//     {
//         printf("Average");
//     }
    
//     else printf("Tall");

//     return 0;
// }

// // Question # 4

// #include <stdio.h>

// void DecimalToBinary(int n){
//     if (n>1) DecimalToBinary(n/2);
//     printf("%d", n%2);
// }
// int main(){
//     int num=0;
//     printf("Enter Number is Decimal: ");
//     scanf("%d", &num);
//     printf("Binary Equivalent is: ");
//     if (num==0) printf("0");

//     else DecimalToBinary(num);

//     return 0;
// }

// // Question #5

// #include <stdio.h>
// void fibo(int a, int b, int n) {
//     if (n == 0) return;             
//     printf("%d ", a);                
//     fibo(b, a + b, n-1);      
// }

// int main() {
//     int terms = 0;
//     printf("Enter Number of Terms: ");
//     scanf("%d", &terms);
//     fibo(0, 1, terms);     
//     return 0;
// }
