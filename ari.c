#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>
string ari(string s)
{
	int i = 0;
	float t = 0;
	float count1 = 0;
	float count2 = 0;
	float count3 = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalnum(s[i]))
			count1++;
		if (s[i] == ' ')
			count2++;
		if (s[i] == '.' || s[i] == '?' || s[i] == '!')
			count3++;
	}
	t = 4.71 * (count1 / count2) + 0.5 * (count2 / count3) - 21.43;
	int y = t + 1;
	switch (y)
	{
	case 1:
		return "Kindergarten";
                break;
	case 2:
		return "First/Second Grade";
                break;
	case 3:
		return "Third Grade";
                break;
	case 4:
		return "Fourth Grade";
                 break;
	case 5:
		return "Fifth Grade";
                break;
	case 6:
		return "Sixth Grade";
                break;
	case 7:
		return "Seventh Grade";
                 break;
	case 8:
		return "Eighth Grade";
                break;
	case 9:
		return "Ninth Grade";
                 break;
	case 10:
		return "Tenth Grade";
                break;
	case 11:
		return "Eleventh Grade";
                break;
	case 12:
		return "Twelfth grade";
                break;
	case 13:
		return "College student";
                break;
	case 14:
		return "Professor";

                break;
	default:
		break;
	}
	return ' ';

}
