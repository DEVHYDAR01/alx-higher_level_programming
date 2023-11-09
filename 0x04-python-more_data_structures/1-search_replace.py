#!/usr/bin/python3
def search_replace(my_list, search, replace):
    brand_list = my_list[:]
    for lst in range(len(my_list)):
        if brand_list[lst] is search:
            brand_list[lst] = replace
    return (brand_list)
