print("hello world")

def replaceCheck(word, word2, index):
    wordCopy = word[:]

    wordCopy[index] = word2[index]

    if wordCopy == word2:
        return True

    return False

def addCheck(word, word2, index):
    wordCopy = word[:index] + word2[index] + word[index:]
    return wordCopy == word2



def oneAway(word, word2):
    # case 0, two away len means instant fail
    if abs(len(word) - len(word2)) > 1:
        return False

    index = 0

    while index < len(word) and  index < len(word2) and word[index] == word2[index]:
        index += 1

    # case 1 zero edit distance
    if index == len(word) and index == len(word2):
        return True

    # case 2 end of word 1 add one letter
    if index == len(word) and index != len(word2):
        return True

    # case 3 end of word 2 add one letter
    if index != len(word) and index == len(word2):
        return True

    # case 4 replace char
    if len(word) == len(word2):
        if replaceCheck(word, word2, index):
            return True
        if replaceCheck(word2, word, index):
            return True
    # case 5 add char
    if len(word) != len(word2):
        if addCheck(word, word2, index):
            return True
        if addCheck(word2, word, index):
            return True
    return False
