from functools import reduce
import random

arr1 = [random.randint(0, 100) for _ in range(10)]
arr2 = [random.randint(0, 100) for _ in range(10)]
result = []
print(f"Список 1: {arr1}\nСписок 2: {arr2}")

for i in range(0, min(len(arr1), len(arr2)), 2):
  result.append(arr1[i + 1])
  result.append(arr2[i])

print(f"Новий список: {result}")
result = random.sample(result, len(result) // 2)

print(f"Результуючий рядок: {', '.join(map(str, result))}")