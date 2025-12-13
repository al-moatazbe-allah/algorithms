def palindrome(text):
    result=False
    new_string=''.join([x.lower() for x in text if x.isalpha() or x.isdigit()])
    if new_string== new_string[::-1]:
        result=True
    return result
