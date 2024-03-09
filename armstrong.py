def arm_strong():
    print("input the number:")
    # Get user input
    num1 = str(input())
    # Count the number of digits
    count = len(num1)
    # Convert the input to an integer
    num1 = int(num1)
    # Initialize variables
    num2 = num1
    num3 = 0
    # Loop to calculate the sum of each digit raised to the power of the total count
    while num2 != 0:
        dij = num2 % 10
        num3 = num3 + (dij ** count)
        num2 = num2 // 10
    else:
        # Check if the sum is equal to the original number
        if num3 == num1:
            print("armstrong")
        else:
            print("not armstrong")
 # Call the function
arm_strong()












