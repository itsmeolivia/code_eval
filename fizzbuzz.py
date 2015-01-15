#!/usr/bin/env python

for i in xrange(1, 101):

    stmt = ""
    if i % 3 == 0:
        stmt += "Crackle"
    if i % 5 == 0:
        stmt += "Pop"
    if len(stmt) == 0:
        print i
    else:
        print stmt
