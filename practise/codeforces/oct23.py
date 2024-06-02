#https://codeforces.com/gym/470895/problem/B
def delete(s, t):
    common = 0
    for i in range(min(len(s), len(t))):
        if s[::-1][i] == t[::-1][i]:
            common += 1
        else:
            break

    return (len(s) + len(t) - (common*2))

#https://codeforces.com/gym/470895/problem/C
def powerTwo(arr):
    remove = 0
    trackIndex = [0 for i in range(len(arr))]
    
    for i in range(len(arr)):
        found = False
        if trackIndex[i] == 1:
            continue
        for j in range(0, len(arr)):
            if i == j:
                continue
            power = arr[i] + arr[j]
            if (power & power-1 == 0): #check if power of 2
                found = True
                trackIndex[i] = 1
                trackIndex[j] = 1
                break
        if found == False:
            remove += 1

    return remove

print(powerTwo([4, 7, 1, 5, 4, 9]))
print(powerTwo([1, 2, 3, 4, 5]))
print(powerTwo([16]))
print(powerTwo([1, 1, 1, 1023]))