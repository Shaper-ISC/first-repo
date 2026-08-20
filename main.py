numbers = []
total = 0
even_count = 0

for i in range(5):
    
    number = int(input("Введите число: "))
    numbers.append(number)

    total += number
    if len(numbers) == 1:
        minimum = number
        maximum = number
    if number < minimum:
            minimum = number
    if number > maximum:
            maximum = number
    if number % 2 == 0:
          even_count += 1

mid = total / len(numbers)

print(numbers)
print("Минимум: ", minimum)
print("Максимум: ", maximum)
print("Сумма: ", total)
print("Чётных: ", even_count)
print("Среднее: ", mid)