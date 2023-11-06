#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for mat in range(len(matrix)):
        for j in range(len(matrix[mat])):
            print("{:d}".format(matrix[mat][j]), end="")
            if j != (len(matrix[mat]) - 1):
                print(" ", end="")
        print("")
