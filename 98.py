from sys import argv
import re


with open(argv[1], 'r') as file:
    for line in file:
        if line == "":
            continue
        lst = [float(s) for s in re.findall('-?\d+(?:\.\d+)?', line)]
        #distance r^2 = x^2 + y^2
        lst[2] = lst[2] ** 2
        distance = ((lst[0] - lst[3]) ** 2) + ((lst[1] - lst[4]) ** 2)
        print str(distance < lst[2]).lower()
