#Program to find the name, number of times the name is written and frequency of each letter in his name
test_str = input("enter string: ")
res = None
arr = {}
test1=test_str + test_str
temp = (test1).find(test_str, 1)
res = test_str[:temp]
l=int(len(test_str)/temp);
print("The name entered is {}".format(res))
print("The frequency of occurance is {} times".format(l))
for keys in res:
    arr[keys] = arr.get(keys, 0)+1
print("The occurance of each letter is{} times".format(str(arr)))