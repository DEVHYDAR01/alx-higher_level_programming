#!/usr/bin/python3
for soup in range(97, 123):
    if soup == 101:
        continue
    if soup == 113:
        continue
    print("{}".format(chr(soup)), end='')
