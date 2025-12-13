from collections import Counter

def scramble(s1, s2):
    c1 = Counter(s1)
    c2 = Counter(s2)

    for ch in c2:
        if c2[ch] > c1[ch]:
            return False
    return True
