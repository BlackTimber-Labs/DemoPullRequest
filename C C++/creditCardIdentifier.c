#include <stdio.h>
#include <math.h>

int checkCard(long long cardNumber);

int main(void)
{
    printf("Number: ");
    long long cardNumber;
    scanf("%lli", &cardNumber);
    int result = checkCard(cardNumber);
    switch (result)
    {
    case 1:
        printf("AMEX\n");
        break;
    case 2:
        printf("MASTERCARD\n");
        break;
    case 3:
        printf("VISA\n");
        break;
    default:
        printf("INVALID\n");
    }
}

int checkCard(long long cardNumber)
{
    int sum = 0, nD = 0; // nD is for number of digits
    long long cardNumberCopy = cardNumber;
    while (cardNumberCopy != 0)
    {
        int d = cardNumberCopy % 10;
        d *= nD % 2 + 1; // every other digit multiplied by 2
        while (d != 0)
        {
            sum += d % 10;
            d /= 10;
        }
        cardNumberCopy /= 10;
        nD++;
    }
    int fTD = (int)(cardNumber / pow(10, nD - 2)); // fTD is first two digits of card number
    if (sum % 10 != 0)
    {
        return 0; // invalid
    }
    else if (nD == 15 && (fTD == 34 || fTD == 37))
    {
        return 1; // amex
    }
    else if (nD == 16 && fTD > 50 && fTD < 56)
    {
        return 2; // mastercard
    }
    else if ((nD == 13 || nD == 16) && fTD / 10 == 4)
    {
        return 3; // visa
    }
    else
    {
        return 0; // invalid
    }
}