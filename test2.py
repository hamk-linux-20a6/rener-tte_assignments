#!/usr/bin/python3
import random
import string
password_length = int(input("kuinka pitkän salasanan haluat?"))
password_characters = string.ascii_letters + string.digits
password = []
for x in range(password_length):
    password.append(random.choice(password_characters))
print(''.join(password))
