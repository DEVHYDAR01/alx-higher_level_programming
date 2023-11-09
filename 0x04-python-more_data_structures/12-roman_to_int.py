#!/usr/bin/python3
def roman_to_int(roman_string):
    if (not isinstance(roman_string, str) or roman_string is None):
        return (0)

    roman_d = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    numb = 0

    for j in range(len(roman_string)):
        if roman_d.get(roman_string[j], 0) == 0:
            return (0)

        if (j != (len(roman_string) - 1) and
                roman_d[roman_string[j]] < roman_d[roman_string[j + 1]]):
                    numb += roman_d[roman_string[j]] * -1

        else:
            numb += roman_d[roman_string[j]]
    return (numb)
