import random

m = int(input("Введіть m: "))
n = int(input("Введіть n: "))

matrixA = []
resultMatrix = []

for i in range(m):
  row = [random.randint(0, 10) for _ in range(n)]
  matrixA.append(row)

print(f"Матриця А:\n{'\n'.join(map(str, matrixA))}")

for row in matrixA:
  if (len(set(row)) == len(row)):
    resultMatrix.append(row)

matrixA = resultMatrix
print(f"Матриця А після перетворення:\n{'\n'.join(map(str, matrixA))}")