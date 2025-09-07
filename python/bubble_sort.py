def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] < arr[j]:
                arr[i] = arr[i] + arr[j]
                arr[j] = arr[i] - arr[j]
                arr[i] = arr[i] - arr[j]

def print_array(arr):
    print("\nsorted array is:", end=" ")
    for item in arr:
        print(item, end=" ")

def main():

    num = int(input("Enter the size of the array: "))
    input_array = []

    print("Enter the elements:")
    for _ in range(num):
        element = int(input())
        input_array.append(element)

    bubble_sort(input_array)
    print_array(input_array)
    print()


    print(" Input Test set started executing !!!!!!!")

    test1 = [4, 2, 9, 1, 5]
    bubble_sort(test1)
    print_array(test1)
    print()

    test2 = [-3, 0, 2]
    bubble_sort(test2)
    print_array(test2)
    print()

    test3 = [7, 3, 9, 3, 2, 1]
    bubble_sort(test3)
    print_array(test3)
    print()

    test4 = [42]
    bubble_sort(test4)
    print_array(test4)
    print()

if __name__ == "__main__":
    main()
