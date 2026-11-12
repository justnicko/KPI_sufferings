inputText = input("Введіть текст: ")

if inputText.isspace():
    formattedText = " "
elif (len(inputText) < 2):
    formattedText = inputText
else:
    leftSpace, rightSpace = ('', '')

    if (inputText[0] == ' '):
        leftSpace = ' '

    if (inputText[-1] == ' '):
        rightSpace = ' '

    formattedText = leftSpace + " ".join(inputText.split()) + rightSpace

print("Відформатований текст: \n'%s'"%(formattedText))