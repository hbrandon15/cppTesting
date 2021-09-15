our_tuple = ('p','r','o','g','r','a', 'm', 'm', 'e', 'r')

# tuples have special in/not in functions to test values 

print('g' in our_tuple)
print('z' not in our_tuple)

# only two python methods work with tuples
# .count and .index

charCount = our_tuple.count('m')
indexNumber = our_tuple.index('a')
print(f'There are a total of {charCount} (m) characters')
print(f'The index of (a) is located at {indexNumber}')