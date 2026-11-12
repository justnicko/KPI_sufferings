s1 = '<s>'.encode()
s2 = '<#s>'.encode()
s1Upper = s1.upper()
s2Upper = s2.upper()
hashtag = '<#>'.encode()

inputText = bytearray(input("Введіть текст: "), "UTF-8")

formattedText = (inputText
                 .replace(s2, hashtag)
                 .replace(s2Upper, hashtag)
                 .replace(s1, s2)
                 .replace(s1Upper, s2Upper))

print("%s"%(formattedText.decode()))