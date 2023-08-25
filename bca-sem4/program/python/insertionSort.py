def insertionSort(l):
    for i in range(1, len(l)):
        tmp = l[i]
        j = i - 1
        while(j >= 0 and tmp < l[j]):
            l[j+1] = l[j]
            j = j - 1
        l[j + 1] = tmp

list1 = list(map(int,input("Enter the elements in the list: ").split()))
insertionSort(list1)
print("Sorted List: ", list1)
