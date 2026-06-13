import random

print ("Сколько у тебя хуёв было в жопе")
print ("введи от 1 до 100")

secret_number = random.randint(1, 100)
attempts = 0

while True:
    user_guess = int(input("Свой вариантик нахуй введи:"))
    attempts +=1

    if user_guess < secret_number:
        print ("иди нахуй, мало")
    elif user_guess > secret_number:
        print ("иди нахуй, много")
    else:
        print (f"ладно, не иди нахуй, угадал: {secret_number}")
        print (f"ты cходил нахуй {attempts} раз")
        break