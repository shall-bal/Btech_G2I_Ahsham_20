#include <stdio.h>

int main() {
    int phy, maths, chem, eng, cs, sum, percentage;
    printf("Enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d", &phy, &maths, &chem, &eng, &cs);
    sum=phy+maths+chem+eng+cs;
    percentage=sum/5;
  
    printf("the sum and percentage of the marks are %d and %d", sum, percentage);
    return 0;
}
