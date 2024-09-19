
/* Que.15	Write a C program to determine eligibility for admission to a professional course based on the following criteria
Eligibility Criteria :
 Marks in Maths >=65 and
Marks in Phy >=55 and
Marks in Chem>=50 and
Total in all three subject >=190 or
Total in Maths and Physics >=140 -------------------------------------- Input the marks obtained in
Physics :65 Input the marks obtained in
Chemistry :51 Input the marks obtained in
Mathematics :72 Total marks of Maths, Physics and
Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
 */


#include <stdio.h>
int main() {
    int phy, chem, math, total, totalMathPhy;
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &phy);

    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chem);

    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &math);

    total = phy + chem + math;
    totalMathPhy = phy + math;


    if (math >= 65 && phy >= 55 && chem >= 50 && (total >= 190 || totalMathPhy >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
    return 0;
}








