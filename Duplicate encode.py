def duplicate_encode(word):
    result=""
    word=word.lower()
    for i in range(len(word)):
        if word[i] in (word[0:i]+word[i+1:]):
         result += ')'
        else:
            result += '('
    return result
