#declare a fixed sized array
arr = [0 for i in range(10)]

arr.append()	#? Adds an element at the end of the list
arr.clear()	#? Removes all the elements from the list
arr.copy()	#? Returns a copy of the list
arr.count()	#? Returns the number of elements with the specified value
arr.extend()	#? Add the elements of a list (or any iterable), to the end of the current list
arr.index()	#? Returns the index of the first element with the specified value
arr.insert()	#? Adds an element at the specified position
arr.pop()	#? Removes the element at the specified position
arr.remove()	#? Removes the first item with the specified value
arr.reverse()	#? Reverses the order of the list
arr.sort()	#? Sorts the list

#? Iterate through the list
for x in arr:
  print(x)

#! Alternate approach
[print(x) for x in arr]

#? Array searching
if 4 in arr:
  print("Yes")

#! Alternate approach
newlist = [x for x in arr if "a" in x]

len(arr)	#? Returns the number of elements in the list

#? sort function
arr.sort(key = str.lower)    #? Sort the list based on the lowercase of each item

#? remove duplicates
arr = list(set(arr))

#? remove duplicate subarrays
[list(i) for i in set(map(tuple, arr))]

arr[:] = arr[0:5] #? array slicing and assigning it to same array