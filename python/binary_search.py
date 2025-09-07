def binary_search(arr, search_element):
    start_index = 0
    end_index = len(arr) - 1

    while start_index <= end_index:
        mid_index = (start_index + end_index) // 2

        if arr[mid_index] == search_element:
            print(f"Element found at index {mid_index}")
            return
        elif arr[mid_index] > search_element:
            end_index = mid_index - 1
        else:
            start_index = mid_index + 1

    print("Element not found.")

def main():

    num = int(input("Enter the size of the array: "))
    input_array = []

    print("Enter the elements:")
    for _ in range(num):
        element = int(input())
        input_array.append(element)

    input_array.sort()
    search_element = 10
    binary_search(input_array, search_element)
    print()


    print("Input Test set started executing !!!!!!!")
    
    test1 = [4, 2, 9, 1, 5]
    test1.sort()
    binary_search(test1, search_element)

    test2 = [-3, 0, 2]
    test2.sort()
    binary_search(test2, search_element)

    test3 = [7, 3, 9, 3, 2, 1]
    test3.sort()
    binary_search(test3, search_element)

    test4 = [42]
    test4.sort()
    binary_search(test4, search_element)

if __name__ == "__main__":
    main()
