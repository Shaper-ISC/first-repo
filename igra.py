import random

def is_valid_number(number):
    if number > 100 or number < 1:
        return False
    return True

print ("Сколько у тебя хуёв было в жопе")
print ("введи от 1 до 100")

secret_number = random.randint(1, 100)
attempts = 0

while True:
    try:
        user_guess = int(input("Свой вариантик нахуй введи: "))
    except ValueError:
         print("Еблан, это как по твоему? Введи нормально число")
         continue
    
    if not is_valid_number(user_guess):
        print("Давай уж тоже тут не придумывай.")
        continue

    attempts +=1
    if user_guess < secret_number:
        print ("иди нахуй, мало")
    elif user_guess > secret_number:
        print ("иди нахуй, много")
    else:
        print (f"ладно, не иди нахуй, угадал: {secret_number}")
        print (f"ты cходил нахуй {attempts} раз")
        break