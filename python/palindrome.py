def is_palindrome(s):
    start = 0
    end = len(s) - 1
    while start < end:
        if s[start] != s[end]:
            return False
        start += 1
        end -= 1
    return True

def main():

    user_input = input("Enter a string to check if it's a palindrome: ")
    
    if is_palindrome(user_input):
        print(f'"{user_input}" is a palindrome.\n')
    else:
        print(f'"{user_input}" is not a palindrome.\n')

    print(" Input Test set started executing !!!!!!!")

    test_cases = [
        "radar",
        "hello",
        "level"
    ]

    for test in test_cases:
        result = is_palindrome(test)
        if result:
            status = "is"
        else:
            status = "is not"
        print(f'"{test}" {status} a palindrome.')
        

if __name__ == "__main__":
    main()


#simple method
# s = input("Enter a string: ").strip()

# if s != s[::-1]:
#     print("Not a palindrome")
# else:
#     print("Palindrome")