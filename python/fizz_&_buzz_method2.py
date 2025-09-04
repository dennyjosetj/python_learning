num = int(input("enter the range"))
val1 = 3
val2 = 5
i = 0
check = False
while i <= num:
  if (i % val1 == 0) and (i % val2 == 0):
    print("fizz buzz")
  elif i % val1 == 0:
    print("fizz")
  elif i % val1 == 0:
    print("buzz")
  else:
    print(i)
  i =i + 1
