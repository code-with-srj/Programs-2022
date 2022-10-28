#include<stdio.h>
void main(){
    int legs,head,two_legs,four_legs;
    printf("Enter Number of heads : ");
    scanf("%d",&head);
    printf("Enter Number of heads : ");
    scanf("%d",&legs);
    four_legs = ((legs/2)  - head);
    two_legs = head-four_legs;
    printf("\nRabbits : %d",four_legs);
    printf("\nPegions : %d",two_legs);
}
