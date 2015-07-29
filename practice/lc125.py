def isPalindrome(s):
    new_s = ""
    for i in s:
        if i.isalpha() or i.isdigit():
            new_s += i

    print "new_s : ",
    print new_s

    if len(new_s) in [0, 1]:
        return True

    end_ptr = len(new_s) - 1
    start_ptr = 0

    while end_ptr > start_ptr:
        if new_s[start_ptr] != new_s[end_ptr]:
            return False
        start_ptr += 1
        end_ptr -= 1
    return True


print isPalindrome("ab")
