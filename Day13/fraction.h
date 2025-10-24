#ifndef FRACTION_H
#define FRACTION_H

typedef struct
{
    int numerator;
    int denominator;
} Fraction;

void printFraction(Fraction &f); // Ausgabe des Bruchs
void readFraction(Fraction &f);
int gcd(int p, int q);
void cancel(Fraction &fRef);
void format(Fraction &fRef);
Fraction add(Fraction &f1Ref, Fraction &f2Ref);      // Addition zweier Brüche
Fraction subtract(Fraction &f1Ref, Fraction &f2Ref); // Subtraktion zweier Brüche
Fraction multiply(Fraction &f1Ref, Fraction &f2Ref); // Multiplikation zweier Brüche
Fraction divide(Fraction &f1Ref, Fraction &f2Ref);   // Divison zweier Brüche

#endif // FRACTION_H
