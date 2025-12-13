def alphabet_position(text):
    text= text.lower()
    answer=""
    for i in text:
        if i.isalpha():
            answer+=str(ord(i)-96)+" "
            
    answer=answer[:len(answer)-1]
    return answer
            
