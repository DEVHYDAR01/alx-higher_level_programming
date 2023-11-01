#!/usr/bin/python3
def fizzbuzz():
    for dig in range(1, 101):
        if dig % 3 == 0 and dig % 5 == 0:
            print("FizzBuzz ", end="")
        elif dig % 3 == 0:
            print("Fizz ", end="")
        elif dig % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(dig), end="")
