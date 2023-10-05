#include <stdio.h>
int main()
{
    //area of circle (A=Area,R=Radius)
    double A,R;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&R);

    A=3.14159265359*R*R;
    printf("The area of the circle is: %lf\n", A);

    printf("___________________________________________________________________\n");

    //area of square (S=Side,A1=Area)
    double S,A1;

    printf("Enter the length of the side of the square: ");
    scanf("%lf", &S);

    A1 = S * S;

    printf("The area of the square is: %lf\n", A1);

    printf("___________________________________________________________________\n");

    //area of rectangle (L=Length,W=Width,A2=Area)
    double L, W, A2;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &L);

    printf("Enter the width of the rectangle: ");
    scanf("%lf", &W);

    A2 = L * W;

    printf("The area of the rectangle is: %lf\n", A2);

    printf("___________________________________________________________________\n");

    // area of triangle  (B=Base,H=Height,A3=Area)
    double B, H, A3;

    printf("Enter the length of the base of the triangle: ");
    scanf("%lf", &B);

    printf("Enter the height of the triangle: ");
    scanf("%lf", &H);

    A3 = 0.5 * B * H;

    printf("The area of the triangle is: %lf\n", A3);

    printf("___________________________________________________________________\n");

    //simple interest
    double principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the rate of interest (as a decimal): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    interest = (principal * rate * time);

    printf("Simple Interest = %lf\n", interest);

    printf("___________________________________________________________________\n");

    //perimeter of the circle
    double radius, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    perimeter = 2 * 3.14159265359 * radius;

    printf("The perimeter of the circle is: %lf\n", perimeter);

    return 0;
}

/*
Output:

Enter the radius of the circle: 23
The area of the circle is: 1661.902514
___________________________________________________________________
Enter the length of the side of the square: 21
The area of the square is: 441.000000
___________________________________________________________________
Enter the length of the rectangle: 14
Enter the width of the rectangle: 25
The area of the rectangle is: 350.000000
___________________________________________________________________
Enter the length of the base of the triangle: 36
Enter the height of the triangle: 15
The area of the triangle is: 270.000000
___________________________________________________________________
Enter the principal amount: 15
Enter the rate of interest (as a decimal): 6
Enter the time (in years): 5
Simple Interest = 450.000000
___________________________________________________________________
Enter the radius of the circle: 45
The perimeter of the circle is: 282.743339

*/