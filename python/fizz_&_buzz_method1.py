num = int(input("enter the range"))
val1 = 3
val2 = 5
i = 0
check = False

while i <= num:
  if i % val1 == 0:
    if i % val2 == 0:
      check = True
      print("fizz & buzz")
    if check != True:
      print("fizz")
    check = False
  elif i % val2 == 0:
    print("buzz" )
  else:
    print(i )
  i = i + 1