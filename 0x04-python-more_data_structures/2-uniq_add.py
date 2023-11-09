#!/usr/bin/python3
def uniq_add(my_list=[]):
    res = 0
    for lst in set(my_list):
        res = res + lst
    return (res)
