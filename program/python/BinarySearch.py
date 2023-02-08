def binarySearch(list1, n):
    low = 0
    high = len(list1) - 1
    mid = 0

    while low <= high:
        mid = (low + high) // 2

        if list1[mid] < n:
            low = mid + 1
        elif list1[mid] > n:
            high = mid - 1
        else:
            return mid

    return -1

list1 = list(map(int, input("Enter the elements in the list : ").split()))
num = int(input("Enter the element to be searched : "))

res = binarySearch(list1, num)

if res != -1:
    print("The Index of the given number is : " ,res)
else:
    print("The given element not found")
