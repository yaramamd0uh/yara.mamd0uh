#file:100game
#purpose:
#author: yara mamdouh
#id:20231202
print("welcome to 100 game")
print("number of coins =0")
coins = 0
while coins <100:
    step =int(input("player 1:take number between 1:10 "))
    if step < 1 or step > 10 :
        print("choose a valid number between 1:10")
        step = int(input("player 1:take number between 1:10 "))
        coins += step
        print(f"now we have {coins}")
        if coins >= 100:
            print("the 1st player is winner")
            break
    else:
        coins +=step
        print(f"now we have {coins}")
        if coins >= 100:
         print("the 1st player is winner")
         break

    step=int(input("player 2:take number between 1:10 "))
    if step<1 or step>10:
        print("choose a valid number between 1:10")
        step = int(input("player 2:take number between 1:10 "))
        coins += step
        print(f"now we have {coins}")
        if coins >= 100:
            print("the 2nd player is winner")
            break
    else:
        coins +=step
        print(f"now we have {coins}")
        if coins >= 100:
         print("the 2nd player is winner")
         break

