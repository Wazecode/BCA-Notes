def bubbleSort(list1):
    while not(checkIfSorted(list1)):
        for i in range(len(list1) - 1):
            if list1[i] > list1[i+1]:
                list1[i], list1[i+1] = list1[i + 1] , list1[i]

def checkIfSorted(list1):
    for i in range(len(list1) - 1):
        if( list1[i] > list1[i + 1]):
            return False
    return True

list1 = list(map(int,input("Enter the elements in the list: ").split()))

bubbleSort(list1)
print("Sorted array:", list1)
