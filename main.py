import random

print ("угадай число")
print ("пвведи от 1 до 20")

secret_number = random.randint(1, 20)
attempts = 0

while True:
    user_guess = int(input("Свой вариантик нахуй введи:"))
    attempts +=1

    if user_guess < secret_number:
        print ("мало")
    elif user_guess > secret_number:
        print ("много")
    else:
        print (f"ладно, не иди нахуй {secret_number}")
        print (f"ты пошел нахуй столько раз: {attempts}")
        break