/***************************************************************
 * The program creates two pairs of fractions and then calls a *
 * function named larger to find the larger in each pair *
 ***************************************************************/
#include "fraction.h"

Fraction &larger(Fraction &, Fraction &); // Prototype

int main()
{
    // Creating first pair of fractions and finding the larger
    Fraction fract1(3, 13);
    Fraction fract2(5, 17);
    cout << "Larger of the first pair of fraction: ";
    larger(fract1, fract2).print();
    // Creating second pair of fractions and finding the larger
    Fraction fract3(4, 9);
    Fraction fract4(1, 6);
    cout << "Larger of the second pair of fractions: ";
    larger(fract3, fract4).print();
    return 0;
}
/***************************************************************
 * The function gets two fractions by reference, compares them *
 * and returns the larger. *
 ***************************************************************/
Fraction &larger(Fraction &fract1, Fraction &fract2)
{
    if (fract1.getNumer() * fract2.getDenom() >
        fract2.getNumer() * fract1.getDenom())
    {
        return fract1;
    }
    return fract2;
}