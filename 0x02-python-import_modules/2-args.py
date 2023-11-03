#!/usr/bin/python3
if __name__ == "__main__":

    import sys

    digs = len(sys.argv) - 1
    if digs == 0:
        print("0 arguments.")
    elif digs == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(digs))
    for i in range(digs):
        print("{}: {}".format(i + 1, sys.argv[i + 1]))
