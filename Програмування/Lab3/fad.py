inputText = input()

if inputText.isspace():
    formattedText = " "
elif (len(inputText) < 2):
    formattedText = inputText
else:
    formattedText = inputText[0] + " ".join(inputText[1:-1].split()) + inputText[-1]
