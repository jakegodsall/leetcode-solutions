def isValid(s):
    l = list(s)

    b = {
        "(": ")",
        "{": "}",
        "[": "]"
    }

    # check for order
    for i in range(len(l) - 1):
        first = l[i]
        second = l[i + 1]
        if second in b.values() and second != b[first]:
            return False

    # check for count
    return l.count("(") == l.count(")") and l.count("[") == l.count("]") and l.count("{") == l.count("}")


if __name__ == '__main__':
    s = '([]'
    print(s, ": ", isValid(s))
