#include<stdio.h>
#include<math.h>
int main() {
    int x;
    float a,b,addition,subtraction,multiplication,division;
    printf("  \n  ");
    printf("  \n  ");
    printf("Enter the first number \t : \t");
    scanf("%f",&a);
    printf("  \n  ");
    printf("  \n  ");
    printf("Enter the second number\t : \t");
    scanf("%f",&b);
      addition = a+b;
      subtraction = a-b;
      multiplication = a*b;
      division = a/b;
    printf("  \n  ");
    printf("  \n  ");
    printf("Enter the option:\n\n\n1 \t :- \t Press 1 for addition \n\n2 \t :- \t Press 2 for subtraction \n\n3 \t :- \t Press 3 for multiplication \n\n4 \t :- \t Press 4 for division \n\n5 \t :- \t Press anything else to learn more about this program\n");
    printf("  \n  ");
    printf("  \n  ");
    printf("Enter the choice \t : \t");
    scanf("%d",&x);
    printf("  \n  ");
    printf("  \n  ");
    if(x==1) 
    printf(" %f is the addition of these number \n",addition);
    else if (x==2)
    printf(" %f is the subtraction of these number\n",subtraction);
    else if (x==3)
    printf(" %f is the multiplication of these number\n",multiplication);
    else if (x==4)
    printf(" %f is the division of these number\n",division);
    else 
    printf("DONT KNOW ANYTHING, SHUT  THE PC AND LEARN BASICS\n");
    printf("  \n  ");
    printf("  \n  ");
    printf("  \n  ");
return 0;
}
