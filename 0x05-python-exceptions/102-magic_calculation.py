#!/usr/bin/python3
def magic_calculation(a, b):
    result = 0
    for dex in range(1, 3):
        try:
            if dex > a:
                raise Exception('Too Far')
            else:
                result += a ** b / dex
        except:
            result = b + a
            break
    return (result)
